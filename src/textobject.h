#ifndef TEXTOBJECT_H
#define TEXTOBJECT_H

#include <memory>

#include <ofMain.h>

#include <string>

#include "gameobject.h"


class TextObject : public GameObject {
private:
	ofPoint pos;
	ofColor color;
	std::shared_ptr<ofTrueTypeFont> font;
	std::string text;
	float width, height;

public:
	TextObject(std::shared_ptr<ofTrueTypeFont> font, ofColor color, std::string text, ofPoint pos){
		this->font = font;
		this->color = color;
		this->text = text;
		this->pos.set(pos);

		width = font->stringWidth(text);
		height = font->stringHeight(text);
	}

	virtual void update() override {}
	void draw() override {
		ofSetColor(color);
		font->drawString(text, pos.x - width/2, pos.y - height/2);
	}

	float getWidth(){ return width; }
	float getHeight(){ return height; }
};

#endif
