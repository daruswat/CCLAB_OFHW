#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //ofBackgroundHex(0x57554c);
    
    ofBackground(0,0,0);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    
    
    // slow       = 1
    // faster     = 2
    // super fast = 3
    mode = 3;
    
    //camera
    
   camWidth 		= 640;	// try to grab at this size.
  camHeight 		= 480;
    
  vidGrabber.setVerbose(true);
  vidGrabber.initGrabber(camWidth,camHeight);
    
    font.loadFont("Courier New Bold.ttf", 9);
    
    // this set of characters comes from processing:
    //http://processing.org/learning/library/asciivideo.html
    
    // changed order slightly to work better for mapping
    asciiCharacters =  string("  ..,,,'''``--_:;^^**""=+<>iv%&xclrs)/){}I?!][1taeo7zjLunT#@JCwfy325Fp6mqSghVd4EgXPGZbYkOA8U$KHDBWNMR0Q");
    
    ofEnableAlphaBlending();
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //camera
    vidGrabber.update();
    
    
    // add points all the time
    if(points.size() < 500000) {
        for (int i=0; i<30; i++) {
            addPoint(ofGetWidth()/2, ofGetHeight()/2);
        }
    }
    
    // move all the points around
    for (unsigned int i=0; i<points.size(); i++) {
        
        speeds[i].y += 0.04; // some grav
        points[i]   += speeds[i];
        speeds[i]   *= 0.98;
        
        // move from the mouse
        ofVec2f mouseVec = ofVec2f(ofGetMouseX(), ofGetMouseY()) - points[i];
        if(mouseVec.length() < 100) {
            mouseVec.normalize();
            speeds[i] -= mouseVec;
        }
        
        // wrap the screen
        if(points[i].x > ofGetWidth())    points[i].x = 1;
        if(points[i].x < 0)               points[i].x = ofGetWidth()-1;
        if(points[i].y > ofGetHeight())   points[i].y = 1;
        if(points[i].y < 0)               points[i].y = ofGetHeight()-1;
    }
    


}

//--------------------------------------------------------------
void ofApp::draw(){

    // draw the points the slow way
    if(mode == 1) {
#ifdef TARGET_OPENGLES
        ofSetColor(255);
        ofDrawBitmapString("OpenGL immediate mode not available in OpenGL ES. Press 2 or 3.",ofGetWidth() / 2.0f - 300,ofGetHeight() / 2.0f);
#else
        ofSetColor(255);
        glBegin(GL_POINTS);
        for (unsigned int i=0; i<points.size(); i++) {
            glVertex2f(points[i].x, points[i].y);
        }
        glEnd();
#endif
    }
    
    // a bit faster
    else if(mode == 2) {
        ofSetColor(255);
        
        glEnableClientState(GL_VERTEX_ARRAY);
        glVertexPointer(2, GL_FLOAT, 0, &points[0].x);
        glDrawArrays(GL_POINTS, 0, (int)points.size());
        glDisableClientState(GL_VERTEX_ARRAY);
    }
    
    // super fast (vbo)
    else if(mode == 3) {
        ofSetColor(255);
        vbo.setVertexData(&points[0], (int)points.size(), GL_DYNAMIC_DRAW);
        vbo.draw(GL_POINTS, 0, (int)points.size());
    }
    
    
    
    ofSetColor(0);
    ofRect(0, 0, 250, 90);
    ofSetColor(255);
    ofDrawBitmapString("Mode "+ofToString(mode), 20, 20);
    ofDrawBitmapString("FPS "+ofToString(ofGetFrameRate(), 0), 20, 40);
    ofDrawBitmapString("Total Points "+ofToString((int)points.size()), 20, 60);
    
    
    //camera

    
    // change background video alpha value based on the mouse position
    float videoAlphaValue = ofMap(mouseX, 0,ofGetWidth(),0,255);
    
    // set a white fill color with the alpha generated above
    ofSetColor(255,255,255,videoAlphaValue);
    
    // draw the raw video frame with the alpha value generated above
    vidGrabber.draw(0,0);
    
    ofPixelsRef pixelsRef = vidGrabber.getPixelsRef();
    
    ofSetHexColor(0xffffff);
    
    for (int i = 0; i < camWidth; i+= 7){
        for (int j = 0; j < camHeight; j+= 9){
            // get the pixel and its lightness (lightness is the average of its RGB values)
            float lightness = pixelsRef.getColor(i,j).getLightness();
            // calculate the index of the character from our asciiCharacters array
            int character = powf( ofMap(lightness, 0, 255, 0, 1), 2.5) * asciiCharacters.size();
            // draw the character at the correct location
            font.drawString(ofToString(asciiCharacters[character]), i, j);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    
    if(key == '1') mode = 1;
    if(key == '2') mode = 2;
    if(key == '3') mode = 3;
    
    
    // clear all the points
    if(key == 'c') {
        points.clear();
        speeds.clear();
    }
    
    // add crazy amount
    if(key == 'z') {
        for (int i=0; i<400000; i++) {
            addPoint(ofRandomWidth(), ofRandomHeight());
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    // add a bunch as you drag
    for (int i=0; i<400; i++) {
        addPoint(x, y);
    }

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
