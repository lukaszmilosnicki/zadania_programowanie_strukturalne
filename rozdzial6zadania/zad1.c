#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tablica[26];
    char litera = 'a';
    int licznik = 0;

    while(litera <= 'z')
    {
        tablica[licznik] = litera;
        licznik++;
        litera++;
    }
    for(int i = 0; i < 26; i++){
        printf("%c ", tablica[i]);
    }
    return 0;
}
