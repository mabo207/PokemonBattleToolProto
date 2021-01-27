#include <iostream>
#include "TopMenu/TopMenuScene.h"
#include "Scene/SceneManager.h"

int main()
{
	SceneLib::SceneManager sceneManager(new TopMenu::TopMenuScene());
	while (sceneManager.Update())
	{
	}
	return 0;
}
