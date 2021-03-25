#include <iostream>

enum class Scene : uint16_t {
	TITLE,
	BATTLE,
	RESULT
};

int main() {

	Scene scene = Scene::TITLE;

	//描写ループ
	while (true) {

		if (scene == Scene::TITLE) {
			//タイトルの処理
		}
		else if (scene == Scene::BATTLE) {
			//バトルの処理
		}
		else {
			//リザルトの処理
		}

	}

}
