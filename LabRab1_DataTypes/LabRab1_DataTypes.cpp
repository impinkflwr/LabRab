#include <iostream>
#include <bitset>
#include <limits.h>



using std::cout;
using std::endl;
using std::cin;

int main()
{
    setlocale(LC_ALL, "Russian"); // Подключение русского языка

    // Вывод имени, фамилии и номера группы
    cout << "1." << endl;
    cout << "Александр Зотов, 211-352" << "\n" << endl;

    //Вывод размерности, минимальных и максимальных значений встроенных типов данных
    cout << "2." << endl;
    cout << "Min int = " << INT_MIN << "\t"
        << "Max int = " << INT_MAX << "\t"
        << "Size of int = " << sizeof(int) << "\n" << endl;

    cout << "Min unsigned int = " << 0 << "\t"
        << "Max unsigned int = " << UINT_MAX << "\t"
        << "Size of unsigned int = " << sizeof(unsigned int) << "\n" << endl;

    cout << "Min short = " << SHRT_MIN << "\t"
        << "Max short = " << SHRT_MAX << "\t"
        << "Size of short = " << sizeof(short) << "\n" <<endl;

    cout << "Min unsigned short = " << 0 << "\t"
        << "Max unsigned short = " << USHRT_MAX << "\t"
        << "Size of unsigned short = " << sizeof(unsigned short) << "\n" << endl;

    cout << "Min long = " << LONG_MIN << "\t"
        << "Max long = " << LONG_MAX << "\t"
        << "Size of short = " << sizeof(long) << "\n" << endl;

    cout << "Min long long = " << LLONG_MIN << "\t"
        << "Max long long = " << LLONG_MAX << "\t"
        << "Size of long long = " << sizeof(long long) << "\n" << endl;

    cout << "Min double = " << DBL_MIN << "\t"
        << "Max double = " << DBL_MAX << "\t"
        << "Size of double = " << sizeof(double) << "\n" << endl;

    cout << "Min char = " << CHAR_MIN << "\t"
        << "Max char = " << CHAR_MAX << "\t"
        << "Size of char = " << sizeof(char) << "\n" << endl;

    cout << "Min bool = " << 0 << "\t"
        << "Max bool = " << 1 << "\t"
        << "Size of bool = " << sizeof(bool) << "\n" << endl;

   
 
    //Представление введённого пользователем числа в различных сс
    cout << "3." << endl;
    int v;
    cout << "Введите целое число: "; cin >> v;
    cout << "В бинарном виде: " << std::bitset<32>(v) << endl;        // Загуглил
    cout << "В шестнадцатеричном виде: " << std::hex << v << endl;
    if (v <= 0) {
        cout << "Bool: 0" << endl;
    }
    else {
        cout << "Bool: 1" << endl;
    }
    cout << "Double: " << double(v) << endl;
    cout << "Char: " << char(v) << "\n" << endl;


    // Решение уравнения вида a * x = b
    cout << "4." << endl;
    int a, b;
    cout << "Введите два коэффициента через пробел для решения уравнения a*x=b: "; cin >> a >> b;
    if (a != 0) {
        1.*b / a;
        cout << a << " * x = " << b << "\n"
            << "x = " << b << " / " << a << "\n"
            << "x = " << 1.*b/a << "\n"
            << "Ответ: " << 1.*b/a << "\n" << endl;
    }
    else {
        cout << a << " * x = " << b << "\n"
            << "x = " << b << " / " << a << "\n"
            << "Извините, на ноль делить не умею :>" << "\n" << endl;
    }


    // Нахождение середины отрезка, заданного целыми координатами концевых точек
    cout << "5." << endl;
    int f, s;
    cout << "Введите координаты отрезка на прямой: "; cin >> f >> s;
    1.*(f + s) / 2;
    cout << "Середина отрезка находится в точке с координатой: " << 1.*(f+s)/2<< endl;
 

    
    return 0;

}