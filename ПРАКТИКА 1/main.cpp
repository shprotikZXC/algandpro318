#include <iostream>
using namespace std;

int main ()
{
    // задача Begin15
    // декларація змінних
    double A,B,C;
    double t;
    // введення змінної A
    cout << "Enter A: ";
    cin >> A;
    // введення змінної B
    cout << "Enter B: ";
    cin >> B;
    // введення змінної C
    cout << "Enter C: ";
    cin >> C;
    // розрахунок результату
    t = A;
    A = B;
    B = C;
    C = t;
    // вивід результату
    cout <<"A: " << A << endl;
    cout <<"B: " << B << endl;
    cout <<"C: " << C << endl << endl;
  
  
  
    // задача Begin28
    // декларація змінних
    double S, // площа
    V1, // швидкість 1 авто
    V2, // швидкість 2 авто
    T, // час
    Vs, // сума швидкостей
    St, // сума відстаней, які проїхали автомобілі
    Sf; // відстань між автомобілями
   
    // введення змінної V1
    cout << "Enter V1: ";
    cin >> V1;
    // введення змінної V2
    cout << "Enter V2: ";
    cin >> V2;
    // введення змінної S
    cout << "Enter S: ";
    cin >> S;
    // введення змінної T
    cout << "Enter T: ";
    cin >> T;
    // розрахунок результату
     Vs = V1 + V2;
     St = T * Vs;
     Sf = abs(S - St);  
    // вивід результату
    cout <<"Sf: " << Sf << "km" << endl << endl;
    
    
    
    // задача Begin42
    // декларація змінних
    double d1,d2; // діагоналі
    
    // введення змінної d1
    cout << "d1: ";
    cin >> d1;
    // введення змінної d2
    cout << "Enter d2: ";
    cin >> d2;
    // розрахунок результату (S-площа)
    S = (d1*d2)/2; 
    // вивід результату
    cout <<"S: " << S << endl << endl;
    return 0;
}