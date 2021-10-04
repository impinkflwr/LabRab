#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void task1() {
	int e, a, b;
	cout << "Введите целое положительное число: "; cin >> e;
	for (a = 0; a <= e; ++a) {
		for (b = 0; b <= a; ++b) {
			cout << b;
		}
		cout << endl;
	}

}

void task2() {

	int n, k, CNK;
	cout << "Введите n (n < 100): "; cin >> n;
	CNK = 1;
	if (n < 100) {
		for (k = 1; k <= n; ++k) {
			cout << "C_n^" << k - 1 << " = " << CNK << endl;
			CNK = CNK * (n - (k - 1)) / (k);
		}
		cout << "C_n^" << n << " = " << CNK << endl;
	}
	else {
		cout << "Ошибка: n должно быть меньше 100." << endl;
	}
	
}

void task3() {

}

int main() {

	setlocale(LC_ALL, "Russian");

	int choice = 0;
	while (true) {
		cout << "Задания: \n"
			<< "1. Задание первое: числовая пирамида; \n"
			<< "2. Задание второе: биномиальные коэффициенты; \n"
			<< "3. Задание третье: среднее арифметическое точек; \n"
			<< "4. Выход. \n" << endl;
		cout << "Напишите номер задания для выполнения: "; cin >> choice;
		switch (choice) {
		case 1: {
			task1();
			cout << "\n";
			break;
		} 
		case 2: {
			task2();
			cout << "\n";
			break;
		}
		case 3: {
			task3();
			cout << "\n";
			break;
		}
		default: {
			return 0;
		}
		}

	}
}