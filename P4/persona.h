//librería persona

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona
{
    char nombre[50];
    int edad;
    float estatura;
    float peso;
};

void personavalor(struct persona ejemplo)
{
    printf("\nNombre: %s", ejemplo.nombre);
    printf("\nEdad: %i", ejemplo.edad);
    printf("\nEstatura: %f", ejemplo.estatura);
    printf("\nPeso: %f", ejemplo.peso);
    printf("\n");
}

void personareferencia(struct persona *ejemplo)
{
    printf("\nNombre: %s",ejemplo->nombre);
    printf("\nEdad: %i",ejemplo->edad);
    printf("\nEstatura: %f",ejemplo->estatura);
    printf("\nPeso: %f\n",ejemplo->peso);
}

int persona()
{
    int opcion, ch;
    struct persona ejemplo;
    printf("\Ingrese su Nombre: ");
    while ((ch = getchar()) != '\n' && ch != EOF);
    gets(ejemplo.nombre);
    printf("Edad: ");
    fflush(stdin);
    scanf("%i",&ejemplo.edad);
    printf("\nEstatura: ");
    fflush(stdin);
    scanf("%f",&ejemplo.estatura);
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
            case 1: personavalor(ejemplo);
                system("pause");
                break;
            case 2: personareferencia(&ejemplo);
                system("pause");
                break;
        }

    }while (opcion!=3);
    return 0;
}