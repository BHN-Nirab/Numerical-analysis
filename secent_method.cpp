#include<iostream>
#include<math.h>

#define EPS 1.0e-6

double f(double x)
{
    return x*x*x - x*x + 2;
}

using namespace std;

int main()
{
    double a, b;

    a = -200, b = 300;

    if((f(a) * f(b)) > 0)
    {
        cout << "No root found!" << endl;
    }

    else
    {
        int i = 0;
        while(1)
        {
            double c = b - ( (b-a) / ( f(b) - f(a) ) ) * f(b);

            if((fabs(f(c))) <= EPS)
            {
                cout << "Root is: " << c << endl;
                break;
            }

            a = b;
            b = c;

        }
    }


    return 0;
}
