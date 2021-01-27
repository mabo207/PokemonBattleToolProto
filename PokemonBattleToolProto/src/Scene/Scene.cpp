#include "Scene.h"

namespace SceneLib
{
	Scene::Scene() : _nextScene(nullptr) {}
	Scene::~Scene() {}
	std::shared_ptr<Scene> Scene::GetNextScene() const { return _nextScene; }
	void Scene::Transition(Scene *const nextScene)
	{
		_nextScene = std::shared_ptr<Scene>(nextScene);
	}
} // namespace SceneLib