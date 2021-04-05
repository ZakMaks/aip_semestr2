#include <iostream>
#include <math.h>
// Номер 2, Задача1 В
//1. Дана функция y=f(x). Найти значение функции по x:

int main()
{
int x;
   std::cout << "vvedi X" << std::endl;
   std::cin >> x;
if (x>3)
    std::cout <<"y = "<<5*x-10;
else if (x == 3)
    std::cout << "y = " << 1;
else
    std::cout << "y = " << 2* fabs(x)-5;
}
