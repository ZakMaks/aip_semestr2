#include <iostream>
//Лекция4_Вариант16_№1_Задача1
//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
//равно номеру строки. Количество строк Н вводит пользователь (можно из файла).

//using namespace std;

int main()
{
 float n;
 std::cout << "Enter num: ";
 std::cin >> n;
    for(int i=1; i < n+1; i++){
        for(int j=0; j < i; j++)
        std::cout << 0;
        std::cout << std::endl;
        }
    std::cout << std::endl;
    std::getchar(); // ожидание ввода, чтобы прога
    std::getchar(); // не закрывалась после выполнения
return 0;
}
