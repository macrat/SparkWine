#include "ofApp.h"

#include "player.h"
#include "winelist.h"


void ofApp::setup(){
	ofSetBackgroundColor(0, 0, 0);
	ofEnableAlphaBlending();
	ofEnableBlendMode(OF_BLENDMODE_ADD);

	add(new Player());
	add(new WineList());
}
