#pragma once
#include "ofMain.h"

class Ball{
    
public:
    void setup(float mX, float mY); //_x y can be anything coaz watnt the different from x y float x y
    void update();
    void draw();
    
    
    // creat vector OBJECTS that hold two variables each.
    ofVec2f pos;
    ofVec2f vel;
    
    ofColor color;
    
};