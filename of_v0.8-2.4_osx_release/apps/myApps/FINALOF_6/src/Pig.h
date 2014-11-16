#pragma once

#include "ofMain.h"

// Create class for PIG charactor

class Pig {
    public :
    
    int x;
    int y;
    int vx;
    int vy;
    
    //constructor
    Pig();
    
    //variable
    //positionX and positionY
    float posX, posY;
    
    //float velX, velY;
    float velX, velY, velZ;
    
    float size;
    float Pigg;
    
    
    //method
    void setup();
    void move();
    void display();
    
    void reset(float newPosX, float newPosY);
    
};

// Creat class for WOLF charactor

class Wolf{
    
    public :
    
    //constructor
    Wolf();
    
    //variable
    //positionX and positionY
    float posXa, posYa;
    
    //float velX, velY;
    float velXa, velYa, velZa;
    
    float sizea;
    float Wolfa;
    
    
    //method
    void setup();
    void move();
    void display();
    
    void reset(float newPosX, float newPosY);
};

