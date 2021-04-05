#include <iostream>
#include <math.h>
// Номер 5, Задача 3 Б
//3. Напишите программу, которая принимает от пользователя координаты точки и
//определяет, попала ли точка в заштрихованную область.

int main()
{
    const float r = 1;
    float x, y;
    std::cout << "Vvedi koordinatu"<< std::endl;
    std::cin >> x >> y;
    float rc = sqrt(x*x+y*y);
    if ((y<x/2) and (r>rc))
    std::cout << "Da, popadaet";
    else
    std::cout << "net";


}
