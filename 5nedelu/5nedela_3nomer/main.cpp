#include <iostream>
#include <math.h>
// Номер 3, Задача1 E
//1. Дана функция y=f(x). Найти значение функции по x:


int main()
{
int x;
   std::cout << "vvedi X" << std::endl;
   std::cin >> x;
if (x>2)
    std::cout <<"y = "<<2*x-15;
else if (x == 2)
    std::cout << "y = " << 5;
else if (x<2)
    std::cout << "y = " << 3* fabs(x-1)-8;
}
