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


	// ���������� ������������
	void matrix(int i, int j);
	void matrix(int i, int j, double* arr);


	~Matrix();


	// ����������� ����
	void input();


	// ���������� �����
	void input(int i, int j);
	void input(int i, int j, double* arr);


	// �����
	void print();


	// �������� ������
	int matradd(double* elem1, double* elem2, int col1, int row2);
	void matradd(const double* arr);
	int matradd(double* arr, int size);

	// ��������� ������� �� �����
	void mult_by_num(double num);


	int get_columns();
	int get_rows();
	int get_size();


	// ���� �������
	double trace(double* elem, int size);
};

#endif // !Matrix_Z352