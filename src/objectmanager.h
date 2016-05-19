#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include <vector>
#include <memory>

#include "gameobject.h"


class ObjectManager : public GameObject {
private:
	std::vector< std::shared_ptr<GameObject> > objects;

public:
	virtual void update() override;
	virtual void draw() override;

	virtual void mouseMoved(ofPoint pos) override;
	virtual void mousePressed(ofPoint pos, int button) override;
	virtual void mouseReleased(ofPoint pos, int button) override;

	virtual void add(GameObject*);
	int size();
};

#endif
