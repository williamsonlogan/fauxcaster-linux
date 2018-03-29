#pragma once

#include "entity.h"
#include "map.h"
#include <iostream>
#include <string>

class Player :
	public Entity
{
public:
	Player(float posx, float posy, Map * map);
	~Player();

	void Update();
	float GetMouseX();
	float GetHorizontalAxis();
	float GetVerticalAxis();

	float movementSpeed = 10.0f;
	float mouseSensitivity = 20.0f;
	int fieldOfView = 80;
	Map * _map;
};

