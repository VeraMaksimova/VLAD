#include <iostream>
using namespace std;
#include <math.h>
//x3 + 2x – 4,
//x2 – 1

float dihotomia (float a, float b) {
    float e = 0.001;
    float x;
    do {
         x = (a + b) / 2;
        if ((x * 3 + 2 * x - 4) * (a * 3 + 2 * x - 4) <= 0) {
            b = x;
            return b;
        }
        else {
            a = x;
            a = a * (-1);
            return a;
        }
    } while (abs(a - b) > 2 * e);

    
}
float dihotomia_2(float z,float v){
    float e = 0.001;
    float x;
    do {
        x = (z + v) / 2;
        if (((pow(x,2) - 1) * (pow(z,2) - 1)) <= 0) {
            v = x;
            return v;
        }
        else {
            z = x;
            z = z * (-1);
            return z;
        }
    } while (abs(z - v) > 2 * e);
}
int main()
{
    setlocale(LC_ALL, "rus");
    float a, b;
    cout << "Введите интервал а " << endl;
    cin >> a;
    cout << "Введите интервал b " << endl;
    cin >> b;
    float (*pointer_1) ( float , float ) = dihotomia;
    cout << (*pointer_1)(a, b) << endl;

    float z, v;
    cout << "Введите интервал z " << endl;
    cin >> z;
    cout << "Введите интервал v " << endl;
    cin >> v;
    float (*pointer_2) (float, float) = dihotomia_2;
    cout << (*pointer_2)(z, v);
    
    
}

