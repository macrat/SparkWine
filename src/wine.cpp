#include "wine.h"


Wine::Wine(ofPoint pos) : FallingCircle(
	pos,
	ofVec2f(0, 0),
	ofVec2f(0, 2),
	6, ofColor(255, 0, 0, 200), 32
) { }


Wine::Wine(ofPoint pos, ofVec2f vec, int level) : FallingCircle(
	pos,
	vec,
	ofVec2f(0, 2),
	6, ofColor(255, 0, 0, 200), 32/level
) { }
