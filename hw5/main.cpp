#include <iostream>
#include <fstream>
#include <string>

//zuducha 9-B
//Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
//b. Объём (литры, кубы, баррели)

int main()
{
    int  a;

        std::cout << "VVedi velichinu ";
        std::cin >> a;
        std::cout << a << " L = "<< a * 0.001<<" m3 "<< std::endl;
        std::cout << a << " L = "<< a * 0.0063<<" barrel "<< std::endl;
        std::cout << a << " m3 = "<< a * 1000<<" L "<< std::endl;
        std::cout << a << " m3 = "<< a * 6.29<<" barrel "<< std::endl;
        std::cout << a << " B = "<< a * 0.16<<" m3 "<< std::endl;
        std::cout << a << " B = "<< a * 158.99<<" L "<< std::endl;

    std::getchar();
    std::getchar();

    std::fstream f("Otvet.txt", std::ios::out); // открываем для записи
     f  << a << " L = "<< a * 0.001<<" m3 "<< std::endl;
     f << a << " L = "<< a * 0.0063<<" barrel "<< std::endl;
     f << a << " m3 = "<< a * 1000<<" L "<< std::endl;
     f << a << " m3 = "<< a * 6.29<<" barrel "<< std::endl;
     f << a << " B = "<< a * 0.16<<" m3 "<< std::endl;
     f << a << " B = "<< a * 158.99<<" L "<< std::endl;
     f.close(); // закрываем файл

    return 0;
}



