#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    
    // set x + y positions
    //Grt a random variable between 0 and either the width or the height of
    //the screen
    x = ofRandomWidth();
    y = ofRandomHeight();
    //set velacaties by using ofRandom th find a float btw two values
    
    xVel = ofRandom(-5,5);
    yVel = ofRandom(-5,5);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //make the ball move
    
    x += xVel;
    y += yVel;
    
    //add the bounce
    if (x >= ofGetWidth()){
        x = ofGetWidth();
        xVel *= -1;
        cout << "bounced off the left side!" <<endl;
    }
    if(x <= 0) {
        x = 0;
        xVel*= -1;
        cout << "bounced off the left side!" <<endl;
    }
    if (y >= ofGetWidth()){
        y = ofGetWidth();
        xVel *= -1;
        cout << "bounced off the left side!" <<endl;
    }
    if(y <= 0) {
        y = 0;
        yVel*= -1;
        cout << "bounced off the left side!" <<endl;
    }
    
    
    

    // increase the position by the velocity for x + y
    // add bouncing
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // draw a circle
    
    ofSetColor(255,0,255);
    ofCircle(x,y,50);
    
    //conver
    string xPos = ofToString(x);
    string yPos = ofToString(y);
    //use just in here pos x y
    
    string debugString = "x: " + xPos + "\n" +"y: " +yPos;
    
    //draw our on screen output
    ofSetColor (255,0,0);
    ofDrawBitmapString(debugString,30,30);
    //ofDrawBitmapString(debugString,ofGetWidth/2,ofGetHeight/2); ?
    

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
