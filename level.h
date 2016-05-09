#ifndef LEVEL_H
#define LEVEL_H
#include <SFML/Graphics.hpp>
#include "cell.h"
#include <vector>

class level
{
private:
	std::vector<int> arr;
	int x;
	int y;
	int size;
	bool initalized = false;
	int push;
public:
	level();
	level(int, int);
	void initialize(int);
	void setSize(int, int);
	int getX() const;
	int getY() const;
	int getContent(int, int);
	void print();
	int getPush();
	void empty();
};
#endif LEVEL_H

