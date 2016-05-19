#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <ofMain.h>

#include "circleobject.h"


class Player : public CircleObject {
private:
	ofPoint accel, target;
	int damege, hp;
	float speed, brake;

public:
	Player();

	void update() override;

	void mouseMoved(int x, int y) override { target.set(x, y); }

	void hit(){ damege++; }
};

#endif
