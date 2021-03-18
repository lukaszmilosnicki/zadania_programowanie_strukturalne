#include <stdio.h>

double min(double, double);
int main()
{
    double x = 1.25,y = 2;
    printf("%g i %g - Mniejsza liczba to: %g \n", x, y, min(x, y));
    x = 15.12, y = 15;
    printf("%g i %g - Mniejsza liczba to: %g \n", x, y, min(x, y));
    x = 100, y = 100;
    printf("%g i %g - Mniejsza liczba to: %g \n", x, y, min(x, y));
    return 0;
}
double min(double x, double y)
{
    if(x <= y)
        return x;
    else
        return y;
}
