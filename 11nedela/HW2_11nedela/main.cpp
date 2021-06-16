#include <iostream>
#include <math.h>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
// 11неделя_2номер_задача2b
//Создайте структуру для хранения комплексных чисел. Структура должна иметь 2
//атрибута: вещественную часть и мнимую. Объявите два числа и получите их
//значения от пользователя.
//b. Напишите функцию, которая будет возвращать комплексно-сопряжённое число.


using namespace std;

float z, a, b;

struct Komp
{
    float re = a;
    float im = b;
};

Komp num;

void vozvr();

int main() {
 cout << "Vvedi veshestvennuyu chast' shisla ";
    cin >> a;
    cout << "Vvedi mnimuyu chast' chisla ";
    cin >> b;
    cout << "z=" << a << "+" << b << "*i" << " - algebraicheskaya zapic'" << endl;
    vozvr();
    return 0;
}
void vozvr() {
     cout << "z=" << a << "-" << b << "*i" << " - vozvrashenie komplexno soprejonnogo chisla'" << endl;
}


