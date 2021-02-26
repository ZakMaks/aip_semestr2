#include <iostream>

//zuducha 5
int main()
{
    int a, b, c, S;
    std::cout << "Vvedi pervoe chislo: " ;
    std::cin >> a ;
    std::cout << "Vvedi vtoroe chislo: " ;
    std::cin >> b ;
    std::cout << "Vvedi tret'e chislo: " ;
    std::cin >> c ;
    a = a * 2;
    b = b - 3;
    c = c * c;
    S = a + b + c;
    std::cout << "Poluchilos' tak: "<< S ;

    std::getchar();
    std::getchar();
    return 0;
}



