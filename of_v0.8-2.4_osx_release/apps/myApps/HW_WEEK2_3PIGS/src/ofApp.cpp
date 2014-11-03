#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(253,245,230);
    ofSetCircleResolution(64);
    
    piggy.setup();
    
    for (int i = 0; i<THREEPIG; i++) {
        pigpig[i].setup();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    piggy.move();
    
    for(int i = 0; i<THREEPIG; i=i+1){
        pigpig[i].move();
    }
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    piggy.display();
    
    for(int i = 0; i<THREEPIG; i++) {
        pigpig[i].display();
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
    
   

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    for(int i = 0; i< THREEPIG; i=i+1) {
        pigpig[i].reset(mouseX+1,mouseY+3);
    }

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
