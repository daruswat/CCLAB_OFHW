//
//  Ball.cpp
//  CCLAB_WEEK3_3
//
//  Created by Daruswat on 11/4/14.
//
//

#include "Ball.h"

//-----------------------------------------------------------

void Ball::setup(float mX,float mY) {
    
    //define x and y coordinates
    
   
    pos.set(mX,mY);
    
    //set color random
    
    color = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
    
    //set velocity to random
    vel.x = ofRandom(-5,5);
    vel.y = ofRandom(-5,5);
   
    
};


//-----------------------------------------------------------
void Ball::update(){
    
    //move ball
    pos += vel;
    
    
    //add ball bounce
    
    if (pos.x >= ofGetWidth()){
        pos.x = ofGetWidth();
        vel.x *= -1;
        //cout << "bounced off the left side!" <<endl;
    }
    if(pos.x <= 0) {
        pos.x = 0;
        vel.x *= -1;
        //cout << "bounced off the left side!" <<endl;
    }
    if (pos.y >= ofGetWidth()){
        pos.y = ofGetWidth();
        vel.y *= -1;
        //cout << "bounced off the left side!" <<endl;
    }
    if(pos.y <= 0) {
        pos.y = 0;
        vel.y *= -1;
        //cout << "bounced off the left side!" <<endl;
    }
    
};




//-----------------------------------------------------------

void Ball::draw(){
    
    //set color + draw ball
    ofSetColor(color);
    ofCircle(pos.x,pos.y,10);
    
};
















