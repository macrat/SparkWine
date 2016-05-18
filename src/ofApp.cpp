#include "ofApp.h"

#include "player.h"


void ofApp::setup(){
	ofSetBackgroundColor(0, 0, 0);
	objects.push_back(new Player());
}


void ofApp::update(){
	for(auto x=objects.begin(); x!=objects.end();){
		(*x)->update();

		if(!(*x)->isAlive()){
			delete *x;
			objects.erase(x);
		}else{
			++x;
		}
	}
}


void ofApp::draw(){
	for(auto x: objects){
		x->draw();
	}
}


void ofApp::keyPressed(int key){
}


void ofApp::keyReleased(int key){
}


void ofApp::mouseMoved(int x, int y ){
	for(auto o: objects){
		o->mouseMoved(ofPoint(x, y));
	}
}


void ofApp::mouseDragged(int x, int y, int button){
}


void ofApp::mousePressed(int x, int y, int button){
	for(auto o: objects){
		o->mousePressed(ofPoint(x, y), button);
	}
}


void ofApp::mouseReleased(int x, int y, int button){
	for(auto o: objects){
		o->mouseReleased(ofPoint(x, y), button);
	}
}


void ofApp::mouseEntered(int x, int y){
}


void ofApp::mouseExited(int x, int y){
}


void ofApp::windowResized(int w, int h){
}


void ofApp::gotMessage(ofMessage msg){
}


void ofApp::dragEvent(ofDragInfo dragInfo){
}
