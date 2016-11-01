#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//ofBackground(pic1.jpg);
	image.load("pic1.jpg");


	planet01.setup();
	planet02.setup();
	planet03.setup();
	planet04.setup();
	planet05.setup();
	planet06.setup();

	planetGroups.add(planet01.planetGroup);
	planetGroups.add(planet02.planetGroup);
	planetGroups.add(planet03.planetGroup);
	planetGroups.add(planet04.planetGroup);
	planetGroups.add(planet05.planetGroup);
	planetGroups.add(planet06.planetGroup);
	gui.setup(planetGroups);
}

//--------------------------------------------------------------
void ofApp::update(){
	planet01.update();
	planet02.update();
	planet03.update();
	planet04.update();
	planet05.update();
	planet06.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	image.draw(ofGetWidth() - 1920, ofGetHeight() - 1080, 1920, 1080);

	gui.draw();

	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	planet01.draw();

	ofTranslate(planet01.posX, planet01.posY);
	planet02.draw();
	planet03.draw();
	planet04.draw();

	ofTranslate(planet04.posX, planet04.posY);
	planet05.draw();
	planet06.draw();


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
