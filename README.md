# VirtualShutterProject-VoiceCommunicator
Yet another studies project - TeamSpeak like communicator written in C++ Qt.

To build exe run from command prompt: <br/>
C:\Qt\Qt5.6.0\5.6\msvc2015_64\bin (or similar pah) > windeployqt --qmldir \<project source\> \<project release exe\>

However, if you wish to use our version, you can download it from here: <br/>
https://drive.google.com/drive/folders/0B5qz9TNgnJ5gTjB0Ql9ia1hPWGc <br/>
Also in link above some screenshots are available - check them out.
Application was tested on Windows 7 and Windows 10.

# Two words about using it
## Client
* As simple as it is - type server address, click connect. 
* Make sure ports are opened, not blocked by firewall - if you connect to server on port 1000 then opened should be 1000 and 999 for both UDP and TCP.
* Add application to firewall whitelist. 
* If you have more than one recording device active - deactive them, leave only device that's handling microphone.

##Server
* Address IP you will be listenting on should be available for one of your network cards.
* Ports should not be blocked in firewall / router etc.


