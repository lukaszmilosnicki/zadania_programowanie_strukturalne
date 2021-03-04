#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    cout << "Podaj wspolczynniki rownania kwadratowego." << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if(a == 0)
    {
        cout << "Nie jest to rownanie kwadratowe.";
        return 0;
    }
    double delta = (b*b - 4*a*c);
    double sqrtdelta = sqrt(delta);
    if(delta < 0)
    {
        cout << "Rownanie nie ma rozwiazan rzeczywistych.";
        return 0;
    }
    if(delta == 0)
    {
        double pierwiastek = -b/(2*a);
        cout << "Rownanie ma jedno rozwiazanie rowne: " << pierwiastek;
        return 0;
    }
    if(delta > 0)
    {
        double pierwiastek1 = (-b - sqrtdelta)/(2*a);
        double pierwiastek2 = (-b + sqrtdelta)/(2*a);
        cout << "Rownanie ma dwa rozwiazania rzeczywiste rowne: " << pierwiastek1 << " i " << pierwiastek2;
        return 0;
    }
    return 0;
}
