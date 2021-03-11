#include <stdio.h>
#include <stdlib.h>

int main()
{
    char litera = 'F';
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", litera);
            litera--;
        }
        printf("\n");
        litera = 'F';
    }
    return 0;
}
