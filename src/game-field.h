#pragma once

enum Direction {
	LEFT=0, RIGHT, UP, DOWN
};

class GameField {
	char field[12][12];
public:
	GameField();
	void addShip(int numberOfDecks, int sx, int sy, Direction dir);
	void isDeckOfShip(int x, int y);
};