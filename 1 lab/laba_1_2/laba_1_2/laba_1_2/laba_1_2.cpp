#include <iostream>

using namespace std;

int mn(int n, ...) {
    int min = 0;
    int* p = &n;
    min = *p;
    for (int i = 0; i <= n; i++) {


        if (min > *p) {
            min =  *p;
        }
       
        *(p++);
        if (*p > 1000) break;

    }
    return min;
   
}

int main()
{
   cout << mn(4, 1, 4, 25) << endl;
   
    cout << mn(2, 5, 9) << endl;
    cout << mn(6, 4, -4);
}

