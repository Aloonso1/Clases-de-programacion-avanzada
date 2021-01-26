#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#include "entero.h"
#include "tamanio.h"

int main()
{
    int opcion;
    struct persona ejemplo;
    do
    {
        system("cls");
        printf("Programa que te permite ingresar enteros o datos personales a una estructura y leerlos por valor o referencia.\n");
        printf("Que desea hacer? \n[1] Ingresar enteros \n[2] Datos personales \n[3] Tamanio \n[4] Salir.\n");
        scanf("%i", &opcion);
        switch(opcion)
        {
            case 1: entero();
                system("pause");
                break;
            case 2: persona();
                system("pause");
                break;
            case 3: tamanio();
                break;
        }

    }while (opcion!=4);


    system("pause");
    return 0;
}