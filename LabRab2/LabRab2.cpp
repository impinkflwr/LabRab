#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void task1() {
	int e, a, b;
	cout << "������� ����� ������������� �����: "; cin >> e;
	for (a = 0; a <= e; ++a) {
		for (b = 0; b <= a; ++b) {
			cout << b;
		}
		cout << endl;
	}

}

void task2() {

	int n, k, CNK;
	cout << "������� n (n < 100): "; cin >> n;
	CNK = 1;
	if (n < 100) {
		for (k = 1; k <= n; ++k) {
			cout << "C_n^" << k - 1 << " = " << CNK << endl;
			CNK = CNK * (n - (k - 1)) / (k);
		}
		cout << "C_n^" << n << " = " << CNK << endl;
	}
	else {
		cout << "������: n ������ ���� ������ 100." << endl;
	}
	
}

void task3() {

}

int main() {

	setlocale(LC_ALL, "Russian");

	int choice = 0;
	while (true) {
		cout << "�������: \n"
			<< "1. ������� ������: �������� ��������; \n"
			<< "2. ������� ������: ������������ ������������; \n"
			<< "3. ������� ������: ������� �������������� �����; \n"
			<< "4. �����. \n" << endl;
		cout << "�������� ����� ������� ��� ����������: "; cin >> choice;
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