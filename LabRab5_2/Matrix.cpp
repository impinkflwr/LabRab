#include "Matrix.h"
#include <iostream>

Matrix::Matrix()
{
	row = 0;
	col = 0;
	elem = nullptr;
}

Matrix::Matrix(int i, int j)
{
	row = j;
	col = i;
	elem = new double[i * j]{0};
}

Matrix::Matrix(int i, int j, const double* arr)
{
	row = j;
	col = i;
	elem = new double[i * j];
	for (int i = 0; i < row * col; i++)
	{
		elem[i] = arr[i];
	}
}

Matrix::~Matrix()
{
	if (elem != nullptr)
	{
		delete[] elem;
	}
}

void Matrix::input(int i, int j)
{
	row = j;
	col = i;
	elem = new double[(col) * (row)];
	std::cout << "Input elements:" << std::endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << "Input " << "[" << i << "][" << j << "]: ";
			std::cin >> elem[i * col + j];
		}
	}
	std::cout << std::endl;
}

void Matrix::input(int i, int j, double* arr)
{
	row = j;
	col = i;
	elem = new double[(row) * (col)];
	for (int i = 0; i < row * col; i++)
	{
		elem[i] = arr[i];
	}
}

void Matrix::print()
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << elem[i * (col)+j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int Matrix::get_columns()
{
	return col;
}

int Matrix::get_rows()
{
	return row;
}

int Matrix::get_size()
{
	return row * col;
}

double Matrix::trace(double* elem, int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + elem[i * size + i];
	}
	return sum;
}



