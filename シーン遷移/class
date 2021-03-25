#include <iostream>

enum class Scene : uint16_t {
	TITLE,
	BATTLE,
	RESULT
};

class Title {
public:
	Title() {
		std::cout << "Title" << std::endl;
	}
	~Title() {
		std::cout << "D Title" << std::endl;
	}

public:
	void draw() {

	}
};

class Battle {
public:
	Battle() {
		std::cout << "Battle" << std::endl;
	}
	~Battle() {
		std::cout << "D Battle" << std::endl;
	}

public:
	void draw() {

	}
};

class Result {
public:
	Result() {
		std::cout << "Result" << std::endl;
	}
	~Result() {
		std::cout << "D Result" << std::endl;
	}

public:
	void draw() {

	}
};

int main() {

	Title title;
	Battle battle;
	Result result;

	Scene scene = Scene::TITLE;

	//描写ループ
	while (true) {

		if (scene == Scene::TITLE) {
			title.draw();
		}
		else if (scene == Scene::BATTLE) {
			battle.draw();
		}
		else {
			result.draw();
		}

	}

}
