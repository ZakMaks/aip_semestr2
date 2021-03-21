#include <iostream> //nomer 2b
#include <fstream>
#include <string>

//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:
//b. Прямоугольник

int main()
{
    int a , b;
    std::cout << "Vvedi storonu prumougolnika A " << std::endl;
    std::cin >> a;

    std::cout << "Vvedi storonu prumougolnika B " << std::endl;
    std::cin >> b;

    std::cout << " P = " << (a + b)*2 << std::endl;
    std::cout << " S = " << a * b << std::endl;

    std::getchar();
    std::getchar();

    std::fstream f("Otvet.txt", std::ios::out); // открываем для записи
    f << "P = " << (a + b)*2<< "  "<< " S = "<< a * b ;
     f.close(); // закрываем файл

    return 0;
}



