#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include <memory>
#include <list>

#include "gameobject.h"


template <class T> class ObjectManager : public GameObject {
protected:
	std::list< std::shared_ptr<T> > objects;

public:
	virtual void update() override {
		for(auto x=objects.begin(); x!=objects.end();){
			(*x)->update();

			if(!(*x)->isAlive()){
				x = objects.erase(x);
			}else{
				++x;
			}
		}
	}
	virtual void draw() override {
		for(auto x: objects){
			x->draw();
		}
	}

	virtual void mouseMoved(int x, int y) override {
		for(auto o: objects){
			o->mouseMoved(x, y);
		}
	}

	virtual void mousePressed(int x, int y, int button) override {
		for(auto o: objects){
			o->mousePressed(x, y, button);
		}
	}

	virtual void mouseReleased(int x, int y, int button) override {
		for(auto o: objects){
			o->mouseReleased(x, y, button);
		}
	}

	virtual void add(std::shared_ptr<T> obj){
		objects.push_back(obj);
	}
};

#endif
