
#include "Pig.h"

//PIG CHARACTOR

//where the pigs start on screen

Pig :: Pig(){
    posX = ofGetWindowWidth() /2;
    posY = ofGetWindowHeight()/2;
    
}

//tell the size of the pigs
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
        
    
        ofSetColor(233,150,122);
        ofTriangle(posX + 0,posY-10,10,4,90,40);
        //ofTriangle(posX + 60,posY-2,10,4,90,40);
        
        //head
        ofSetColor(255,192,203);
        ofCircle(posX,posY,size);
        
        //nose
        ofSetColor(205,92,92);
        ofCircle(posX + 1, posY-1,size/3);
        //ofCircle(posX - 25, posY-5,size/3);
        
        //nose2
        ofSetColor(105,105,105);
        ofCircle(posX + 7, posY-2,size/12);
        ofCircle(posX - 7, posY-2,size/12);
        
        //eyes
        ofSetColor(0);
        ofCircle(posX + 30, posY-30,size/8);
        ofCircle(posX - 30, posY-30,size/8);
        
        
}

void Pig::reset(float newPosX, float newPosY){
    
    posX = newPosX;
    posY = newPosY;
    
    size = ofMap(newPosX,0,ofGetWindowWidth(), 50,100);
    
}

//WOLF CHARACTOR

Wolf :: Wolf(){
    posXa = ofGetWindowWidth() /4;
    posYa = ofGetWindowHeight()/4;
    
}


void Wolf::setup(){
    
    sizea = (100);
    velXa = ofRandom(-5,5);
    velYa = ofRandom(-4,5);
    
}

void Wolf::move(){
    
    posXa = posXa + velXa;
    posYa = posYa + velYa;
    
    if(posXa > ofGetWindowWidth() || posXa < 0){
        velXa = velXa * (-1);
    }
    
    if(posYa > ofGetWindowHeight() || posYa < 0)
        velYa = velYa * (-1);
    
    
}


void Wolf::display(){
 
    
    //head
    ofSetColor(139,69,19);
    ofCircle(posXa,posYa,sizea);
    
    
    //nose
    ofSetColor(105,105,105);
    ofCircle(posXa + 1, posYa + 15,sizea/4);
 
    
    //eyes 3
    ofSetColor(105,105,105);
    ofCircle(posXa + 30, posYa-30,sizea/4);
  
    
    //eyes 2
    ofSetColor(105,105,105);
    ofCircle(posXa -30, posYa-30,sizea/4);
   
    
    //eyes
    ofSetColor(0);
    ofCircle(posXa + 30, posYa-30,sizea/5);
    ofCircle(posXa - 30, posYa-30,sizea/5);
    
    
    //eyes1
    ofSetColor(255);
    ofCircle(posXa + 30, posYa-30,sizea/14);
    ofCircle(posXa - 30, posYa-30,sizea/14);
    
    ///ears1
    ofSetColor(0);
    ofTriangle(posXa+90,posYa+20,posXa+80,posYa-40,posXa+30,posYa-90);
    ofTriangle(posXa-50,posYa-80,posXa-50,posYa+50,posXa-80,posYa-10);
}











