#include <stdlib.h>
#include <stdio.h>
int main()
{
    int vectorlong=0, j, i, acum;
    printf("Ingrese el tamaño del vector: ");
    scanf("%i", &vectorlong);
    int vec1[vectorlong];
    int vec2[vectorlong];
    for(i=0 ; i<vectorlong ; i++)
    {
        printf("\nEntrada [%i]: ", i);
        scanf("%i", &vec1[i]);
        vec2[i] = vec1[i];
    }
    for(i=0 ; i<vectorlong ; i++)
    {
        for(j=0 ; j<vectorlong ; j++)
        {
            if(i!=j)
            {
                if(vec1[i] == vec2[j])
                {
                    vec1[i] = -5;
                    acum++;
                }
            }
        }
    }
    printf("El vector que ingreso:\t\tEl vector que regreso:\n");
    for(i=0 ; i<vectorlong ; i++)
    {
        printf(" \t\t\t[%i] \t\t\t\t", vec2[i]);
        printf(" [%i] \n", vec1[i]);
    }
    printf("\n\n");
    printf("El programa realizo %i cambios", acum);
    printf("\n\n");
    system("pause");
    return 0;
}