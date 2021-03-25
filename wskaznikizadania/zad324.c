#include <stdio.h>

void zamiana(int*, int*);
int main()
{
    int a,b;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &a, &b);
    zamiana(&a,&b);
    return 0;
}
void zamiana(int *a, int *b)
{
    printf("Przed: a: %d  b: %d \n", *a, *b);
    if(*b < *a)
    {
        int x = *a;
        *a = *b;
        *b = x;
    }
    printf("Po: a: %d  b: %d", *a, *b);
}
