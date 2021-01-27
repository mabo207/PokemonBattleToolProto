#ifndef DEF_SCENE_SCENEMANAGER_H
#define DEF_SCENE_SCENEMANAGER_H

#include <memory>
#include "Scene.h"

namespace SceneLib
{
	// シーンマネージャ
	class SceneManager
	{
	public:
		// コンストラクタ
		SceneManager(Scene *const initScene);
		// デストラクタ
		~SceneManager();
		// 更新処理
		bool Update();

	private:
		// 管理するシーン
		std::shared_ptr<Scene> _scene;
	};
} // namespace SceneLib

#endif