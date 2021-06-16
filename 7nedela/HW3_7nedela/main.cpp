#include <iostream>
#include <cmath>
//Лекция4_Вариант16_№3_Задача2p
//Протабулировать функцию (шаг и диапазон задаёт пользователь):
//y =_/(5 + 3/x) + 11*x + ctg(2x + 15)//using namespace std;
#include <iomanip> // чтобы работал precision
int main() {
    float dx, xy, x;
    float y;
    std::cout << "Solve function. \nEnter dx: ";
    std::cin >> dx;
    std::cout << "Enter x0: ";
    std::cin >> x;
    std::cout << "Enter xf: ";
    std::cin >> xy;
    // заголовок таблицы
    std::cout << "\tx\t\ty" << std::endl;
    std::cout.precision(5); //кол-во знаков после запятой
    while (x < xy){
        y = sqrt(5+3/x)+11*x+1/tan(2*x+15);
        std::cout << "\t"
        << x
        << "\t\t"
        << y
        << std::endl;
        x += dx;
        }
    return 0;
}
