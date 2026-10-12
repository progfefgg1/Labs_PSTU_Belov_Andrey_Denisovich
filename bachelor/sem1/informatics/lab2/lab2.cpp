#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double epsilon = pow(10, -4);
    double sum = 0.0;
    double a;
    int n = 1;

    a = 1 / pow(2, n) + 1 / pow(3, n);

    while (a > epsilon)
    {
        sum += a;
        n++;
        a = 1 / pow(2, n) + 1 / pow(3, n);
    }
    
    cout << "summa: " << sum << "\n";
}