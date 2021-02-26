#include <iostream> //nomer 2b


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

    return 0;
}


