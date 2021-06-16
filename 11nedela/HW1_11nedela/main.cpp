#include <iostream>
#include <math.h>
// 11неделя_1номер_задача1(Номер 4, Задача 2 Б)
//Сделайте рефакторинг задач на проверку нахождения точки в закрашенной области
//из предыдущего домашнего задания. В результате, вместо двух переменных,
//описывающих координаты точки, должна быть одна переменная-структура с
//атрибутами – координатами.(2. Напишите программу, которая принимает от пользователя координаты точки и
//определяет, попала ли точка в заштрихованную область.)
struct Point{
    float x, y;
};

int main()
{
    Point one;
    std::cout << "Vvedi koordinatu"<< std::endl;
    std::cin >> one.x >> one.y;

    if ((one.y<sin(one.x)) and (one.y<0.5) and (one.y>0))
    std::cout << "Da, popadaet";
    else
    std::cout << "net";
}
//старая задача
/*int main()
{
    float x, y;
    std::cout << "Vvedi koordinatu"<< std::endl;
    std::cin >> x >> y;

    if ((y<sin(x)) and (y<0.5) and (y>0))
    std::cout << "Da, popadaet";
    else
    std::cout << "net";
}
*/
