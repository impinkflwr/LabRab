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

	//����� � ��� ������������ ���������
	Matrix();										//����������� ��-���������
	Matrix(int _row, int _col);						//����������� � ����� �����������
	Matrix(const Matrix& temp);						//����������� �����������
	~Matrix();										//�����������, ������� ��� ������ �����������	


	//���� ������
	void input();
	void print();
	int matradd(double* elem, double* elem2, int _col, int _row);
	int get_columns();
	int get_rows();
	int get_size();
	double trace(double* elem, int size);
};

#endif // !Matrix_Z352



