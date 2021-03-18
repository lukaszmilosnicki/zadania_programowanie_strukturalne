#include <stdio.h>

int potegowanie(int);
int main()
{
    int potega;
    printf("Podaj wykladnik: ");
    scanf("%d", &potega);
    printf("%d", potegowanie(potega));
    return 0;
}
int potegowanie(int potega)
{
    int wynik = 1;
    for(int i = 0; i < potega; i++)
        wynik *= 2;
    return wynik;
}
