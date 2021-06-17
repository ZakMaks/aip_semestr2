#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
// 13неделя_1-5номер_

using namespace std;

int randArray[20] ;
int sless5=0;
int smore6=0;
int sless4=0;
int polojElem=0;
int otricElem=0;
int spol=0;
//int sotr=0;
float sredpol=0;
//float sredotr=0;
float srarif=0;



void Nomber1 ();
void Nomber2 ();
void Nomber3 ();
void Nomber4 ();
void Number5 ();

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

//Вычислить сумму элементов массива:
//c. меньших 5, больших 6, меньших 4,
void Nomber2 (){
for (int i = 0; i < 20; i++) {
    if (randArray[i]  > 6) {
       smore6 =smore6 + randArray[i];
                    }
         else if (randArray[i] < 4) {
        sless4 += randArray[i];
        sless5 += randArray[i];
               }
         else if (randArray[i] < 5) {
  sless5 += randArray[i];
         }
     }
  cout << "Summa chisel men'she 5: " << sless5 << endl;
  cout << "Summa chisel bol'she 6: " << smore6 << endl;
  cout << "Summa chisel men'she 4: " << sless4 << endl;
  }

//8. Посчитать количество положительных/отрицательных элементов массива
void Nomber3 (){
    for (int i = 0; i < 20; i++) {
         if (randArray[i] > 0) {
           polojElem += 1;
           }
         else if (randArray[i]  < 0) {
           otricElem += 1;
           }
}
    cout << "Kolichestvo polojitel'n elementov: " << polojElem << endl;
   // cout << "Kolichestvo otricatel'n elementov: " << otricElem << endl;
    }

//7. Найти среднее арифметическое положительных/отрицательных
void Nomber4 (){
    for (int i = 0; i < 20; i++) {
         if (randArray[i] > 0) {
           polojElem += 1;
           spol += randArray[i];
           }

}
    sredpol=spol/polojElem;
    cout << "srednee arifmetich polojitel'n elementov: " << polojElem << endl;
}

//11. Вывести элементы массива, меньших среднего арифметического
void Nomber5(){
    cout << "Srednee arifmeticheskoe: " << srarif << endl;
    cout << "Element men'shi srednego arifmeticheskogo: ";
       for (int i = 0; i < 20; i++) {
           if (randArray[i] < srarif) {
    cout << " " << randArray[i] << " ";
           }
       }
   }


int main()
{
cout << " Pervoe zadanie"<<endl;
Nomber1();
cout << " Vtoroe zadanie"<<endl;
Nomber2();
cout << " Tret'e zadanie"<<endl;
Nomber3();
cout << " Chetvertoe zadanie"<<endl;
Nomber4();
cout << " Putoe zadanie"<<endl;
Nomber5();
}
