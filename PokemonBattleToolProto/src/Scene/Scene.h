#ifndef DEF_SCENE_SCENEBASE_H
#define DEF_SCENE_SCENEBASE_H

#include <memory>

namespace SceneLib
{
	class Scene
	{
	public:
		Scene();
		virtual ~Scene();
		// アプリケーション終了時はfalseを返しそれ以外はtrueを返す。
		virtual bool Update() = 0;
		// シーン遷移する際はGetNextScene()がnullptrでない。
		std::shared_ptr<Scene> GetNextScene() const;

	protected:
		void Transition(Scene *const nextScene);

	private:
		std::shared_ptr<Scene> _nextScene;
	};
} // namespace SceneLib

#endif