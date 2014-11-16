#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    
    // creat a new Ball object, call Ball.setup()
    
    for (int i = 0;  i<5; i++){  // 5 or any number start point
        
        // class Ball
        Ball stevieNicks;
        stevieNicks.setup(ofRandomWidth(), ofRandomHeight());
        ballVector.push_back(stevieNicks);
        // push in javascript
        
    };

}

//--------------------------------------------------------------
void ofApp::update(){

    //update each item in the ball vector
    for(int i=0; i <ballVector.size(); i++){
        ballVector[i].update();
        
        
    };
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i = 0; i< ballVector.size(); i++){
        ballVector[i].draw();
    }
    
    ofSetColor(0);
    ofDrawBitmapString("click to add......",30,30);
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch(key){
        case OF_KEY_DOWN:
            if (ballVector.size() > 0){
                ballVector.erase(ballVector.begin());
                
            }
                break;
                
                default:
            cout << "no more...."<< endl;
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

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    for(int i = 0; i< 5; i++){
        Ball barryGibbs;  // new ball
        barryGibbs.setup(x,y);
        ballVector.push_back(barryGibbs);
      // everytime presses make 5 balls
    }

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
