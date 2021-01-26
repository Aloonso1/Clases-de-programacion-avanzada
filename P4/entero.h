//librería entero

#include <stdio.h>
#include <stdlib.h>

struct numeros
{
    int edad;
    float estatura;
    int numfav;
    float peso;
};

void enterovalor(struct numeros ejemplo)
{
    printf("\nEdad: %i",ejemplo.edad);
    printf("\nEstatura: %f",ejemplo.estatura);
    printf("\nNumero favorito: %i",ejemplo.numfav);
    printf("\nPeso: %f",ejemplo.peso);
    printf("\n");
}

void enteroreferencia(struct numeros *ejemplo)
{
    printf("\nEdad: %i",ejemplo->edad);
    printf("\nEstatura: %f",ejemplo->estatura);
    printf("\nNumero favorito: %i",ejemplo->numfav);
    printf("\nPeso: %f\n",ejemplo->peso);
}

int entero()
{
    int opcion;
    struct numeros ejemplo;
    printf("Ingrese su edad: ");
    fflush(stdin);
    scanf("%i",&ejemplo.edad);
    printf("\nEstatura: ");
    fflush(stdin);
    scanf("%f",&ejemplo.estatura);
    printf("\nNumero Favorito: ");
    fflush(stdin);
    scanf("%i",&ejemplo.numfav);
    printf("\nPeso: ");
    fflush(stdin);
    scanf("%f",&ejemplo.peso);
    do
    {
        system("cls");
        printf("Los resultados deben ser arrojados por: \n[1] Valor \n[2] Referencia \n[3]Salir.\n");
        scanf("%i", &opcion);
        switch(opcion)
        {
            case 1: enterovalor(ejemplo);
                system("pause");
                break;
            case 2: enteroreferencia(&ejemplo);
                system("pause");
                break;
        }

    }while (opcion!=3);
    return 0;
}