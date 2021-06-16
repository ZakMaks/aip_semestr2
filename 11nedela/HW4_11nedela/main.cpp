#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
// 11неделя_4номер_задача4
//Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
//данные о самом тяжёлом роботе.


using namespace std;

struct Robot
{
    float maxskor;
    float ves;
    float gabaritu;
};

Robot a;
Robot b;

int main() {
 cout << "Vvedi ves 1 robota  ";
    cin >> a.ves;
    cout << "Vvedi ves 2-ogo robota  ";
    cin  >> b.ves;
    if (a.ves > b.ves)
        cout << "1-oi robot tejelee";
    else
        cout << "2-i robot tejelee";
    return 0;
}
