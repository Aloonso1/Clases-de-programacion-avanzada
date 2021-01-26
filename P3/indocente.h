// librería docente

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct UA
{
    float creditos;
    char titulo[20];
};

struct docente
{
    char nombre [50];
    char color[20];
    int Boleta;
    float sueldo;
    struct UA materia [10];
};

int indocente()
{
    int i, k=0, j, contador,carga, omc=0, stop, ch;
    printf("Ingrese el numero de maestros: ");
    scanf("%i", &contador);
    int contmat[contador];
    struct docente lista[contador];
    for(i=0 ; i<contador ; i++)
    {
        system("cls");
        printf("\nDatos del maistro: ");
        printf("\nNombre: ");
        while ((ch = getchar()) != '\n' && ch != EOF);
        fflush(stdin);
        gets(lista[i].nombre);

        printf("\n");

        printf("\Color favorito: ");
        while ((ch = getchar()) != '\n' && ch != EOF);
        fflush(stdin);
        gets(lista[i].color);

        printf("\n");

        printf("\Boleta: ");
        fflush(stdin);
        scanf("%i", &lista[i].Boleta);

        printf("\n");

        printf("\Sueldo: ");
        fflush(stdin);
        scanf("%f", &lista[i].sueldo);

        printf("\n");
        j=0;
        do
        {
            printf("\nNombre de la materia [%i]: ", j+1);
            while ((ch = getchar()) != '\n' && ch != EOF);
            fflush(stdin);
            gets(lista[i].materia[j].titulo);

            printf("\nHoras: ");
            scanf("%f", &lista[i].materia[j].creditos);

            printf("\n¿Evaluar rpoximo curso?\n1- Si\n2 - No\n ");
            scanf("%i",&stop);
            j++;
            contmat[i] = j;
        }while(stop!=2);
    }

    for(i=0 ; i<contador ; i++)
    {
        system("cls");
        printf("\nDocente[%i]: %s\n", lista[i].Boleta, lista[i].nombre);

        printf("\ncolor: %s\n", lista[i].color);

        printf("\nSueldo: %f\n", lista[i].sueldo);

        printf("\nDesea mostrar las materias del docente? \n[1] Si\n[2]No\n");
        scanf("%i", &omc);
        if(omc==1)
        {
            printf("Numero de asignaturas: %i", contmat[i]);
            for(k=0 ; k<contmat[i] ; k++ )
            {
                printf("\nNombre de la asignatura [%i]: %s", k+1, lista[i].materia[k].titulo);

                printf("\n");

                printf("\nCreditos totales: %f", lista[i].materia[k].creditos);
            }
        }
        printf("\n\n\n------------------------------------------------------------------------\n\n\n");
        system("pause");
        printf("\n\n\n------------------------------------------------------------------------\n\n\n");
    }
    printf("\n");
    system("pause");
    return 0;
}