#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const double pi = acos(-1.0);
    const double e = exp(1.0);
    int n = 25;
    const double epsilon = 0.0001;

    for (double x = 0.1; x <= 1; x += 0.09)
    {
        double term = 1.0;
        double SN = 1.0;
        double SE = 1.0;
        double An = 1.0;
        double Y;
        Y = pow(e, x * cos(pi / 4)) * cos(x * sin(pi / 4));

        for (int i = 1; i <= n; i++)
        {`
            term *= x / i;
            SN += cos(i * pi / 4.0) * term;
        }

        term = 1.0;
        
        for (int i = 1; An > epsilon; i++)
        {
            term *= x / i;
            SE += cos(i * pi / 4.0) * term;
            An = cos(i * pi / 4.0) * term;
        }
        
        cout << "X:" << x << " SN=" << SN << " SE=" << SE << " Y=" << Y << endl;
    }

    return 0; 
}