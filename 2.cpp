#include <iostream>
#include <stdio.h>
#include <math.h>
#define n 3
using namespace std;
int main()
{
    int i;
    double x, sum = 0, add = 1;
    do {
                  
            cout << "Input |x| < 1: " << endl;           
            cin >> x; 
              
        } while (fabs(x) >= 1);
     
     
    for (i = 0; i <= n; ++i, add = ((i + 1) * pow(x,i)))
        sum += add;

    cout << "Sum=" <<sum << endl;
    return 0;
}