#pragma once

#include "ofMain.h"
#include "Pig.h"

#define THREEPIG 2

class ofApp : public ofBaseApp{

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
    
    Pig piggy;
    Pig pigpig[THREEPIG];
    
    float circleX[THREEPIG];
    float circleY[THREEPIG];
    float velX[THREEPIG];
    float velY[THREEPIG];
    
    int colorScheme;
    ofColor c;
    
		
};
