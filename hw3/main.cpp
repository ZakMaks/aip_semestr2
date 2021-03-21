#include <iostream>
#include <fstream>
#include <string>
//zuducha 5
//Пользователь вводит три числа. Увеличьте первое число в два раза, второе число
//уменьшите на 3, третье число возведите в квадрат и затем найдите сумму новых
//трех чисел.

int main()
{
    int a, b, c, S;
    std::cout << "Vvedi pervoe chislo: " ;
    std::cin >> a ;
    std::cout << "Vvedi vtoroe chislo: " ;
    std::cin >> b ;
    std::cout << "Vvedi tret'e chislo: " ;
    std::cin >> c ;
    a = a * 2;
    b = b - 3;
    c = c * c;
    S = a + b + c;
    std::cout << "Poluchilos' tak: "<< S ;

    std::getchar();
    std::getchar();

    std::fstream f("Otvet.txt", std::ios::out); // открываем для записи
    f << "Poluchilos' tak: " << S;
     f.close(); // закрываем файл


    return 0;
}



