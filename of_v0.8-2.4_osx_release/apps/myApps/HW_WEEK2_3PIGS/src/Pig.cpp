//
//  Pig.cpp
//  HW_WEEK2_3PIGS
//
//  Created by Daruswat on 11/2/14.
//
//

#include "Pig.h"


Pig :: Pig(){
    posX = ofGetWindowWidth() /2;
    posY = ofGetWindowHeight()/2;
    
}

void Pig::setup(){
    
    size = ofRandom(70,90);
    velX = ofRandom(-5,5);
    velY = ofRandom(-4,5);
    
}

void Pig::move(){
    
    posX = posX + velX;
    posY = posY + velY;
    
    if(posX > ofGetWindowWidth() || posX < 0){
        velX = velX * (-1);
    }
    
    if(posY > ofGetWindowHeight() || posY < 0)
        velY = velY * (-1);
    
   
}


void Pig::display(){
    
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
    
   
    
}

void Pig::reset(float newPosX, float newPosY){
    
    posX = newPosX;
    posY = newPosY;
    
    size = ofMap(newPosX,0,ofGetWindowWidth(), 50,100);
    
    
    
    
}








