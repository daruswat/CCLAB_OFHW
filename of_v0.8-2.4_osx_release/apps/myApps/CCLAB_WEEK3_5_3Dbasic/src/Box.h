#pragma once
#include "ofMain.h"

class Box {
public:
    void setup(float mX, float mY);
    void update();
    void draw();
    
    // an ofVec3f
    
    ofVec3f pos;
    ofVec3f vel;
    
    ofColor color;
    
};