#include <iostream>
using namespace std;

int main()
{
    int n,wynik;
    cout << "Podaj nieujemna liczbe calkowita: ";
    cin >> n;
    if(n<0)
    {
        cout << "Podana liczbe jest ujemna";
        return 0;
    }
    for(int i=0;i<=n;i++)
        wynik += i*i;
    cout << "Wynik = " << wynik;
    return 0;
}
