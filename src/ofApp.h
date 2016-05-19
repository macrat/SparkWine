#pragma once

#include <vector>

#include <ofMain.h>

#include "gameobject.h"
#include "objectmanager.h"


class ofApp : public ofBaseApp, public ObjectManager<GameObject> {
public:
	void setup() override;

	void update() override { ObjectManager<GameObject>::update(); }
	void draw() override { ObjectManager<GameObject>::draw(); }

	void mouseMoved(int x, int y) override { ObjectManager<GameObject>::mouseMoved(x, y); }
	void mousePressed(int x, int y, int button) override { ObjectManager<GameObject>::mousePressed(x, y, button); }
	void mouseReleased(int x, int y, int button) override { ObjectManager<GameObject>::mouseReleased(x, y, button); }
};
