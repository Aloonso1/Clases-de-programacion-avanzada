//librería alumno

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct UdeA
{
    float horas;
    char titulo[20];
    float puno;
    float pdos;
    float promedio;
};
struct alumno
{
    char nombre [50];
    struct UdeA materia [9];
    int lista;
};

int inalumno()
{
    int i, k=0, j, contador,carga, omc=0, stop,ch;
    printf("Ingrese el numero de alumnos: ");
    scanf("%i", &contador);
    int contmat[contador];
    struct alumno lista[contador];
    for(i=0 ; i<contador ; i++)
    {
        system("cls");
        printf("\nIngrese los datos del alumno: ");
        printf("\nNombre: ");
        while ((ch = getchar()) != '\n' && ch != EOF);
        fflush(stdin);
        gets(lista[i].nombre);

        printf("\n");

        printf("\nNumero de lista: ");
        fflush(stdin);
        scanf("%i", &lista[i].lista);

        printf("\n");

        j=0;
        do
        {
            printf("\nNombre del curso [%i]: ", j+1);
            while ((ch = getchar()) != '\n' && ch != EOF);
            fflush(stdin);
            gets(lista[i].materia[j].titulo);

            do
            {
                printf("\nHoras: ");
                scanf("%f", &lista[i].materia[j].horas);
                if(lista[i].materia[j].horas<0)
                {
                    system("cls");
                    printf("Ingrese un numero mayor a cero");
                }
            }while(lista[i].materia[j].horas<0);
            do
            {
                printf("\n1er parcial: ");
                fflush(stdin);
                scanf("%f", &lista[i].materia[j].puno);
                if(lista[i].materia[j].puno<0 || lista[i].materia[j].puno>10)
                {
                    system("cls");
                    printf("Ingrese una calificacion valida");
                }
            }while(lista[i].materia[j].puno<0 || lista[i].materia[j].puno>10 );

            printf("\n");

            do
            {
                printf("\n2do parcial: ");
                fflush(stdin);
                scanf("%f", &lista[i].materia[j].pdos);
                if(lista[i].materia[j].pdos<0 || lista[i].materia[j].pdos>10)
                {
                    system("cls");
                    printf("Ingrese una calificacion valida");
                }
            }while(lista[i].materia[j].pdos<0 || lista[i].materia[j].pdos>10 );

            printf("\n");


            lista[i].materia[j].promedio = (lista[i].materia[j].puno+lista[i].materia[j].pdos)/3;

            printf("\nEvaluar proximo curso?\n1- Sipi\n2-Nop\n ");
            scanf("%i",&stop);
            j++;
            contmat[i] = j;
        }while(stop!=2);
    }
    for(i=0 ; i<contador ; i++)
    {
        system("cls");
        printf("\nAlumno[%i]: %s\n", lista[i].lista, lista[i].nombre);

        printf("\nDesea mostrar las materias del alumno? \n[1] Si\n[2]No\n");
        scanf("%i", &omc);
        if(omc==1)
        {
            printf("Numero de cursos: %i", contmat[i]);
            for(k=0 ; k<contmat[i] ; k++ )
            {
                printf("\nNombre del curso [%i]: %s", k+1, lista[i].materia[k].titulo);

                printf("\n");

                printf("\nHoras totales: %f", lista[i].materia[k].horas);

                printf("\n1er parcial: %f", lista[i].materia[k].puno);

                printf("\n2do parcial: %f", lista[i].materia[k].pdos);


                printf("\nPromedio final: %f", lista[i].materia[k].promedio);
            }
        }
        printf("\n\n\n------------------------------------------------------------------------\n\n\n");
        system("pause");
        printf("\n\n\n------------------------------------------------------------------------\n\n\n");
    }
    printf("\n");
    return 0;
}