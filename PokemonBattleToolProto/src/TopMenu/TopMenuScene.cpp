#include <iostream>
#include <string>
#include "TopMenuScene.h"

namespace TopMenu
{
	TopMenuScene::TopMenuScene() {}
	TopMenuScene::~TopMenuScene() {}
	bool TopMenuScene::Update()
	{
		std::cout << "項目を選択してください。1:PT登録 2:PT選択 0:アプリ終了" << std::endl;
		try
		{
			int inp;
			std::cin >> inp;
			switch (inp)
			{
			case 0:
				return false;
			case 1:
				this->Transition(new TopMenuScene());
				break;
			case 2:
				this->Transition(new TopMenuScene());
				break;
			}
		}
		catch (const std::exception &)
		{
		}
		return true;
	}
} // namespace TopMenu
