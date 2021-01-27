#ifndef DEF_SCENE_TOPMENU_H
#define DEF_SCENE_TOPMENU_H

#include "../Scene/Scene.h"

namespace TopMenu
{
	class TopMenuScene : public SceneLib::Scene
	{
	public:
		TopMenuScene();
		~TopMenuScene();
		bool Update()override;
	};
} // namespace TopMenu

#endif