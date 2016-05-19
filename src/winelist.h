#ifndef WINELIST_H
#define WINELIST_H

#include <memory>

#include "objectmanager.h"
#include "player.h"
#include "wine.h"


class WineList : public ObjectManager<Wine> {
private:
	std::weak_ptr<Player> player;

public:
	void update() override;

	void setPlayer(std::weak_ptr<Player> player){ this->player = player; }
};

#endif
