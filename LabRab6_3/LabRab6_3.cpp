#include <iostream>
#include <queue>

using namespace std;

int counting(int a) {       //Проверяем, делится ли число без остатка
    while (a % 2 == 0) {
        a = a / 2;
    }
    while (a % 3 == 0) {
        a = a / 3;
    }
    while (a % 5 == 0) {
        a = a / 5;
    }
    return a;
}

int main() {

    queue <int> q;  //Создаём очередь
    int n;
    int num = 2;
    int x = 0;

    cout << "Input number of numbers: "; cin >> n;  //Просим пользователя ввести количество n чисел

    /* Пока x не достигнет числа, введённого пользователем, вызываем функцию */
    while (x < n) {
        if (counting(num) == 1) { //Если в результат функция вернёт нам 1, то добавляем переменную num в очередь
            q.push(num);
            x++;                  //Затем увеличиваем переменную x
        }
        num++;                    //И переменную num
    }

    for (int i = 0; i < n; i++) { //Выводим результат в консоль
        cout << q.front() << ' ';
        q.pop();
    }

}