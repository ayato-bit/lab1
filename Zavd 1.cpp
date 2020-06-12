#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()

{
    setlocale(LC_ALL, "RUSSIAN");

    //первый пример
    cout << "первый" << endl;
    int* a= new int;
    *a = 9;
        cout << "переменная х = " << *a << endl;
    delete a;
    cout << endl;
  
    //второй пример
    cout << "второй" << endl;
    srand(time(NULL)); 
    float *asp = new float[10];
    for (int i = 0; i < 10; i++) {
        asp[i] = (rand() % 10 + 1) / float((rand() % 10 + 1));
    }
        cout << "asp = " << endl;
        for (int i = 0; i < 10; i++) {
            cout << setprecision(2) << asp[i] << endl;
        }
    delete[] asp; 
    cout << endl;

    //третий пример
    cout << "третий" << endl;
    float **enma = new float* [2]; 
    for (int count = 0; count < 2; count++) {
        enma[count] = new float[5];
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            enma[i][j] = (rand() % 10 + 1) / float((rand() % 10 + 1));
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << '\t' << setprecision(2) << enma[i][j] << '\t';
            cout << endl;
        }
    }
    
    for (int count = 0; count < 2; count++) {
        delete[] enma [count];
    }
    return 0;
}

