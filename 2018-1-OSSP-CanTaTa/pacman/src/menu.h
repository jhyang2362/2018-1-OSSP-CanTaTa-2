#pragma once
#include "game.h"
//Defines what action we should take at a particular time while on the menu.
typedef enum
{
	Nothing,
	GoToGame
} MenuAction;

//Defines the menu system.
typedef struct
{
	MenuAction action;
	unsigned int ticksSinceModeChange;
	PlayMode playMode;//# 메뉴화면에 넣기위한 playMode...
} MenuSystem;

//Performs a single tick on the menu system.
int menu_tick(MenuSystem *menuSystem);

//Renders the menu system in its current state.
void menu_render(MenuSystem *menuSystem);

void menu_init(MenuSystem *menuSystem);
