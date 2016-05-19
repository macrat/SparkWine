#include <memory>

#include "ofApp.h"

#include "player.h"
#include "winelist.h"


void ofApp::setup(){
	ofSetBackgroundColor(0, 0, 0);
	ofEnableAlphaBlending();
	ofEnableBlendMode(OF_BLENDMODE_ADD);

	std::shared_ptr<Player> p = std::shared_ptr<Player>(new Player());
	add(p);

	std::shared_ptr<WineList> wl = std::shared_ptr<WineList>(new WineList());
	add(wl);
	wl->setPlayer(std::weak_ptr<Player>(p));
}
