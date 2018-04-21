#pragma once
#include <string>

class GameState {
public:
	static GameState* getGameState();

	struct PlayerState {
		std::string name;
	};
private:
	GameState() = default;

};