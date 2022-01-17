#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main() 
{
	set <string> test;		//Создаём множество
	string input;
	while (true)
	{
		cout << "Input your answers: "; cin >> input;	//Запрашиваем у пользователя ввод
		if (test.find(input) == test.end())				//Проверяем, есть ли уже такой элемент во множестве
		{
			cout << "Your answers have been sent successfully!" << endl; //Если нет, то выводим успешную отпрвку
			cout << endl;												 //И вносим элемент во множество
			test.insert(input);
		}																
		else                                                             //Иначе выводим ошибку
		{
			cout << "Something went wrong..." << endl; "\n";
			cout << endl;
		}
	}
}