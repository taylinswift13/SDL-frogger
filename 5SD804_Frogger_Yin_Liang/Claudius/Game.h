#pragma once

#include <string>
#include <vector>
#include "KeyCode.h"
#include "Image.h"
#include "Sprite.h"
#include "Transform.h"
#include "TEST_STRUCT_DELETE_BEFORE_HANDIN.h"
#include"Frog.h"
#include"background.h"
#include"Car.h"
#include"Log.h"
#include"Destination.h"
#include"healthpoint.h"

struct RenderManager;
struct ResourceManager;
class Game
{
	Frog frog;
	background background;
	Car car1;
	Car car2;
	Car car3;
	Car car4;
	Car car5;
	Car car6;
	Car car7;
	Car car8;
	Car car9;
	Car car10;
	Car car11;
	Car car12;
	Log log1;
	Log log2;
	Log log3;
	Log log4;
	Log log5;
	Log log6;
	Log log7;
	Log log8;
	Log log9;
	Log log10;
	Log log11;
	Log log12;
	Log log13;
	Log log14;
	Log log15;
	Destination destination1;
	Destination destination2;
	Destination destination3;
	Destination destination4; 
	Destination destination5;
	Healthpoint healthpoint1;
	Healthpoint healthpoint2;
	Healthpoint healthpoint3;
	Healthpoint healthpoint4;
	int healthpointnow=4;

	Vector2 frogStartPosition;
	ResourceManager& m_resourceManager;
public:
	Game(ResourceManager& resourceManager);
	~Game();
	bool Enter(int& width, int& height, std::string& title); // References sent to the game from the base to set the window size and name
	bool Update(float dt); // If Games update returns false the program will exit
	void Render(RenderManager& rendererManager);
	void OnKeyDown(KeyCode key);
	void OnKeyUp(KeyCode key);
};