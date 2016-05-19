#include <memory>

#include "winelist.h"


void WineList::update() {
	if((int)ofRandom(0, 2) == 0){
		add(std::shared_ptr<Wine>(new Wine(ofPoint(ofRandom(ofGetWidth()), -32))));
	}

	if(std::shared_ptr<Player> p = player.lock()){
		for(auto x=objects.begin(); x!=objects.end();){
			if((*x)->collision(p)){
				std::vector< std::shared_ptr<Wine> > sparks;

				p->hit();

				for(int i=0; i<4; i++){
					if(auto s = (*x)->spark(p)){
						sparks.push_back(s);
					}
				}

				x = objects.erase(x);

				for(auto s: sparks){
					add(s);
				}
			}else{
				++x;
			}
		}
	}

	ObjectManager::update();
}
