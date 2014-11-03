#include "ofApp.h"

int myCircleX;
int myCircleY;

// new rectangle

int myRectX;
int myRectY;



//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(100);
    ofBackground(230,230,240);
   
    
    myCircleX = 100;
    myCircleY = 400;
    
    myRectX = 300;
    myRectY = 100;
    
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    //myCircleX+=4;
    //ofDrawBitmapString("'s' toggles shader", 10, 20);
    
    

    
    myCircleX++;
    if(myCircleX > 1024)
    {
        myCircleX = 100;
    }
    
    myRectY++;
    if(myRectY > 768)
    {
        myRectY = 50;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);
    
    
    myCircleX = myCircleX+ 1;
    
    ofSetColor(255,0,255);
    ofCircle(myCircleX, myCircleY, 60);
    
    //rectangle
    ofSetColor(0,0,255);
    ofRect(myRectX,myRectY,100,80);

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
