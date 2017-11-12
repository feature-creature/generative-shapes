#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // set background color and turn off background paint on draw
    ofBackground(255);
    ofSetBackgroundAuto(false);

    // set default color and resolution
    ofNoFill();
    ofSetColor(0,10);
    ofSetLineWidth(2);
    ofSetCircleResolution(3);

}

//--------------------------------------------------------------
void ofApp::update(){
    // learn what clamping is (true) ??
    // map mouse movements to values 3-10
    circleRes = ofMap(mouseX,0,ofGetWidth(),3,11, true);
    circleRad = mouseY/2;
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // purple
    if(key == '1'){
        ofSetColor(255,0,255,10);
    }
    // gray
    else if(key == '2'){
        ofSetColor(3,25,50,10);
    }
    // blue
    else if(key == '3'){
        ofSetColor(33,200,12,10);
    }
    // clear screen
    else if(key == 'r'){
        ofBackground(255);
    }
    // save screenshot as png
    else if(key == 's'){
        ofSaveScreen(ofToString(ofGetFrameNum())+".png");
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
    ofSetCircleResolution(circleRes);
    ofDrawCircle(ofGetWidth()/2,ofGetHeight()/2,circleRad);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
