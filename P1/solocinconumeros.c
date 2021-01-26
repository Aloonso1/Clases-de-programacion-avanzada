#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int posiciones[5];
int main ()
{
    printf("Poner 5 numer os enteros.");
    for(int i = 0 ; i < 5 ; i ++)
    {
        printf("\nPosicion %i ", i+1);
        scanf("%i", &posiciones[i]);
    }
    printf("asi pelones:");
    for(int i = 0 ; i < 5 ; i ++)
    {
        printf(" [%i] ", posiciones[i]);
    }
    printf("\naca ya ordenaditos:");
    for(int i = 4 ; i >= 0 ; i --)
    {
        printf(" [%i] ", posiciones[i]);
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
