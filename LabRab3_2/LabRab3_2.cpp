#include <iostream>
#include <stdlib.h>


using namespace std;

int sum_n(int n) {  // Считаем сумму цифр, которые стоят на четных местах
    int sum = 0;
    char buffer[64]; // Создаем строку длиной 64 символа
    snprintf(buffer, 64, "%d", n); // Форматируем число n в строку n
    for (int i = 0; i < strlen(buffer); ++i) // Проверяем строку
    {
        if (i % 2) // Если разряд числа четный
            sum += buffer[i] - '0';   // Добавляем разницу
    }
    return sum;
}

int* res(int* a, int size)
{
    int* new_arr = new int[size];
    cout << "Результат: ";
    for (int i = 0; i < size; i++) {
        new_arr[i] = a[i];
    }
    return (new_arr);
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int num;
    cout << "Итак, вводи количество элементов динамического массива: "; cin >> num;
    int* a = new int[num];
    for (int i = 0; i < num; i++) {
        int element_of_arr;
        cout << "Умничка, теперь заполняй массив: ";
        cin >> element_of_arr;
        a[i] = element_of_arr;
    }

    int choice = 0;
    while (true) {
        cout << '\n' << "Ну и что будем делать с массивом? \n" << endl 
            << "1. Вывод введённого массива в консоль. \n" 
            << "2. Сортировка по сумме цифр, стоящих на чётных местах. \n" 
            << "3. Сортировка массива по последней цифре. \n" 
            << "4. Выход \n" << endl;
        cout << "Напиши номер задания для выполнения: "; cin >> choice;

        switch (choice) {
        case 1:
        {
            int* array;
            array = res(a, num);
            int length = _msize(array) / sizeof(int);

            for (int i = 0; i < length; i++) {
                cout << array[i] << " ";
            }
            cout << endl;
            delete[] array;
            break;
        }
        case 2:
        {
            int* array;
            array = res(a, num);
            int length = _msize(array) / sizeof(int);

            for (int i = 0; i < length - 1; i++) {
                for (int j = 0; j < length - 1; j++) {
                    if (sum_n(array[j]) > sum_n(array[j + 1]))
                        swap(array[j], array[j + 1]);
                }
            }

            for (int i = 0; i < length; i++) { 
                cout << array[i] << " ";
            }
            cout << endl;
            delete[] array;
            break;
        }

        case 3:
        {
            int* array;
            array = res(a, num);
            int length = _msize(array) / sizeof(int);

            for (int i = 0; i < length; i++) {
                for (int j = 0; j < length - 1; j++) {
                    if (array[j] % 10 > array[j + 1] % 10)
                        swap(array[j], array[j + 1]);
                    else if (array[j] % 10 == array[j + 1] % 10) {
                        if (array[j] < array[j + 1])
                            swap(array[j], array[j + 1]);
                    }
                }
            }

            for (int i = 0; i < length; i++) { 
                cout << array[i] << " ";
            }
            cout << endl;
            delete[] array;
            break;
        }

        case 4:
        {
            exit(4);
        }
        }
    }



}