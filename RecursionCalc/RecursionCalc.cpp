﻿// RecursionCalc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void CalcUserNumber()
{
    int itterator = 0;
    int userInputNum = 0;
    string userResponse;

    // Информация для пользователя
    cout << "Введи целое число" << endl;

    // Получаю данные от пользователя
    cin >> userInputNum;

    if (userInputNum < 0)
        return;

    while (itterator < 10)
    {
        // Вывод таблицы умножения
        cout << "Таблица умножения " << userInputNum << " на " << itterator << " = " << userInputNum * itterator << endl;

        // Счётчик иттераций
        itterator++;
    }

    // Информация для пользователя
    cout << "Хотите  попробовать другое число? Напиши yes или no" << endl;
    cin >> userResponse;

    if (userResponse == "no") 
    {
        // Давай до свидания
        return;
    }
    else 
    {
        // Рекурсия
        CalcUserNumber();
    }
}

int main()
{   
    setlocale(LC_ALL, "Russian");

    CalcUserNumber();

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
