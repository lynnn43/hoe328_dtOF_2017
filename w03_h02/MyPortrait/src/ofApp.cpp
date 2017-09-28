#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for(int i=0; i<NBALLOONS; i++){
        
        int size = (i+1) * 10; // defining the size of each ball based on its place in the array
        int randomX = ofRandom( 0, ofGetWidth() ); //generate a random value bigger than 0 and smaller than our application screen width
        int randomY = ofRandom( 0, ofGetHeight() ); //generate a random value bigger than 0 and smaller than our application screen height
        
        myBalloon[i].setup(randomX, randomY, size);
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<myBalloons.size(); i++){
        myBalloons[i].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0);
    ofDrawRectangle(350,450, 100, 100);
    
    
    ofSetColor(255,219,172);
    ofDrawSphere(400,400, 60);
    
    ofSetColor(0,0,0);
    ofDrawSphere(380,380,10);
    
    ofSetColor(0,0,0);
    ofDrawSphere(420,380,10);
    
    for (int i = 0 ; i<myBalloons.size(); i++) {
        myBalloons[i].draw();
    }
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
    Balloon tempBalloons;							// create the ball object
    tempBalloons.setup(x,y, ofRandom(10,40));	// setup its initial state
    myBalloons.push_back(tempBalloons);				// add it to the vector
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
