#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofBackground(253,245,230);
    ofSetCircleResolution(64);
    
    
//    sounds[0].loadSound("beep-02.mp3");
//    sounds[1].loadSound("beep-10.mp3");
//    sounds[2].loadSound("button-1.mp3");
//    sounds[3].loadSound("button-09.mp3");
    
    piggy.setup();
    
    for (int i = 0; i<THREEPIG; i++) {
        pigpig[i].setup();
        
    }
    
    wolfy.setup();
    for (int i = 0; i<ONEWOLF; i++) {
        wolf[i].setup();
        
    }
    
     wolfy.setup();
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0,128,0);
    ofRect(-0,0,1024,150);
    
    piggy.display();
    
    for(int i = 0; i<THREEPIG; i++) {
        pigpig[i].display();
    }
    
    wolfy.display();
    for(int i = 0; i<ONEWOLF; i++) {
        wolf[i].display();
    }
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    for(int i = 0; i< ONEWOLF; i=i+1) {
        pigpig[i].reset(mouseX+1,mouseY+3);
    }

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
