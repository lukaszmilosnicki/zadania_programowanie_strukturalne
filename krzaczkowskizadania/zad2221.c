#include <stdio.h>
#include <stdlib.h>

int ciag(int);
int main()
{
    int n;
    printf("Podaj indeks elementu ciagu: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Indeks musi byc nieujemny \n");
        return -1;
    }
    printf("%d", ciag(n));
    return 0;
}
int ciag(int n)
{
    if(n == 0)
        return 1;
    return (2 * (ciag(n - 1)) + 5);
}
