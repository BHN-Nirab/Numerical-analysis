#include<iostream>
#include<math.h>

#define EPS 1.0e-6

double f(double x)
{
    return x*x*x - x*x + 2;
}

double df(double x)
{
    return 3*x*x - 2*x;
}

using namespace std;

int main()
{
    double a;

    a = -200.0;


    while(1)
    {
        double xnot = a - ( f(a)/df(a) );

        if(fabs(f(xnot))<=EPS)
        {
            cout << "Root is: " << xnot << endl;
            break;
        }

        else
            a = xnot;
    }


    return 0;
}
