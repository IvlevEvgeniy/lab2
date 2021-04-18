#include <iostream>
#include <stdio.h>
#include <math.h>
#define n 3
using namespace std;
double getValue()
{
    while (true) 
    {
        cout << "Input |x| < 1: ";
        double x;
        cin >> x;

        if (cin.fail() or (fabs(x) >= 1))
        {
            cin.clear(); 
            cin.ignore(32767, '\n'); 
        }
        else
            return x;
    }
}

int main()
{
    int i;
    double x, sum = 0, add = 1;
    
   x = getValue();

    for (i = 0; i <= n; ++i, add = ((i + 1) * pow(x, i)))
        sum += add;

    cout << "Sum=" << sum << endl;
    return 0;
}
