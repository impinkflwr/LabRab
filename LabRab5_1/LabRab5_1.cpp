#include <iostream>
#include "Matrix.h"

int main()
{
	Matrix matr;
	matr.input();
	matr.print();
	std::cout << matr.trace(matr.elem, matr.get_rows()); 
	Matrix matr2;
	matr2.input();
	matr2.print();
}