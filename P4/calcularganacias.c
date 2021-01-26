#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct productos{
    int precio_costo;
    char codigo[10];
    int precio_venta;
    int cant;
};
typedef struct productos pro;
int main(){
    pro *p;
    p=(pro*)malloc(10*sizeof(pro));
    char b[20];
    int i=0,j;
    int suma=0,a;
    do{
        printf("Producto %i.",i+1);
        printf("\nIntroduce el costo: ");
        scanf("%i",&(p+i)->precio_costo);
        printf("Introduce precio venta: ");
        scanf("%i",&(p+i)->precio_venta);
        printf("Introduzca el codigo del producto: ");
        scanf("%i",&(p+i)->codigo);
        printf("Introduzca la cantidad vendida: ");
        scanf("%i",&(p+i)->cant);
        suma=suma+((p+i)->precio_venta-(p+i)->precio_costo)*(p+i)->cant;
        a=((p+i)->precio_venta-(p+i)->precio_costo)*(p+i)->cant;
        printf("La ganancia del producto es de %i pesos\n",a);
        i++;
    }while(i<10);
    printf("La ganancia total del mes es de %i pesos",suma);
    return 0;
}