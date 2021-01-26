#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "indocente.h"
#include "inalumno.h"
int main()
{
    int opcion, contprof, contalum;
    printf("Este programa permite ingresar y mostrar a docentes y alumnos.");
    do
    {
        system("cls");
        printf("Que desea hacer?\n");
        printf("1- Info del maestro\n");
        printf("2- Info de alumnos\n");
        printf("3- Salir\n");
        scanf("%i", &opcion);

        switch(opcion)
        {
            case 1:
                indocente();
                break;
            case 2:
                inalumno();
                break;
        }
    }while(opcion!=3);
    system("pause");
    return 0;
}