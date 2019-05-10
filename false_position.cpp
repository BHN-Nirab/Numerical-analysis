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
    double a,b;

    a = -200.0, b = 300;

    if((f(a) * f(b)) > 0)
        cout << "No root found!" << endl;

    else
    {

        while(1)
        {
            double xnot = ( a*f(b) - b*f(a) ) / ( f(b) - (f(a)));

            if(fabs(f(xnot))<=EPS)
            {
                cout << "Root is: " << xnot << endl;
                break;
            }

            else if((f(a) * f(xnot)) < 0)
                b = xnot;

            else
                a = xnot;
        }

    }

    return 0;
}

