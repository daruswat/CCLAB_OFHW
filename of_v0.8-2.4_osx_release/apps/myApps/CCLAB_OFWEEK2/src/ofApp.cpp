#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(50);
    ofSetCircleResolution(50);
    
    bert.setup(); // call setup function for bert
    
    //jane.setup();
    
    
    
    for (int i = 0; i < NUMERNIES; i++){
        //ernie[i].setup();  many earni
        ernie[i].setup();
    }
    
    ernie[77].size = 150;  //ernie number 77 - dotn have to do it
}

//--------------------------------------------------------------
void ofApp::update(){
    
    bert.move();
    
    for(int i = 0; i< NUMERNIES; i=i+1) {
        ernie[i].move();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    //will draw bert to the screen
    
    bert.display();
    
    //jane.display();
    
    for(int i = 0; i< NUMERNIES; i++) {
        ernie[i].display();
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

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    bert.size += 10;
    
    for(int i = 0; i< NUMERNIES; i=i+1) {
        ernie[i].reset(mouseX,mouseY);
    }
// click then come close to ouse then move out

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
