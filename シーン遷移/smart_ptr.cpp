#include <iostream>
#include <memory>

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
	std::unique_ptr<Title> title;
	std::unique_ptr<Battle> battle;
	std::unique_ptr<Result> result;

	Scene scene = Scene::TITLE;

	//描写ループ
	while (true) {

		if (scene == Scene::TITLE) {
			if (!title) {
				title = std::make_unique<Title>();
				battle.reset();
				result.reset();
			}
			title->draw();
		}
		else if (scene == Scene::BATTLE) {
			if (!battle) {
				battle = std::make_unique<Battle>();
				title.reset();
				result.reset();
			}
			battle->draw();
		}
		else {	
			if (!result) {
				result = std::make_unique<Result>();
				title.reset();
				battle.reset();
			}
			result->draw();
		}

	}

}
