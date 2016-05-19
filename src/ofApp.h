#pragma once

#include <vector>

#include <ofMain.h>

#include "gameobject.h"
#include "objectmanager.h"


class ofApp : public ofBaseApp, public ObjectManager {
public:
	void setup() override;

	void update() override { ObjectManager::update(); }
	void draw() override { ObjectManager::draw(); }

	void mouseMoved(int x, int y) override { ObjectManager::mouseMoved(ofPoint(x, y)); }
	void mousePressed(int x, int y, int button) override { ObjectManager::mousePressed(ofPoint(x, y), button); }
	void mouseReleased(int x, int y, int button) override { ObjectManager::mouseReleased(ofPoint(x, y), button); }
};
