#ifndef WINELIST_H
#define WINELIST_H

#include <memory>

#include "objectmanager.h"
#include "player.h"
#include "wine.h"


class WineList : public ObjectManager {
private:
	std::weak_ptr<Player> player;

public:
	void update() override {
		add(new Wine(ofPoint(ofRandom(ofGetWidth()), -32)));
		ObjectManager::update();
	}

	void setPlayer(std::weak_ptr<Player> player){ this->player = player; }
};

#endif
