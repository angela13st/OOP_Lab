#include "board.h"
#include <cmath>
#include<iostream>
using namespace std;

Board::Board() {
	row = 2; col = 2; border = 'o';
	for (int i = 0; i < row; ++i)
		matrix[i] = new char[col];
	for (int i = 1; i < col; i++)
	{

		matrix[0][i] = border;
		matrix[row - 1][i] = border;
	}

	for (int i = 1; i < row - 1; i++)
	{

		matrix[i][0] = border;
		matrix[i][col - 1] = border;

	}
}

Board::Board(int x, int y)
{
	row = y; col = x; border = 'o';

	for (int i = 0; i < row; i++)
		matrix[i] = new char[col];


	for (int i = 0; i < col; i++)
	{
		matrix[0][i] = border;
		matrix[row - 1][i] = border;
	}

	for (int i = 1; i < row - 1; i++)
	{

		matrix[i][0] = border;
		matrix[i][col - 1] = border;
	}

	for (int i = 1; i < row - 1; i++)
	{
		for (int j = 1; j < col - 1; j++)
		{
			matrix[i][j] = ' ';
		}
	}

}
Board::Board(const Board& b) { row = b.row; col = b.col; border = b.border; matrix = b.matrix; }
Board::Board(Board&& other) {
	this->row = other.row; this->col = other.col; this->border = other.border;
	for (int i = 0; i < row; ++i)
		matrix[i] = new char[col];
	this->matrix = other.matrix;
	other.row = 0; other.col = 0; other.border = ' '; other.matrix = NULL;
}
Board::~Board() { cout << "destruktor" << endl; };

void Board::draw_char(Point p, char ch)
{
	int tx = (int)p.x;
	int ty= (int)p.y;

	//cout<<tx<<" "<<ty<<endl,

	matrix[tx][ty] = ch;
}

void Board::draw_up_line(Point p, char ch)
{
	int tx = (int)(p.x + 0, 5);
	int ty = (int)(p.y + 0, 5);
	for (int i = 1; i <= tx; i++)
	{
		matrix[i][ty] = ch;
	}
}

void Board::draw_line(Point p1, Point p2, char ch)
{
	int tx1 = (int)(p1.x);
	int ty1 = (int)(p1.y);
	int tx2 = (int)(p2.x);
	int ty2 = (int)(p2.y);
	int tmpx = tx1;
	int tmpy = ty1;
	if (tx1 == tx2)
	{
		for (int i = ty1; i <= ty2; i++)
		{
			matrix[i][tx1] = ch;
		}
	}
	else if (ty1 == ty2)
	{
		for (int i = tx1; i <= tx2; i++)
		{
			matrix[ty1][i] = ch;
		}
	}
	else
	{
		for (int i = tx1; i <= tx2; i++)
		{
			matrix[i][tmpy] = ch;
			tmpy++;
		}
	}
}

void Board::display()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
}
