#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Funcion de llenado aleatorio
void aleatorios(int *p);
//Algoritmos de Ordenacion
void burbuja(int *p);
void seleccion(int *p);
int main(){
    int opc;
    int *p,*a;
    p=(int *)malloc(10*sizeof(int));
    a=(int *)malloc(10*sizeof(int));
    aleatorios(p);
    do{
        for(int i=0;i<10;i++){
            a=p;
        }
        printf("\n¿Por que algorítmo de ordenación desea ordenar sus numeros?\n1.Burbuja\n2. Selección\n3.Imprimir arreglo en desorden\n4.Salir\n\n");
        scanf("%d",&opc);
        switch(opc){
            case 1:
                burbuja(a);
                break;
            case 2:
                seleccion(a);
                break;
            case 3:
                for(int s=0;s<10;s++){
                    printf("%i\n",*(p+s));
                }
                break;
            case 4:
                opc =4;
                break;
        }
    }while(opc != 4);
    free(p);
    free(a);
    system("PAUSE");
}
void aleatorios(int *p){
    srand(time(NULL));
    for(int i=0;i<10;i++){
        *(p+i) = 1 + rand() % ((10+1)-1);
    }
    for(int i=0;i<10;i++){
        printf("%i\t",*(p+i));
    }
}
void burbuja(int *p){
    system("cls");
    for(int pasada=0;pasada < 10-1; pasada++){
        for(int j=0;j<10-pasada-1;j++){
            if(*(p+j) > *(p+j+1)){
                int aux;
                aux = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = aux;
            }
        }
    }
    for(int s=0;s<10;s++){
        printf("%i\n",*(p+s));
    }
}


void seleccion(int *p){
    system("cls");
    int indicemenor;
    for(int i=0; i<10-1;i++){
        indicemenor = i;
        for(int j = i+1;j<=10;j++){
            if(*(p+j) <= *(p+indicemenor)){
                indicemenor = j;
            }
        }
        int aux = *(p+i);
        *(p+i) = *(p+indicemenor);
        *(p+indicemenor) = aux;
    }
    for(int s=0;s<10;s++){
        printf("%i\n",*(p+s));
    }
}