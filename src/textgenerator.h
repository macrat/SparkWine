#ifndef TEXTGENERATOR_H
#define TEXTGENERATOR_H

#include <string>
#include <memory>

#include <ofMain.h>

#include "textobject.h"


class TextGenerator {
private:
	std::shared_ptr<ofTrueTypeFont> font;

public:
	TextGenerator(std::string fontname);

	std::shared_ptr<TextObject> generate(ofPoint pos, std::string text, ofColor color=ofColor(255, 255, 255));
};

#endif
