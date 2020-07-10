# WebRTC-WebSocket_C-_backend_server


## Important Disclaimer:

I would like to not that I do not claim any rights towards the external libraries and source code used in this repository. Mainly, the WebRTC library under the folder WebRTCsrc is
sourced from google's open source projects.

## Introduction:
This project is done in an attempt to stream a webcam's feed from a vehicle containing a Raspberry PI to the frontend of a website in real time. Due to the limitations of the WebRTC 
API only working on browsers, I decided to create the backend server using the native WebRTC source code. This involves dealing with some other libraries such as websocketpp for bootstrapping and maintaining 
WebRTC connections to the clients. 

## Progress so far:
I have only created the backend C++ part of the project. The next steps would be to test it using a web frontend and then from that, I need to somehow manage forwarding the webcam's stream
from the raspberry PI to the C++ backend and then to the frontend.
