#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
// 13неделя_1-5номер_

using namespace std;

int randArray[20] ;
float srarif=0;
float arr1[20];
float arr2[20];


void Nomber1 ();
void Nomber2 ();
void Nomber3 ();
void Nomber4 ();
void Number5 ();
void Nomber6 ();


//1.Сгенерировать массив со случайными числами в диапазоне:
//f. [0,20]
void Nomber1(){
    cout << "Massiv ot 0 do 20: ";
    srand(time(NULL));
    for (int i = 0; i < 20; i++){
        if (i < (rand() % 21)) {
        randArray[i] = rand() % 20; // 0 ... 20
        }

        cout << randArray[i] << "  ";
    if (i < 19) {
            srarif += randArray[i];
            }
            else {
            srarif = ((srarif + randArray[i]) / 20);
            }
    }
}

//14Создать новый массив из двух других массивов путём операций над элементами
//массивов: b. вычитания
void Nomber6(){
    cout << "Operacii nad massivami " << endl;
    cout << "Novui massiv 1: " << endl;
       for (int i = 0; i < 20; i++) {
           arr1[i] = (rand() % 20) / 2.5;
           std::cout << " " << arr1[i] << " ";
       }
    cout << endl;
    cout << "starui massiv - massiv 1 = novui massiv 2: " << endl;
       for (int i = 0; i < 20; i++) {
           arr2[i] =  randArray[i] - arr1[i];
           cout <<  " " << arr2[i] << " " ;
       }
}

int main()
{
cout << " Pervoe zadanie"<<endl;
Nomber1();
cout << " Shestoe zadanie"<<endl;
Nomber6();

}
