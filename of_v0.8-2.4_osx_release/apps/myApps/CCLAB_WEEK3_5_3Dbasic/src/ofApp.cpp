#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    counter = 0;
    ofNoFill();
    
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //every time we loop, increase the counter by 1
    counter ++;
    
    if(counter >=5){
        Box sgtPepper;
        sgtPepper.setup(ofGetWindowWidth()/2,ofGetWindowHeight()/2);
        boxVector.push_back(sgtPepper);
        counter = 0;
        
    };

    
    // on every loop, update each element in the box
    
    for(int i=0; i< boxVector.size(); i++){
        boxVector[i].update();
    };
    
    while(boxVector.size() > 100 ){
        boxVector.erase(boxVector.begin());
        
        
    };
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i< boxVector.size(); i++){
        boxVector[i].draw();
    };
    
    ofSetColor(255);
    string debugString = "number...Boxes: " + ofToString (boxVector.size()) +"\n" 
    

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
