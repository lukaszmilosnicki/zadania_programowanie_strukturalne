#include <stdio.h>

int suma(int*, int*);
int main()
{
    int a,b;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &a, &b);
    printf("Suma podanych liczb jest rowna: %d", suma(&a, &b));
    return 0;
}
int suma(int *a, int*b)
{
    return *a + *b;
}
