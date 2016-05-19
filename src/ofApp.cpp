#include "ofApp.h"

#include "player.h"


void ofApp::setup(){
	ofSetBackgroundColor(0, 0, 0);
	add(new Player());
}
