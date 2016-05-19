#ifndef WINE_H
#define WINE_H

#include "fallingcircle.h"


class Wine : public FallingCircle {
public:
	Wine(ofPoint pos);
	Wine(ofPoint pos, ofVec2f vec, int div_level);
};

#endif
