#ifndef FALLINGCIRCLE_H
#define FALLINGCIRCLE_H

#include <ofMain.h>

#include "circleobject.h"


class FallingCircle : public CircleObject {
private:
	ofVec2f vec, gravity;
	int maxspeed;

public:
	FallingCircle(ofPoint pos, ofVec2f vec, ofVec2f gravity, int maxspeed, ofColor color, int size);

	void update() override;
};

#endif
