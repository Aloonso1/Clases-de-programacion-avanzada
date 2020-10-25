//
// Created by alonso on 14/10/20.
//

#include <stdio.h>

#include <stdlib.h>
 //#include <conio.h>

int variable = 0;

int main() {
  //	Variables
  //  Programa
  int op;
int x=0, y=0, i=0, j=0;
  while (op != 10) {
    printf("\n");
    printf("PRACTICA 1\n");
    printf("1.- Mostrar numeros pares e impares del 1 al n \n");
    printf("2.- Tabla de multiplicar \n");
    printf("3.- Mayor y menors\n");
    printf("4.- Encontrar si es la suma de otro\n");
    printf("5.- Division por restas \n");

    printf("10.- Salir\n");
    printf("Indica la opcion: ");
    scanf("%d", & op);
    switch (op) {
    case 1: {
      printf("Ingrese los numeros a sacar la media");
      printf("Cuantos numeros desea ingresar? \n");
      int temp;
      int d = 0;
      scanf("%d", & d);
      int arreglo[d];
      for (int i = 0; i < d; i++) {
        printf("Ingrese el numero %d/%d= \n", i + 1, d);
        scanf("%d", & arreglo[i]);

      }
      float suma = 0;
      printf(" Los numeros dea cuerdo asu posicion son:\n | ");
      for (i = 0; i < d; i++) {
        printf("%d | ", arreglo[i]);
      }
      //	for(int i=0; i<d; i++){
      //			printf("El valor en la posicion %d es: %d \n\n", i+1, arreglo[i]);
      //	}

      /* Ordenamos los números del vector vNumeros por el método de burbuja */
      for (i = 0; i < (d - 1); i++) {
        for (j = i + 1; j < d; j++) {
          if (arreglo[j] > arreglo[i]) {
            temp = arreglo[j];
            arreglo[j] = arreglo[i];
            arreglo[i] = temp;
          }
        }
      }

      /* Mostramos los números ordenados */
      printf("\n Los numeros de mayor a menor son:\n | ");
      for (i = 0; i < d; i++) {
        printf("%d | ", arreglo[i]);
      }
      break;
    }
    case 2:{
    	
		break;
	}
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 10:
      break;
    }
  }
}
