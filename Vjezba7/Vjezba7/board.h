#pragma once

#include <vector>
#include<iostream>
using namespace std;

#ifndef BOARD_H
#define BOARD_H

struct Point {
	double x, y;
	Point(double tx, double ty) { x = tx; y = ty; };
};

class Board
{
	int row;
	int col;
	char border;
	char** matrix = new char* [row];
	

public:
	Board();	
	Board(int x, int y);
	Board(const Board& b);
	Board(Board&& other);
	~Board();

	void draw_char(Point, char);
	void draw_up_line(Point, char);
	void draw_line(Point, Point, char);
	void display();

};

#endif
