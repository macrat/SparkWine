#include <memory>

#include "wine.h"


Wine::Wine(ofPoint pos) : Wine::Wine(pos, ofVec2f(0, 0), 1) { }


Wine::Wine(ofPoint pos, ofVec2f vec, int level) : FallingCircle(
	pos,
	vec,
	ofVec2f(0, 0.5),
	32, ofColor(255, 0, 0, 230), 32/level
) {
	this->level = level;
}


std::shared_ptr<Wine> Wine::spark(const std::shared_ptr<CircleObject> target){
	float angle = atan2(pos.y - target->getPos().y, pos.x - target->getPos().x) + ofRandom(-0.4, 0.4);
	float power = ofRandom(1, 6);
	ofVec2f vec(cos(angle)*power, sin(angle)*power);

	if(level < 4){
		return std::shared_ptr<Wine>(new Wine(pos + vec, vec, level+1));
	}else{
		return nullptr;
	}
}
