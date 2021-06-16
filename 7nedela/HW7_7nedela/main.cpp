#include <iostream>
#include <cmath>
//Лекция4_Вариант16_№7_Задача3f
//Пользователь задаёт число Ч и Х. Посчитать y:
//y = x − 2x + 3x − 4x + ⋯ + Чx
//using namespace std;
int main() {
    int x, y=0, i, ch;
    std::cout << "Vvedite chislo ch' ";
    std::cin >> ch;
    std::cout << "Vvedite chislo x ";
    std::cin >> x;
    for(i=1; i<ch+1; i++){
        if(i % 2 ==0)
            y = y - i*x; else
            y = y + i*x;
    }
    std::cout<< std::endl<< "Rezul'tat =  "<<y<<  std::endl;

        std::getchar();
        std::getchar();

    return 0;
}
