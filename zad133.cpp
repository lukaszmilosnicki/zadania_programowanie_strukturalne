#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Podaj 3 liczby calkowite: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << "Najwieksza podana liczba to: " << a;
    else if (b > a && b > c)
        cout << "Najwieksza podana liczba to: " << b;
    else if (c > a && c > b)
        cout << "Najwieksza podana liczba to: " << c;
    else if (a==b)
        cout << "Najwieksza podana liczba to: " << a;
    else if (b==c)
        cout << "Najwieksza podana liczba to: " << b;
    else
        cout << "Najwieksza podana liczba to: " << a;
    return 0;
}
