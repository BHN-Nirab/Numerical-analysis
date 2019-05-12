#include<iostream>
#include<math.h>

#define EPS 1.0e-6

double f(double x)
{
    return  x*x + 3.0;
}

double g(double x)
{
    return  12.0 - x*x;
}

double p(double x)
{
    return 9.0 - 2.0*x*x;
}

using namespace std;

int main()
{
    double a,b;
    double root;

    a = 0.0, b = 2.5;

    if((p(a) * p(b)) > 0)
        cout << "No root found!" << endl;

    else
    {

        while(1)
        {
            double xnot = (a+b)/2.0;

            if(fabs(p(xnot))<=EPS)
            {
                root = xnot;
                break;
            }

            else if((p(a) * p(xnot)) < 0)
                b = xnot;

            else
                a = xnot;
        }

    }

    int n = 1000;
    a = 0, b = root;

    double h = (b-a)/(n-1);

    double x1[n],f1[n],g1[n];

    for(int i=0; i<n; i++)
    {
        x1[i] = a + i*h;
        f1[i] = f(x1[i]);
        g1[i] = g(x1[i]);
    }

    double odd1 = 0, even1 = 0;
    double odd2 = 0, even2 = 0;

    for(int i=1; i<n-1; i++)
    {
        if( (i%2)==0 )
        {
            odd1 = odd1+ 4*f1[i];
            odd2 = odd2+ 4*g1[i];
        }

        else
        {
            even1 = even1 + 2*f1[i];
            even2 = even2 + 2*g1[i];
        }

    }

    double area1 = h/3.0 * ( f1[0] + odd1 + even1 + f1[n-1] );
    double area2 = h/3.0 * ( g1[0] + odd2+ even2 + g1[n-1] );

    cout << fabs(area2 - area1) << endl;
    cout << "Root is: " << root << endl;



    return 0;
}
