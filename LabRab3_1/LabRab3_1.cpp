#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void bubble_Sort(int* Arr_1, int n) {

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < (n-1); ++j) {
			if (Arr_1[j] > Arr_1[j + 1]) {
				int change = Arr_1[j];
				Arr_1[j] = Arr_1[j + 1];
				Arr_1[j + 1] = change;
			}
		}
	}
	cout << endl;

	cout << "Вот твой отсортированный массив: " << endl;
	for (int i1 = 0; i1 < n; ++i1) {
		cout << Arr_1[i1] << endl;
		if (i1 == (n-1)) {
			cout << endl;
		}
	}


}

void podscht_Sort(char* Arr_2, int n) {

	int j; int letter = 26;
	int count[26] = { 0 };
	for (int i = 0; i < n; i++) {
		j = int(Arr_2[i] - 'a');
		count[j]++;
	}
	int i = 0;
	for (j = 0; j < letter;) {
		if (count[j] > 0) {
			Arr_2[i] = char((int)('a') + j);
			i++;
			count[j]--;
		}
		else j++;
	}
	cout << endl;
	cout << "Держи ещё один отсортированный массив. Тебе ещё не надоело массивы тут сортировать?" << endl;
	for (int i = 0; i < n; i++) {
		cout << Arr_2[i] << " ";
	}
	cout << endl;
	cout << endl;
}


int main() {

	setlocale(LC_ALL, "Russian");

	int choice = 0;
	while (true) {
		cout << "Задания: " << "\n"
			<< "1. Сортировка числового массива по возрастанию по алгоритму пузырьковой сортировки." << "\n"
			<< "2. Сортировка символьного массива по возрастанию по алгоритму сортировки подсчётом." << "\n"
			<< "3. Сортировка числового массива по возрастанию по алгоритму сортировки слиянием." << "\n"
			<< "4. Выход." << "\n" << endl;
		cout << "Напиши номер задания для выполнения: "; cin >> choice;
		switch (choice) {
		case 1: {
			int Arr_1[1000], n;

			cout << "А ну-ка давай, вводи, сколько элементов в массиве должно быть: "; cin >> n;
			if (n >= 10) {
				cout << "Ой, зря ты столько выбрал(-а). Ну, удачи тебе!" << endl;
				for (int i = 0; i < n; ++i) {
					cout << "Arr_2[ " << i << " ] = "; cin >> Arr_1[i];
				}
			}
			else {
				cout << "Окей, вводи значения: " << endl;
				for (int i = 0; i < n; ++i) {
					cout << "Arr_2[ " << i << " ] = "; cin >> Arr_1[i];
				}
			}

			bubble_Sort(Arr_1, n);
			break;
		}

		case 2: {
			int n;
			char Arr_2[1000];

			cout << "Ну и сколько элементов в массиве ты хочешь видеть? Вводи значение: "; cin >> n;
			cout << "А теперь вводи значения элементов массива: " << endl;
			for (int i = 0; i < n; ++i) {
				cout << "Arr_2[ " << i << " ] = "; cin >> Arr_2[i];
			}

			podscht_Sort(Arr_2, n);
			break;
		}
		}

	}

}
