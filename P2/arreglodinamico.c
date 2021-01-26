#include <stdlib.h>
#include <stdio.h>
void orden(int arreglo[], int largo)
{
    int comp = largo;
    int i, j, aux;
    if(comp != 0)
    {
        for(i=0; i<largo ; i++)
        {
            for(j=0; j<largo-1 ; j++)
            {
                if(arreglo[j]>arreglo[j+1])
                {
                    aux = arreglo[j];
                    arreglo[j] = arreglo[j+1];
                    arreglo[j+1] = aux;
                }
            }
        }
        comp--;
    }
    else
    {
        orden(arreglo, largo);
    }
}

int main()
{
    int largo=0, i;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%i", &largo);
    int arreglo[largo];
    for(i=0 ; i<largo ; i++)
    {
        printf("\nEntrada [%i]: ", i);
        scanf("%i", &arreglo[i]);
    }
    orden(arreglo, largo);
    for(i=0 ; i<largo ; i++)
    {
        printf(" [%i] ", arreglo[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}