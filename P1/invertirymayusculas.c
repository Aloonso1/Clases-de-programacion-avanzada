#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char palabra[20];

void inv()
{
    for(int i=20 ; i>=0 ; i--)
    {
        if(palabra[i]!='\0')
            printf("%c", palabra[i]);
    }
    printf("\n\n");
}
void retu()
{
    puts(palabra);
}
void mayusculas()
{
    for(int i=0 ; i<20 ; i++)
    {
        printf("%c", toupper(palabra[i]));
    }
    printf("\n\n");
}

int main ()
{
    int opcion=0;
    printf("Magia con cadenas de texto\n");
    printf("Que palabra escoges para la magia ");
    gets(palabra);
    printf("\n\n");
    do
    {
        printf("\nque truco escoges%s?\n", palabra);
        printf("1) Invertir \n2) rRegresar \n3) Invertir mayusculas con minusculas .\n4)Finalizar programa.\n");
        scanf("%i", &opcion);
        printf("\n\n");
        switch (opcion)
        {
            case 1: inv();
                break;
            case 2: retu();
                break;
            case 3: mayusculas();
                break;
        }
    }while(opcion!=4);
    return 0;
}