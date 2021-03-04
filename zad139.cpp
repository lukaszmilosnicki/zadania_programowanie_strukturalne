#include <iostream>
using namespace std;

int main()
{
    double a,b,wynik;
    char znak;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj znak dzialania: ";
    cin >> znak;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    if(znak=='+')
    {
        wynik = a + b;
        cout << a << " + " << b << " = " << wynik;
    }
    else if(znak=='-')
    {
        wynik = a - b;
        cout << a << " - " << b << " = " << wynik;
    }
    else if(znak=='*')
    {
        wynik = a * b;
        cout << a << " * " << b << " = " << wynik;
    }
    else if(znak=='/' && b!=0)
    {
        wynik = a / b;
        cout << a << " / " << b << " = " << wynik;
    }
    else
        cout << "Nie mozna dzielic przez 0";
    return 0;
}
