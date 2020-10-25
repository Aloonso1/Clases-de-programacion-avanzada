//
// Created by alonso on 25/10/20.
//

#include <stdio.h>

#include <stdlib.h>


int variable = 0;

int main() {
  //	Variables
  //  Programa
  int op;
  // Ejercicios
  int x = 0, y = 0, i = 0, j = 0;
  while (op != 10) {
    printf("\n");
    printf("\n");
    printf("PRACTICA 1\n");
    printf("1.- Ordenamiento descendiente \n");
    printf("2.- Tabla de multiplicar \n");
    printf("3.- Mayor y menors\n");
    printf("4.- Encontrar si es la suma de otro\n");
    printf("5.- Division por restas \n");

    printf("10.- Salir\n");
    printf("Indica la opcion: ");
    scanf("%d", & op);
    switch (op) {
    case 1: {
    
      printf("Cuantos numeros desea ingresar? \n");
      int temp;
      int d = 0;
      scanf("%d", & d);
      int arreglo[d];
      for (int i = 0; i < d; i++) {
        printf("Ingrese el numero %d/%d= \n", i + 1, d);
        scanf("%d", & arreglo[i]);

      }

      printf(" Los numeros dea cuerdo asu posicion son:\n | ");
      for (i = 0; i < d; i++) {
        printf("%d | ", arreglo[i]);
      }


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
    case 2: {
      int acumulador, contador, primermulti, segunmulti;
      printf("Primer numero \n ");
      scanf("%d", & segunmulti);
      printf("Segundo numero \n ");
      scanf("%d", & primermulti);
      if (primermulti >= 0 && segunmulti >= 0) {
        acumulador = 0;

        if (segunmulti != 0) {
          contador = 1;
          while (contador <= primermulti) {
            acumulador += segunmulti;
            contador++;
            printf("\n    %d * %d = %d", segunmulti, (contador-1), acumulador);
          }
        }

      } else
        printf("No estan contemplados los negativos.");
      break;
    }
    break;
    case 3: {

      printf("Cuantos numeros desea ingresar? \n");
      int temp;
      int d = 0;
      scanf("%d", & d);
      int arreglo[d];
      for (int i = 0; i < d; i++) {
        printf("Ingrese el numero %d/%d= \n", i + 1, d);
        scanf("%d", & arreglo[i]);

      }



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
      printf("\n El numero mayor es:\n | ");

      printf("%d | ", arreglo[0]);
      printf("\n El numero menor es:\n | ");

      printf("%d | ", arreglo[(d - 1)]);
      break;

    }
    break;
    case 4:{
      int primer, segundo, tercero;
      printf("Primer numero \n ");
      scanf("%d", & primer);
      printf("Segundo numero \n ");
      scanf("%d", & segundo);
      printf("Tercero numero \n ");
      scanf("%d", & tercero);
      if((primer== segundo+tercero)|(segundo==primer+tercero)|(tercero==primer+segundo )){
      	printf( "Un numero es la suma de los otros dos");
	  }else
	  printf( "No es la suma de ninguno");
		break;
	}
      break;
    case 5:{
    	 int cociente, dividendo, divisor, resto;
		printf( "Primer numero \n " );
                scanf( "%d", &dividendo );
                printf( "Segundo numero \n " );
                scanf( "%d", &divisor );

                if ( dividendo > 0 && divisor > 0 )
                {
                    cociente = 0;
                    resto = dividendo;

                    while ( resto >= divisor )
                    {
                        resto -= divisor;
                        cociente++;
                        printf( "\n    %d",  resto );
                    }

                    printf( "\n   %d div %d = %d ( Residuo = %d )", dividendo, divisor, cociente, resto );
                }
                else
                    printf( "No estan contemplados los negativos.");
                break;
	}
      break;

    case 10:
      break;
    }
  }
}
