#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //creat an array that defines our color // every time we draw
        // type color name
    myColors[0] = ofColor:: magenta;  // ::this is function of this
    myColors[1] = ofColor:: lawnGreen;
    myColors[2] = ofColor:: salmon;
    myColors[3] = ofColor:: steelBlue;
    myColors[4] = ofColor:: chartreuse;
    
    //set our bg Color
    ofBackground(0);
    //bg will update every time we draw
    ofSetBackgroundAuto(false);  // dont refresh bg coz we want mousedragged same as (true)
    
    
    //only draw the circle stroke
    ofNoFill();
    
    
    //set up our circles
    ofSetCircleResolution(60);
    ofEnableSmoothing();
    
    //Make th bg renew automatically
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    //add a switch case thats changes color depending on
    // the key pressed
    
    switch(key){
            case '1':
            ofSetColor(myColors[0]);
            break;
            case '2':
            ofSetColor(myColors[1]);
            break;
            case '3':
            ofSetColor(myColors[2]);
            break;
            case '4':
            ofSetColor(myColors[3]);
            break;
            case '5':
            ofSetColor(myColors[4]);
            break;
        default:      // elas
            ofSetColor(ofColor::whiteSmoke);
            break;
            
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    //make it bigger
    circleSize++;
    
    //draw a circle
    ofCircle(x, y, circleSize);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    //reset circle size
    

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
