#ifndef OBJECT_H
#define OBJECT_H

#include <ofMain.h>

class GameObject {
public:
	virtual void update() = 0;
	virtual void draw() = 0;
	virtual bool isAlive(){ return true; }

	virtual void mouseMoved(int x, int y){}
	virtual void mousePressed(int x, int y, int button){}
	virtual void mouseReleased(int x, int y, int button){}
};

#endif
