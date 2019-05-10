#include<iostream>
#include<math.h>

#define EPS 1.0e-6

double f(double x)
{
    return x*x*x - x*x + 2;
}

double g(double x)
{
    return cbrt((x*x) - 2);
}

using namespace std;

int main()
{
    double a;

    a = 0.5;

    if(f(a) <= EPS)
    {
        cout << "Root is: " << a << endl;
    }

    else
    {

        while(1)
        {
            if(fabs(g(a) - a) <= EPS)
            {
                cout << "Root is: " << a << endl;
                break;
            }

            else
                a = g(a);

        }
    }


    return 0;
}
