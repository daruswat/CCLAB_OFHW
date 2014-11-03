//
//  Walrus.h
//  CCLAB_OFWEEK2
//
//  Created by Daruswat on 10/28/14.
//
//

#pragma once

#include "ofMain.h"  // openframework library

class Walrus {
public:
    
    //constructor
    Walrus();
    
    //variable - for animation
    float posX, posY;
    float velX, velY;
    
    float size;
    
    float r, g, b;
    
    //method
    void setup();
    void move();
    void display();
    
    void reset(float newPosX, float newPosY);
    
};


