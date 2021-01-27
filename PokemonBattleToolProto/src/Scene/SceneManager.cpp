#include "SceneManager.h"

namespace SceneLib
{
	SceneManager::SceneManager(Scene *const initScene)
	{
		_scene = std::shared_ptr<Scene>(initScene);
	}

	SceneManager::~SceneManager() {}

	bool SceneManager::Update()
	{
		if (_scene)
		{
			const bool isContinue = _scene->Update();
			if (!isContinue)
			{
				return false;
			}
			const auto next = _scene->GetNextScene();
			if (next)
			{
				_scene = next;
			}
			return true;
		}
		return false;
	}
} // namespace SceneLib
