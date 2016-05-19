#ifndef CIRCLEOBJECT_H
#define CIRCLEOBJECT_H

#include <ofMain.h>

#include "gameobject.h"


class CircleObject : public GameObject {
protected:
	ofPoint pos;
	ofColor color;
	int size;

public:
	CircleObject(ofPoint pos, ofColor color, int size){
		this->pos = pos;
		this->color = color;
		this->size = size;
	}

	void draw() override {
		ofSetColor(color);
		ofDrawCircle(pos, size);
	}

	bool collision(const std::shared_ptr<CircleObject> target){
		return target->pos.distance(pos) <= target->size + size;
	}

	float angle(ofPoint target){
		return target.angleRad(pos);
	}

	ofPoint getPos(){
		return pos;
	}
};

#endif
