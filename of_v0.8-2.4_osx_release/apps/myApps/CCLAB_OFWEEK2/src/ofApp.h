#pragma once

#include "ofMain.h"
#include "Walrus.h"

//number of Walrus cant change unless you wrote the code
#define NUMERNIES 100

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
    
    
    
    //
    Walrus bert;
    
    //Walrus jane;
    
    Walrus ernie[NUMERNIES];
		
};
