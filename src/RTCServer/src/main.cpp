#include <iostream>


int main(void){


    const std::string stunServer = "stun:stun.l.google.com:19302";
    //create a peer connection factory
    auto pcf = webrtc::CreatePeerConnectionFactory();

    //prepare config for Ice servers
    webrtc::PeerConnectionInterface::RTCConfiguration config;
    
    webrtc::PeerConnectionInterface::IceServer server;
    server.urls.push_back(stunServer); 
    config.servers.push_back(server);

    // A handler for various events in the process of peer connection creation
    const PeerConnectionEventHandlers *handlers = new PeerConnectionEventHandlers();

    // Creating a peer connection
    auto pc = pcf->CreatePeerConnection(config, nullptr, nullptr, (webrtc::PeerConnectionObserver *) handlers);

    // A callback for session creation
    
}