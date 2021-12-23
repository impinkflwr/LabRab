#include <iostream>
#pragma once
#ifndef Matrix_Z352
#define Matrix_Z352

class Matrix
{
private:
	int row, col;

public:
	double* elem;

	Matrix();
	Matrix(int i, int j);
	Matrix(int i, int j, const double* arr);
	~Matrix();

	void input(int i, int j);
	void input(int i, int j, double* arr);
	void print();
	int get_columns();
	int get_rows();
	int get_size();
	double trace(double* elem, int size);
};

#endif // !Matrix_Z352