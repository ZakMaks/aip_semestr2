#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
// 11неделя_4номер_задача4
//Робот-автомобиль описывается как структура с полями: скорость, длительность
//движения и номер. Напишите функцию для расчёта пройденного расстояния..
//S=v*t
using namespace std;

struct Robot
{
    float skor;
    float vrema;
    float nomer;
    float s;
};

Robot a;

int main() {
 cout << "Vvedi skorost' robota  ";
    cin >> a.skor ;
    cout << "Vvedi vrema dvijenia robota  ";
    cin  >> a.vrema;
    a.s = a.vrema * a.skor;
        cout << "Proidenui put' =  S=skorost'*vrema= " << a.s;

    return 0;
}
