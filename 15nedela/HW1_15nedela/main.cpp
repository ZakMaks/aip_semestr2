#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
// 15неделя_1номер_задача2
//2. Преобразовать матрицу, умножив элементы каждой строки на значение второго
//элемента этой строки.
using namespace std;

const int rows = 5;  // строки
const int cols = 5;  // столбцы
int mat[rows][cols];
const int n =2;


int main() {

    srand(time(0)); // инициализация генерации случайных чисел

    cout << "Random matrica: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << (mat[i][j] = rand()  % 10) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Izmenennau matrica: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << (mat[i][j] = mat[i][j] * mat[i][n]) << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
