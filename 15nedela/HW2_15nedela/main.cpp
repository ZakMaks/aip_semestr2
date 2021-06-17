#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
// 15неделя_2номер_задача4
//4. В квадратной матрице найти сумму положительных элементов, лежащих на и выше
//главной диагонали и расположенных в чётных столбцах.
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

    int sum = 0;
    for(int i = 0; i<rows; i++)
        for(int j = i; j<cols; j++)
    if(mat[i][j] > 0 and j % 2 == 0 )
    sum += mat[i][j] ;
    cout <<"Summa  " <<sum<< endl;

    return 0;
}
