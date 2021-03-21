#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
// zuducha 8-B
//Вычислите значение выражения:
//b. |x| + x^5, если x=−2. Ответ: -30

int main()
{
    int x, F;
    x = -2;
    F = abs (x) + pow(x,5);
    std::cout << "funkcia F =  " << F;

    std::fstream f("Otvet.txt", std::ios::out); // открываем для записи
    f << "funkcia F =  " << F;
     f.close(); // закрываем файл

    return 0;
}



