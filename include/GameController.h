#pragma once

#include <memory>
#include <box2d/box2d.h>
#include <array>

#include "Window.h"
#include "Menu.h"
#include "GameResources.h"
#include "Bird.h"
#include "Ground.h"
#include "World.h"
#include "Wood.h"
#include "Rogatka.h"
#include "MyContactListener.h"
#include "Pig.h"

class GameController
{
public:
	GameController();
	~GameController() = default;

	//methods
	void runGame();
	void menuManeger(const menuCommand&);
	void drawGame();

	//void lvlManeger();
	void createBirds();
	void createBuilding();
	void createGroundAndRogatka();
	void createPigs();

private:
	Window m_window;
	bool m_menuMode;
	Menu m_menu;

	//Try temporary world
	World m_world;

	//LevelManeger m_lvlmng;
	std::array<std::unique_ptr<StaticObjects>, 2> m_staticObjects;
	std::vector<std::unique_ptr<Bird>> m_birds;
	std::vector<std::unique_ptr<StaticObjects>> m_building;
	std::vector<std::unique_ptr<StaticObjects>> m_pigs;
	//std::vector<sf::Music> m_gameMusic;
	//init functions
	//void initObjects();

};

