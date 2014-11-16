#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
    #define THREEPIGS 3

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    
    
    float circleX[THREEPIGS];
    float circleY[THREEPIGS];
    float velX[THREEPIGS];
    float velY[THREEPIGS];
    
    float size;
    float Pigg;
    float posX, posY;
    
    int colorScheme;
    ofColor c;
};
