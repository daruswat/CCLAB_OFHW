

#include "Box.h"





//-------------------------------------------

void Box::setup(float mX, float mY){
    
    pos.set(mX, mY, -1000.0);
    
    color = ofColor(ofRandom(255), ofRandom(255),ofRandom(255));
    
    
    vel.x = ofRandom(-1,1);
    vel.y = ofRandom(-1,1);
    vel.z = ofRandom(3,10);
    
    
    
    
};



//-------------------------------------------

void Box::update(){
    
    pos += vel;
    
    
    
};


//-------------------------------------------

void Box::draw(){
    
    ofSetColor(color);
    ofDrawBox(pos.x,pos.y,pos.z,30);
    
};