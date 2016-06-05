#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, ApplicationManager *appManager) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    manager(appManager)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

}

void MainWindow::OpenSingleServerDialog(Server *server)
{
    if (this->addEditServerDialog == NULL)
        this->addEditServerDialog = new AddEditServerDialog(this, server);
    else {
        delete this->addEditServerDialog;
        this->addEditServerDialog = new AddEditServerDialog(this, server);
    }
    addEditServerDialog->show();
}

void MainWindow::OpenSingleServerDialog()
{
    if (this->addEditServerDialog == NULL)
        this->addEditServerDialog = new AddEditServerDialog(this);
    else {
        delete this->addEditServerDialog;
        this->addEditServerDialog = new AddEditServerDialog(this);
    }
    addEditServerDialog->show();
}

void MainWindow::on_addServerButton_clicked()
{
    OpenSingleServerDialog();
    if (addEditServerDialog->exec())
    {
        Server srv = addEditServerDialog->getDialogResult();
        manager->getFavourites()->AddServer(srv);
        ui->serverList->addItem(manager->getFavourites()->ServerAsString(srv).c_str());
    }
}

void MainWindow::on_removeServerButton_clicked()
{
    QModelIndexList indexes = ui->serverList->selectionModel()->selectedIndexes();
    if (indexes.length() == 1)
    {
        QModelIndex index = indexes.first();
        manager->getFavourites()->RemoveServer(index.row());
        qDeleteAll(ui->serverList->selectedItems());
    }
}

void MainWindow::on_editServerButton_clicked()
{
    QModelIndexList indexes = ui->serverList->selectionModel()->selectedIndexes();
    if (indexes.length() == 1)
    {
        QModelIndex index = indexes.first();
        Server srv = manager->getFavourites()->Get(index.row());
        OpenSingleServerDialog(&srv);
        if (addEditServerDialog->exec())
        {
            Server srv = addEditServerDialog->getDialogResult();
            manager->getFavourites()->UpdateServer(index.row(), srv);
            QListWidgetItem *item = ui->serverList->item(index.row());
            item->setText(manager->getFavourites()->ServerAsString(srv).c_str());
        }
    }
}

void MainWindow::setManager(ApplicationManager *value)
{
    manager = value;
    FillWidgetList(ui->serverList, manager->getFavourites()->getServerListAsString());
}

void MainWindow::closing()
{
    delete ui;
    delete conversation;
    delete addEditServerDialog;
    delete informDialog;
    delete manager;
    //this->deleteLater();

}

void MainWindow::FillWidgetList(QListWidget *list, std::vector<std::string> data)
{
    for (int i = 0; i < data.size(); ++i){
        QString str = QString::fromStdString(data.at(i).c_str());
        list->addItem(str);
    }

}

void MainWindow::on_connectToServerButton_clicked()
{
    FieldValidator validator;
    try{
        std::string nickname = validator.stringIsEmptyChecker("Nickname", ui->nicknameLineEdit->text().toStdString());
        conversation = new Conversation(this);
        conversation->setManager(manager);
        QModelIndexList indexes = ui->serverList->selectionModel()->selectedIndexes();
        if (indexes.length() != 1) validator.throwException("Server list", "Please select the server");
        this->hide();
        conversation->Live(manager->getFavourites()->Get(indexes.first().row()), nickname);
        conversation->show();
    }
    catch (const std::exception& ex){
        if (this->informDialog == NULL)
            this->informDialog = new InformDialog(ex.what());
        else {
            delete this->informDialog;
            this->informDialog = new InformDialog(ex.what());
        }
        informDialog->show();
    }

}
