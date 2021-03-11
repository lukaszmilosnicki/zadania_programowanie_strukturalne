#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dol, gora;
    printf("Podaj granice dolna: ");
    scanf("%d", &dol);
    printf("Podaj granice gorna: ");
    scanf("%d", &gora);
    printf("\n x | x^2 | x^3 \n");

    for(int i = dol; i <= gora; i++)
        printf(" %d | %d | %d\n", i, i*i, i*i*i);

    return 0;
}
