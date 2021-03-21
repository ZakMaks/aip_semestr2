#include <iostream>
#include <fstream>
#include <string>
//zuducha 11
//Вводятся три целых числа. Наибольшее увеличить на 5, наименьшее уменьшить 3.

int main()
{
    int a, b, c, max, min, sr;
    max = 0;
    min = 1000000;
    sr = 0;
    std::cout << "Vvedi pervoe chislo: " ;
    std::cin >> a ;
    std::cout << "Vvedi vtoroe chislo: " ;
    std::cin >> b ;
    std::cout << "Vvedi tret'e chislo: " ;
    std::cin >> c ;

    if (a > max)
        max=a;

    if (b > max)
        max=b;

    if (c > max)
        max=c;

    if (a < min)
        min=a;

    if (b < min)
        min=b;

    if (c < min)
        min=c;

    if ((max != a) && ( a != min))
        sr=a;
    if ((max !=  b ) && ( b !=  min))
        sr=b;
    if ((max !=  c ) && ( c !=  min))
        sr=c;

    max = max +5;
    min = min -3;
     std::cout << "Vashi chisla: "<< min <<"  "<< sr <<"  "<< max;


    std::getchar();
    std::getchar();

    std::fstream f("Otvet.txt", std::ios::out); // открываем для записи
     f  << "Vashi chisla: "<< min <<"  "<< sr <<"  "<< max;
     f.close(); // закрываем файл

    return 0;
}


