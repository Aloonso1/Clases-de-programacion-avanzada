#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

void lectura(int *vector, int n)
{
    for(int i=0; i<n ; i++)
    {
        printf(" [%i] ", *(vector+i));
    }
}
void llenado(int *vector, int tam)
{
    srand (time(NULL));
    for(int i=0; i<tam ; i++)
    {
        *(vector+i)= rand() % 11;
    }
}

int main()
{
    int largo=0, opcion;
    printf("Introduzca el largo del vector: ");
    scanf("%i", &largo);
    int *vector;
    vector = (int*)malloc(largo*sizeof(int));
    if(vector == NULL)
    {
        printf("No se ha podido reservar espacio de memoria");
    }
    else
    {
        do
        {
            llenado(vector, largo);
            printf("Su nuevo vector ha sido creado, quiere verlo?\n[1] Si\n[2]No\n");
            scanf("%i", &opcion);
            printf("\n");
            switch (opcion)
            {
                case 1: lectura(vector, largo);
                    system ("pause");
            }

        }while (opcion!=2);

    }



    system("pause");
    return 0;
}