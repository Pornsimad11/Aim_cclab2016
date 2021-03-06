#include "ofApp.h"
//credits--https://github.com/openframeworks/ofBook/blob/master/chapters/intro_to_graphics/chapter.md
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    // initialize variables
    
    // set initial circle position
    mPos = ofVec2f(ofGetWindowWidth() * 0.5, ofGetWindowHeight() * 0.5);
    // adding some friction
    mFriction = 0.99;
    // no velocity at start
    mVelocity = ofVec2f(0);
    // no force
    mAcceleration = ofVec2f(0);
    // circle can be any size
    mCircleRadius = 30;
}

//--------------------------------------------------------------
void ofApp::update(){
    mVelocity *= ofVec2f( mFriction );
    mPos += mVelocity;
    
    // bring back our circle when it is off stage
    if (mPos.x < 0) mPos.x = ofGetWindowWidth();
    if (mPos.y < 0) mPos.y = ofGetWindowHeight();
    if (mPos.x > ofGetWindowWidth()) mPos.x = 0;
    if (mPos.y > ofGetWindowHeight()) mPos.y = 0;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(ofRandom(50, 255));
    float width = ofRandom(5, 20);
    float height = ofRandom(5, 20);
    float xOffset = ofRandom(-40, 40);
    float yOffset = ofRandom(-40, 40);
    ofDrawCircle(mPos, mCircleRadius +  mVelocity.length() * 20);
    // print stuff to console
    cout << mPos << endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    // when mouse button is pressed, the code below will be executed
    // putting mouse position into a vector
    ofVec2f mousePos = ofVec2f(x, y);
    mAcceleration = mPos - mousePos;
    // getting vector length
    float vecLength = mAcceleration.length();
    
    // normalizing length
    mAcceleration /= vecLength;
    
    // applying the acceleration to velocity/speed
    mVelocity += mAcceleration;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
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
