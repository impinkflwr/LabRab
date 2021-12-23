#include <iostream>
#pragma once
#ifndef Matrix_Z352
#define Matrix_Z352

class Matrix
{
private:
	int row, col;

public:
	double* elem = new double;

	Matrix();


	// Перегрузка конструктора
	void matrix(int i, int j);
	void matrix(int i, int j, double* arr);


	~Matrix();


	// Стандартный ввод
	void input();


	// Перегрузка ввода
	void input(int i, int j);
	void input(int i, int j, double* arr);


	// Вывод
	void print();


	// Сложение матриц
	int matradd(double* elem1, double* elem2, int col1, int row2);
	void matradd(const double* arr);
	int matradd(double* arr, int size);

	// Умножение матрицы на число
	void mult_by_num(double num);


	int get_columns();
	int get_rows();
	int get_size();


	// След матрицы
	double trace(double* elem, int size);
};

#endif // !Matrix_Z352