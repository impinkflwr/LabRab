#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main() 
{
	//Создаём множество
	set <string> test;		
	string input;
	while (true)
	{
		//Запрашиваем у пользователя ввод
		cout << "Input your answers: "; cin >> input;	

		//Проверяем, есть ли уже такой элемент во множестве
		if (test.find(input) == test.end())				
		{
			//Если нет, то выводим успешную отправку
			cout << "Your answers have been sent successfully!" << endl; 
			cout << endl;

			//И вносим элемент во множество
			test.insert(input);
		}

		//Иначе выводим ошибку
		else
		{
			cout << "Something went wrong..." << endl; "\n";
			cout << endl;
		}
	}
}