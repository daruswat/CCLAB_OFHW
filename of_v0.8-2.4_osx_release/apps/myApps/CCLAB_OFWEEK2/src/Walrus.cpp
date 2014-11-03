//
//  Walrus.cpp
//  CCLAB_OFWEEK2
//
//  Created by Daruswat on 10/28/14.
//
//

#include "Walrus.h"


Walrus :: Walrus(){
    posX = ofGetWindowWidth() * 0.5; //  /2  same meaning  start at the center
    posY = ofGetWindowHeight() * 0.5;
}

void Walrus::setup() {
    
    size = ofRandom(40,60);
    velX = ofRandom(-5,5);
    velY = ofRandom(-4,5); // so see all
    
    r = ofRandom(255);
    g = ofRandom(255);
    b = ofRandom(255);
}

void Walrus::move  (){
    
    posX = posX + velX;
    posY +=velY; // same as top line but another way to write
    
    if ( posX > ofGetWindowWidth() || posX < 0 ){
        velX = velX * (-1); // กลัวตกขอบเลยสั้งว่าถ้่าเกินให้เด้งกลับ
    
    }
    
    
    if ( posY > ofGetWindowHeight() || posY < 0)
        velY *= (-1);
}

void Walrus::display(){
    
            //head
            ofSetColor(r,g,b);
            ofCircle(posX,posY,size);
            
            //eyes
            ofSetColor(0);
            ofCircle(posX + 25, posY-5,size/3);   // ตาอยุ่ในวงหัวแล้ว
            ofCircle(posX - 25, posY-5,size/3);
            
            //task
            ofSetColor(200);
            ofRect(posX-15,posY+30,10,30);
            ofRect(posX+5,posY+30,10,30);
            
        }
        
        
void Walrus::reset(float newPosX,float newPosY){
            posX = newPosX;
            posY = newPosY;
            
            
            
            size = ofMap(newPosX, 0, ofGetWindowWidth(),30,80);
        }











