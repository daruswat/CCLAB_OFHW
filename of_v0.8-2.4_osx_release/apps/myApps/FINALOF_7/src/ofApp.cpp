#include "ofApp.h"


//define clound
//int myCircleX;
//int myCircleY;
//int myCircleX1;
//int myCircleY1;

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(224,255,255);   //(0,128,0)
    ofSetCircleResolution(64);
    
//    //clound begin pistion
//    myCircleX = 100;
//    myCircleY = 100;
//    
//    myCircleX1 = 300;
//    myCircleY1 = 100;
    
    
    //from example
    ofSetVerticalSync(true);
    // slow       = 1
    // faster     = 2
    // super fast = 3
    mode = 1;
    
    //sound
    sounds[0].loadSound("Pig-SoundBible.com-1026656068.mp3");
    sounds[1].loadSound("Merlin-Mark_Mattingly-901094861.mp3");
    sounds[2].loadSound("Pig Oinking-SoundBible.com-1904855325.mp3");
    sounds[3].loadSound("Snorting-SoundBible.com-748123769.mp3");
    
    //pigs making sound
    for (int i = 0; i<THREEPIG; i++) {
        pigpig[i].setup();
        
        pigpig[i].x = ofRandomWidth();
        pigpig[i].y = ofRandomHeight();
        pigpig[i].vx = ofRandom(-10,10);
        pigpig[i].vy = ofRandom(-10,10);
    }
    
    //display pig and wolf
    piggy.setup();
    wolfy.setup();


}

//--------------------------------------------------------------
void ofApp::update(){
    
    //condition from example
    //sound
    for(int i = 0; i<2; i++){
        pigpig[i].move();
        pigpig[i].x = pigpig[i].x + pigpig[i].vx;
        pigpig[i].y = pigpig[i].y + pigpig[i].vy;
        
        if (pigpig[i].x<0 || pigpig[i].x > ofGetWindowWidth()) {
            pigpig[i].vx = -pigpig[i].vx;
            
            int randomSound = ofRandom(0,4);
            sounds[randomSound].play();
        }
        
        if (pigpig[i].y<0 || pigpig[i].y > ofGetWindowHeight()) {
            pigpig[i].vy = pigpig[i].vy;
            
            int randomSound = ofRandom(0,4);
            sounds[randomSound].play();
        }
        
    }
 
    
    
    //snow : condition from library
    // add points all the time
    if(points.size() < 1000) {
        for (int i=0; i<10; i++) {
            addPoint(0,0);  //ofGetWidth(), ofGetHeight()
        }
    }
    
    // move all the points around
    for (unsigned int i=0; i<points.size(); i++) {
        
        speeds[i].y += 0.04; // some grav
        points[i]   += speeds[i];
        speeds[i]   *= 0.98;
        
        // move from the mouse
        ofVec2f mouseVec = ofVec2f(ofGetMouseX(), ofGetMouseY()) - points[i];
        if(mouseVec.length() < 80) {
            mouseVec.normalize();
            speeds[i] -= mouseVec;
        }
        
        // wrap the screen
        if(points[i].x > ofGetWidth())    points[i].x = 1;
        if(points[i].x < 0)               points[i].x = ofGetWidth()-1;
        if(points[i].y > ofGetHeight())   points[i].y = 1;
        if(points[i].y < 0)               points[i].y = ofGetHeight()-1;
    }
    //make pig and wolf baby!!!
    wolfy.move();
    piggy.move();
    
    
//    //clound
//    
//    myCircleX++;
//    if(myCircleX > 1024)
//    {
//        myCircleX = 10;
//    }
//    
//    myCircleX1++;
//    if(myCircleX1 > 1024)
//    {
//        myCircleX1 = 300;
//    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //snow : condition from library
    // draw the points the slow way
    if(mode == 1) {

        ofSetColor(70,130,180);
        glBegin(GL_POINTS);
        for (unsigned int i=0; i<points.size(); i++) {
            glVertex2f(points[i].x, points[i].y);
        }
        glEnd();

    }
    // super fast (vbo)
    else if(mode == 3) {
        ofSetColor(255);
        vbo.setVertexData(&points[0], (int)points.size(), GL_DYNAMIC_DRAW);
        vbo.draw(GL_POINTS, 0, (int)points.size());
    }

    //display another pig
piggy.display();
    
    for(int i = 0; i<THREEPIG; i++) {
        pigpig[i].display();
    }
    //wolf is here too
    //wolfy.display();
    
    for(int i = 0; i<ONEWOLF; i++) {
        wolf[i].display();
    }
    
    
    
//    //clound
//    myCircleX = myCircleX+1;
//    
//    ofSetColor(65,105,225);
//    ofCircle(myCircleX, myCircleY, 60);
//    
//    ofSetColor(0,0,139);
//    ofCircle(myCircleX, myCircleY1, 45);
    
    
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    //can move pig with mouse
    for(int i = 0; i< ONEWOLF; i=i+1) {
        wolf[i].reset(mouseX+1,mouseY+3);
    }
    
   
    
    //codition from example
    // add a bunch as you drag
    for (int i=0; i<200; i++) {
        addPoint(x, y);
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
