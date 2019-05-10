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

    double x,y,z;

    x = y = z = 0.0;

    while(1)
    {
        double x1, y1, z1;

        if( fabs(F1(x, y, z) && F2(x, y, z) && F3(x, y, z)) <= EPS )
        {
            cout << x << ", " << y << ", " << z << endl;
            break;
        }

        x1 = X(y, z);
        y1 = Y(x, z);
        z1 = Z(x, y);

        x = x1;
        y = y1;
        z = z1;


    }


    return 0;
}
