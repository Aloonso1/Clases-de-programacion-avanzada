#include<stdio.h>
#include<stdlib.h>
int main(){
	int x=0, y=0, i=0;
//Primero
	float sueldo=0, horas=0, impuesto=0, res=0;
	printf("Ingrese su sueldo\n");
	scanf("%f",& sueldo);
	printf("Ingrese sus horas trabajadas\n");
	scanf("%f",& horas);
	printf("Ingrese el impuesto en decimales\n");
	scanf("%f",& impuesto);
	res=sueldo*horas-sueldo*horas*impuesto;
	printf("Total a pagar: %f\n",res);

// Segundo
	printf("Ingrese el numero a sumar desde 1 hasta x \n");
	scanf("%d",&x);
	for(int i=1; i<=x; i++){
		y=y+i;
		printf("%d\n",y);
	}
//Tercero	
	x=0;
	printf("Ingrese el numero para saber si es par o impar \n");
	scanf("%d",&x);
	if(x%2!=0){
		printf("El numero es impar \n");
	}else{
		printf("El numero es par \n");
	}
	
	
	x=0;
	printf("Ingrese el numero par para saber la sumas de sus pares anteriores \n");
	scanf("%i",& x);
	for(i=0; i<=x; i=i+2){
		y=y+i;
		printf("%d\n",y);
	}

//Cuarto
	x=0;
	y=1;
	printf("Ingrese el numero para saber su factorial \n");
	scanf("%i",& x);
	for(i=1; i<=x; i++){
		y=y*i;
		printf("%d\n", y);
	}
	
//Quito
	int dato=0, contador=0;
	float suma=0, media=0;
	do{
		printf("Ingrese los numeros, 0 para finalizar\n");
		scanf("%d",&dato);
		if(dato>0){
			suma=dato+suma;
			contador++;
		}else{
			printf("Ingresaste un negativo y no se contara \n");
		}
	}while(dato!=0);
		printf("Suma es: %.0f\n",suma);
		media=suma/(contador);
		printf("La media es: %.2f",media);
return 0;
}
