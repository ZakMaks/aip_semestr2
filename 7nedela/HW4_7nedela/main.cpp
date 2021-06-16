#include <iostream>
#include <cmath>
//Лекция4_Вариант16_№4_Задача4
//Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
//Н=10, М=35, Ш=5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М,
//Ш указываются пользователем (считываются с клавиатуры или из файла).
//using namespace std;
int main() {
    int n, m, sh;
    std::cout << "Vvedite nachal'noe chislo ";
    std::cin >> n;
    std::cout << "Vvedite konechnoe chislo ";
    std::cin >> m;
    std::cout << "Vvedite shag mejdu chislami ";
    std::cin >> sh;
    for (int i=n; i<m; i += sh)
        std::cout << i << " ";
        std::cout << std::endl;
        std::getchar();
        std::getchar();

    return 0;
}
