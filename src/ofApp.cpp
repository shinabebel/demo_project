#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundAuto(false);
	
}

//--------------------------------------------------------------
void ofApp::update(){
	ofVec2f vec2;
	
	ofVec3f vec3;
	vec3.x = 1.0;
	vec3.y = 0.0;
	vec3.z = 2.0;
	vec3.set(1, 2, 3);
	vec3 = ofVec3f(2, 1, 3);

	ofVec3f* vec3ptr = new ofVec3f();
	vec3ptr->x = 1.0;
	vec3ptr->y = 0.0;
	vec3ptr->z = 2.0;
	vec3ptr->set(1, 2, 3);
	delete vec3ptr;


	ofVec4f vec4;

}

//--------------------------------------------------------------
void ofApp::draw(){
	//ofGetMousePressed();
	//ofGetMouseX();
	//ofGetMouseY();
	//ofGetPreviousMouseX();
	//ofGetPreviousMouseY();
	
	if (ofGetMousePressed())
	{
		ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetPreviousMouseX(), ofGetPreviousMouseY());
	}

	ofBackground(2);
	ofBackgroundGradient(ofColor(64), ofColor(0), ofGradientMode::OF_GRADIENT_CIRCULAR);
	ofBackgroundGradient(ofColor(64), ofColor(0), ofGradientMode::OF_GRADIENT_LINEAR);
	ofBackgroundGradient(ofColor::fromHex(0xF82C30), ofColor::fromHex(0x092743), ofGradientMode::OF_GRADIENT_CIRCULAR);

	ofSetColor(ofColor::fromHex(0x3A83C1));
	if (mouse_position.size() > 1)
	{
		for (int i = 0; i < mouse_position.size() - 1; i++)
		{
			//ofVec2f this_position = mouse_position[i + 0];
			//ofVec2f next_position = mouse_position[i + 1];
			//ofDrawLine(this_position, next_position);
			int hue = i % 128;
			ofColor c = ofColor::fromHsb(i, 200, 200);
			ofSetColor(c);
			ofDrawLine(mouse_position[i + 0], mouse_position[i + 1]);
		}
	}

	

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	ofVec2f pos = ofVec2f(x, y);
	mouse_position.push_back(pos);
	//mouse_position.push_back(ofVec2f(x, y));
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