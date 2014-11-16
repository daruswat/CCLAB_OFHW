#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    
//    posX = ofGetWindowWidth() /2;
//    posY = ofGetWindowHeight()/2;
   
   
   // set framerate
    ofSetFrameRate(100);
    
    
    
    
    
    
    // first position of balls
    // start evenly distributed, diagonally down to the right
    for(int i = 0; i<THREEPIGS; i++)
    {
        circleX[i] = ofGetWindowWidth()*0.15 * (i+1);
        circleY[i] = ofGetWindowHeight()*0.15 * (i+1);
        velX[i] = int(ofRandom(1, 4));
        velY[i] = int(ofRandom(1, 4));
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // collision detection: circle vs. circle
    for (int j = 0; j < THREEPIGS; j++){
        for (int k = j+1; k < THREEPIGS; k++){
            if (ofDist(circleX[j], circleY[j], circleX[k], circleY[k]) < 65){
                // if the circles hit going opposite directions,
                // both circles will reverse direction
                // (calculated separately for both x and y movement)
                if((velX[j] > 0 && velX[k] < 0) || (velX[j] < 0 && velX[k] > 0)){
                    velX[j] *= -1;
                    velX[k] *= -1;
                }
                if((velY[j] > 0 && velY[k] < 0) || (velY[j] < 0 && velY[k] > 0)){
                    velY[j] *= -1;
                    velY[k] *= -1;
                }
            }
        }
        
    }
    
    //ball hit ball
    
    for (int i = 0; i < THREEPIGS; i++){
        
        // collision detection: circle vs. wall
        if (circleX[i] < 30 || circleX[i] > ofGetWindowWidth()-30){
            velX[i] *= -1;
        }
        if (circleY[i] < 30 || circleY[i] > ofGetWindowHeight()-30){
            velY[i] *= -1;
        }
    
         update location of each circle
        circleX[i] += velX[i];
        circleY[i] += velY[i];
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    //
    ofSetColor(233,150,122);
    ofTriangle(posX + 0,posY-10,10,4,90,40);
    //     ofTriangle(posX + 60,posY-2,10,4,90,40);
    
    //head
    ofSetColor(255,192,203);
    ofCircle(posX,posY,size);
    
    //nose
    ofSetColor(205,92,92);
    ofCircle(posX + 1, posY-1,size/3);   // ตาอยุ่ในวงหัวแล้ว
    //    ofCircle(posX - 25, posY-5,size/3);
    
    // nose2
    ofSetColor(105,105,105);
    ofCircle(posX + 7, posY-2,size/12);   // ตาอยุ่ในวงหัวแล้ว
    ofCircle(posX - 7, posY-2,size/12);
    
    //eyes
    ofSetColor(0);
    ofCircle(posX + 30, posY-30,size/8);   // ตาอยุ่ในวงหัวแล้ว
    ofCircle(posX - 30, posY-30,size/8);
    
    ofBackgroundGradient(ofColor::gray,ofColor(30, 10, 30), OF_GRADIENT_CIRCULAR);
    for(int i = 0; i<THREEPIGS; i++)
    {
        c = ofColor::fromHsb(colorScheme, 255, (255/THREEPIGS+1) * (i+1));
        ofSetColor(c);
        ofFill();
        ofCircle(circleX[i], circleY[i], 35);
    }
    ofSetColor(255);
    ofDrawBitmapString("Press the r, y, g, or b keys to change color", 10, 20);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == 'r' || key == 'R'){
        colorScheme = 0;
    }
    if (key == 'y' || key == 'Y'){
        colorScheme = 40;
    }
    if (key == 'g' || key == 'G'){
        colorScheme = 85;
    }
    if (key == 'b' || key == 'B'){
        colorScheme = 170;
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
