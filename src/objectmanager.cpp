#include <memory>

#include "objectmanager.h"


void ObjectManager::update(){
	for(auto x=objects.begin(); x!=objects.end();){
		(*x)->update();

		if(!(*x)->isAlive()){
			objects.erase(x);
		}else{
			++x;
		}
	}
}


void ObjectManager::draw(){
	for(auto x: objects){
		x->draw();
	}
}


void ObjectManager::mouseMoved(ofPoint pos){
	for(auto x: objects){
		x->mouseMoved(pos);
	}
}


void ObjectManager::mousePressed(ofPoint pos, int button){
	for(auto x: objects){
		x->mousePressed(pos, button);
	}
}


void ObjectManager::mouseReleased(ofPoint pos, int button){
	for(auto x: objects){
		x->mouseReleased(pos, button);
	}
}


void ObjectManager::add(GameObject *obj){
	objects.push_back(std::shared_ptr<GameObject>(obj));
}
