#include "fallingcircle.h"


FallingCircle::FallingCircle(ofPoint pos, ofVec2f vec, ofVec2f gravity, int maxspeed, ofColor color, int size)
		: CircleObject(pos, color, size){
	this->vec = vec;
	this->gravity = gravity;
	this->maxspeed = maxspeed;
}


void FallingCircle::update(){
	pos += vec;

	vec = vec * 0.9 + gravity;
	vec.limit(maxspeed);
}
