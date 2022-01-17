#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	//Создаём списки
	list <string> lSurname;
	list <int> lGroup;
	
	int group;
	string surname;

	while (true)
	{
		//Просим пользователя ввести номер группы и фамилию студента через пробел
		cout << "Number of a group, surname: " << endl; cin >> group >> surname;
		cout << endl;

		//Если одно из значений, введённых пользователем, будет равно нулю, то завершаем цикл и выводим результат
		if (group == 0 || surname == "0")
		{
			break;
		}

		//Вносим номер группы в список
		lGroup.push_back(group);

		//Вносим номер группы и фамилию в список
		lSurname.push_back(to_string(group) + " " + surname);
	}
	//Сортируем список и убираем все дубликаты
	lGroup.sort();
	lGroup.unique();

	//Вывод списка
	for (auto i = lGroup.begin(); i != lGroup.end(); i++)
	{
		cout << *i << ":" << endl;
		for (string surname : lSurname)
		{
			if (surname.find(to_string(*i)) != string::npos)
			{
				cout << surname << endl;
			}
		}
		cout << endl;
	}
}