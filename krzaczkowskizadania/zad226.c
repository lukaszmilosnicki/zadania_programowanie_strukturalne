#include <stdio.h>

int potegowanie(int, int);
int main()
{
    int n,m;
    printf("Podaj podstawe potegi a nastepnie jej wykladnik: ");
    scanf("%d %d", &n, &m);
    printf("%d", potegowanie(n,m));
    return 0;
}
int potegowanie(int n, int m)
{
    int wynik = 1;
    if(n < 0 || m < 0)
        {
            printf("Obie liczby musza byc nieujemne \n");
            return -1;
        }
    if(n == 0 && m == 0)
        {
            printf("Obie liczby musza byc rozne od zera \n");
            return -2;
        }
    for(int i = 1; i <= m; i++)
        wynik *= n;
    return wynik;
}
