#include "player.h"


Player::Player() : CircleObject::CircleObject(ofPoint(ofGetWidth()/2, ofGetHeight()/2), ofColor(255, 255, 255, 240), 32) {
	target.set(pos);

	damege = 0;
	hp = 255;
	speed = 0.3;
	brake = 0.7;
}


void Player::update(){
	accel += (target - pos)*speed;
	accel *= brake;
	pos += accel;

	color.g = color.b = 255 * (hp-damege)/hp;
}
