#include <iostream>
#include <math.h>
// Номер 4, Задача 2 Б
//2. Напишите программу, которая принимает от пользователя координаты точки и
//определяет, попала ли точка в заштрихованную область.

int main()
{
    float x, y;
    std::cout << "Vvedi koordinatu"<< std::endl;
    std::cin >> x >> y;

    if ((y<sin(x)) and (y<0.5) and (y>0))
    std::cout << "Da, popadaet";
    else
    std::cout << "net";
}
