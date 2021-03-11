#include <stdio.h>
#include <stdlib.h>

int main()
{
    char litera;
    printf("Podaj wielka litere: ");
    scanf("%c", &litera);
    int numer = (int)litera - 65;

    for(int i = 65; i <= (int)litera; i++)
    {
        for(int j = 0; j < numer; j++)
            printf(" ");

        int a;
        for(a = 65; a <= (int)litera - numer; a++)
            printf("%c", a);

        numer--;
        a -= 2;
        for(int k = 65; k < i; k++)
        {
            printf("%c", a);
            a -= 1;
        }
        printf("\n");
    }
    return 0;
}
