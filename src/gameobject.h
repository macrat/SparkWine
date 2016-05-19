#ifndef OBJECT_H
#define OBJECT_H

#include <ofMain.h>

class GameObject {
public:
	virtual void update() = 0;
	virtual void draw() = 0;
	virtual bool isAlive(){ return true; }

	virtual void mouseMoved(ofPoint pos){}
	virtual void mousePressed(ofPoint pos, int button){}
	virtual void mouseReleased(ofPoint pos, int button){}
};

#endif
