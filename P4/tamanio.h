//librería tamanio

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct tema
{
    float creditos;
    char titulo[20];
    float puno;
    float pdos;
    float ptres;
    float promedio;
};
struct estudiante
{
    char nombre [50];
    struct tema materia;
    int lista;
};
int tamanio()
{ int ch;
    struct estudiante lista;
    printf("El tamanio de la estructura estudiante es: %d\n", sizeof(struct estudiante));
    printf("El tamanio de la estructura materia es: %d\n", sizeof(struct tema));
    while ((ch = getchar()) != '\n' && ch != EOF);
    printf("\nNombre: " );
    gets(lista.nombre);
    printf("\nNumero de lista: ");
    scanf("%i", &lista.lista);
    printf("\nNombre de la materia: ");
    while ((ch = getchar()) != '\n' && ch != EOF);
    fflush(stdin);
    gets(lista.materia.titulo);
    printf("\nCreditos: ");
    fflush(stdin);
    scanf("%f", &lista.materia.creditos);
    printf("\n1er Parcial: ");
    fflush(stdin);
    scanf("%f", &lista.materia.puno);
    printf("\n2do Parcial: ");
    fflush(stdin);
    scanf("%f", &lista.materia.pdos);
    printf("\n3er Parcial: ");
    fflush(stdin);
    scanf("%f", &lista.materia.ptres);
    lista.materia.promedio=(lista.materia.puno+lista.materia.pdos+lista.materia.ptres)/3;
    printf("\nTu promedio es: %f", lista.materia.promedio);
    return 0;
}