#include <iostream>
//Лекция4_Вариант16_№2_Задача2B
//Протабулировать функцию (шаг и диапазон задаёт пользователь):
//y = -0.1x^2 + 2x+1

//using namespace std;
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
        y = -0.1*x*x+2*x+1;
        std::cout << "\t"
        << x
        << "\t\t"
        << y
        << std::endl;
        x += dx;
        }
    return 0;
}
