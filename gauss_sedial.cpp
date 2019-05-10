
#include<iostream>
#include<math.h>

#define EPS 1.0e-6

using namespace std;

double F1(double x, double y, double z)
{
        return 15*x + 3*y - 2*z - 85;
}

double F2(double x, double y, double z)
{
    return 2*x + 10*y + z - 51;
}

double F3(double x, double y, double z)
{
    return x - 2*y + 8*z - 5;
}


double X(double y, double z)
{
    return (85 - 3*y + 2*z)/15;
}

double Y(double x, double z)
{
    return (51 - 2*x - z)/10;
}

double Z(double x, double y)
{
    return (5 - x + 2*y)/8;
}


int main()
{

    double x1, y1, z1;

    x1 = y1 = z1 = 0.0;

    while(1)
    {

        if( fabs(F1(x1, y1, z1) && F2(x1, y1, z1) && F3(x1, y1, z1)) <= EPS )
        {
            cout << x1 << ", " << y1 << ", " << z1 << endl;
            break;
        }

        x1 = X(y1, z1);
        y1 = Y(x1, z1);
        z1 = Z(x1, y1);

    }


    return 0;
}
