#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
// 15неделя_3номер_задача7
//Дана матрица. Элементы первой строки — количество осадков в соответствующий
//день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган?
//(ураган — когда самый сильный ветер был в самый дождливый день).
using namespace std;

const int rows = 2;  // строки
const int cols = 5;  // столбцы
int mat[rows][cols];
const int n =2;


int main() {

    srand(time(0)); // инициализация генерации случайных чисел

    cout << "pogoda: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << (mat[i][j] = rand()  % 10) << " ";
        }
        cout << endl;
    }
    cout << endl;

    int max1 = mat[0][0];
       for (int j = 0; j < cols; j++)
           if (max1 < mat[0][j])
               max1 = mat[0][j];

       int max2 = mat[1][0];
       for (int j = 0; j < cols; j++)
           if (max2 < mat[1][j])
               max2 = mat[1][j];

       for (int j = 0; j < cols; j++)
           if (max1 == mat[0][j] and mat[1][j] == max2)
               cout << " uragan bul v " << j + 1 << " den' " << endl;
           else
               cout << " uragan ne bul v " << j + 1 << " den' " << endl;


    return 0;
}
