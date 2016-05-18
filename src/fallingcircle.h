#ifndef FALLINGCIRCLE_H
#define FALLINGCIRCLE_H

#include <ofMain.h>

#include "circleobject.h"


class FallingCircle : public CircleObject {
private:
	ofVec2f vec, gravity;
	int maxspeed;

public:
	FallingCircle(ofPoint pos, ofVec2f vec, ofVec2f gravity, int maxspeed=6, ofColor color=ofColor(255, 0, 0), int size);

	void update() override {
		pos += vec;

		vec = vec * 0.9 + gravity;
		if(vec.length() > maxspeed){
			vec = gravity.normalize() * maxspeed;
		}
	}
};

#endif
