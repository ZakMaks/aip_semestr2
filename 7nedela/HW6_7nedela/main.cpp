#include <iostream>
#include <cmath>
//Лекция4_Вариант16_№6_Задача3b
//Пользователь задаёт число Ч и Х. Посчитать y:
//y = 1/x + 1/2x + 1/3x + ⋯ + 1/(Ч x)
//using namespace std;
int main() {
    float x, y=0, i, ch;
    std::cout << "Vvedite chislo ch' ";
    std::cin >> ch;
    std::cout << "Vvedite chislo x ";
    std::cin >> x;
    for(i=1; i<ch+1; i++)
            y = y + 1/(i*x);
    std::cout<< std::endl<< "Rezul'tat =  "<<y<<  std::endl;

        std::getchar();
        std::getchar();

    return 0;
}
