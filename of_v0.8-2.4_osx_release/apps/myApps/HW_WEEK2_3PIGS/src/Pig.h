//
//  Pig.h
//  HW_WEEK2_3PIGS
//
//  Created by Daruswat on 11/2/14.
//
//

#pragma once

#include "ofMain.h"

class Pig {
    public :
    
    //constructor
    Pig();
    
    //variable
    //positionX and positionY
    float posX, posY;
    //ค่าของ...
//    float velX, velY;
    float velX, velY, velZ;
    
    float size;
    
    float Pigg;
    
    
    //method
    void setup();
    void move();
    void display();
    
    void reset(float newPosX, float newPosY);
    
    
    
};
