#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
void nual()
{
    srand(time(NULL));
    int aleatorio = rand()%20;
    printf("Toma tu: %i\n\n", aleatorio+1);
}
int main() {
    int opcion = 0;
    do {
        printf("El numero del al 20 es:\n1 Lo acepto\n 2 Lo rechazo\n");
        scanf("%i", &opcion);
        //system("cls");
        switch (opcion) {
            case 1:
                nual();
                break;
        }
    } while (opcion != 2);
    system("pause");

    return 0;}