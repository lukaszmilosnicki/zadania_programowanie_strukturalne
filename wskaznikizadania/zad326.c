#include <stdio.h>

void przepisz(int, int*);
int main()
{
    int n, zmienna;
    int *w = &zmienna;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    przepisz(n, w);
    printf("Przepisana liczba: %d", zmienna);
    return 0;
}
void przepisz(int n, int *w)
{
    *w = n;
    printf("Liczba do przepisania: %d \n",n);
}
