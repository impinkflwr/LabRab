#include <iostream>
#include "Matrix.h"

int main()
{
	Matrix matr;
	matr.input(2, 2);
	matr.print();
	std::cout << "Matrix trace: "; std::cout << std::endl; std::cout << matr.trace(matr.elem, matr.get_rows()); std::cout << std::endl;

	Matrix matr2;
	matr2.input(2, 2);
	matr2.print();

	Matrix matr3;
	matr3.matrix(2, 2, matr.elem);
	std::cout << "Matrix addition: "; std::cout << std::endl; matr3.matradd(matr2.elem);
	matr3.print();
	std::cout << "Multiplying a matrix by a number: "; std::cout << std::endl; matr3.mult_by_num(3);
	matr3.print();

}