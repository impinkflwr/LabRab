#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    string input;

    //Создаём наш map
    map <string, int> map1;

    double count = 0;
    int j = 1;

    cout << "Input some string: ";

    //Создаём цикл и просим пользователя ввести строку
    while (cin >> input)
    {
        //Преобразовываем всю строку в нижний регистр
        transform(input.begin(), input.end(), input.begin(), tolower);

        count++;

        //Создаём цикл с условиеем для проверки ввода
        //Если слова, которое ввёл пользователь, ещё нет в map, то добавляем его и даём ему ключ
        //Иначе добавлям то же слово, при этом увеливая ключ на единицу
        if (map1.find(input) == map1.end())
        {
            map1.insert(pair<string, int>(input, j));
        }
        else
        {
            map1[input] += 1;
        }
    }

    //Вывод результата
    for (auto i = map1.begin(); i != map1.end(); i++)
    {
        cout << i->first << " " << (double(i->second / count) * 100) << "%" << endl;
    }
}