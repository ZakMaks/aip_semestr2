#include <iostream>
#include <math.h>
#include <string>
#include <cmath>
#include <fstream>
// 11неделя_3номер_задача6
//Имеется информация о датчиках: диапазон измеряемых значений (min, max),
//погрешность, максимальная скорость. Вывести данные о самом точном датчике.


using namespace std;

struct Sensor
{
    float max;
    float min;
    float pogresh;
    float skorost;
};

Sensor a;
Sensor b;

int main() {
 cout << "Vvedi pogreshnost' 1 sensora  ";
    cin >> a.pogresh;
    cout << "Vvedi pogreshnost' 2-ogo sensora  ";
    cin  >> b.pogresh;
    if (a.pogresh > b.pogresh)
        cout << "2-oi sensor tochnee";
    else
        cout << "1-i sensor tochnee";
    return 0;
}
