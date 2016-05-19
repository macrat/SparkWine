#include "textgenerator.h"


TextGenerator::TextGenerator(std::string fontname){
	font = std::shared_ptr<ofTrueTypeFont>(new ofTrueTypeFont());
	font->load(fontname, 32);
}


std::shared_ptr<TextObject> TextGenerator::generate(ofPoint pos, std::string text, ofColor color){
	return std::shared_ptr<TextObject>(new TextObject(font, color, text, pos));
}
