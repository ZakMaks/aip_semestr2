#include <iostream>
#include <cmath>
//Лекция4_Вариант16_№5_Задача6
//Вычислить степень введенного числа (с помощью циклов).
//using namespace std;
int main() {
    int ch, st, rezult = 1, i;
    std::cout << "Vvedite chislo vozvodimoe v stepen' ";
    std::cin >> ch;
    std::cout << "Vvedite stepen' chisla ";
    std::cin >> st;
    for(i=0; i<st; i++)
            rezult *=ch;
    std::cout<< std::endl<< "Rezul'tat vozveden'a v stepen'  "<<st<< " chisla "<< ch<< " = "<<rezult<< std::endl;

        std::getchar();
        std::getchar();

    return 0;
}
