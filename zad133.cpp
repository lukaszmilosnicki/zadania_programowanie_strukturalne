#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Podaj 3 liczby calkowite: ";
    cin >> a >> b >> c;
    if (a > b)
        if (a > c)
            cout << "Najwieksza podana liczba to: " << a << endl;
        else
            cout << "Najwieksza podana liczba to: " << c << endl;
    else
        if (b > c)
            cout << "Najwieksza podana liczba to: " << b << endl;
        else
            cout << "Najwieksza podana liczba to: " << c << endl;
    return 0;
}
