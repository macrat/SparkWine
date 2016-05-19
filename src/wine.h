#ifndef WINE_H
#define WINE_H

#include <memory>

#include "fallingcircle.h"


class Wine : public FallingCircle {
private:
	int level;

public:
	Wine(ofPoint pos);
	Wine(ofPoint pos, ofVec2f vec, int level);

	bool isAlive() override {
		return pos.x + size > 0 && pos.y + size > -size*2 && pos.x - size < ofGetWidth() && pos.y - size < ofGetHeight();
	}

	std::shared_ptr<Wine> spark(std::shared_ptr<CircleObject> target);
};

#endif
