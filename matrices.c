//
// Created by alonso on 14/10/20.
//

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int variable=0;

void main()
{
//	Variables
//  Programa
    int op;
//  Ejercicio 1
    int impar;
    int pares = 0;
//	Ejercicio 1
    int numero;
    long long Resultado=0;
    long int Factorial;
//  Ejercicio 3
    int n1, n2, n3;
//  Ejercicio 4
    int acumulador, contador, primermulti, segunmulti;
//  Ejercicio 5
    int cociente, dividendo, divisor, resto;
//	Ejercicio 6
    int var_for=0;
//  Ejercicio 7
    // Declaración de variables a utilizar
    int i;
    int filas;
    int columnas;
    int j;
// Ejercicio 8
    int tamanio, valor, a, b;
    while(op!=10)
    {
        printf("\n");
        printf("1.- Mostrar numeros pares e impares del 1 al n \n");
        printf("2.- obtner numero factorial menor a 16 \n");
        printf("3.- Determinar de 3 numeros cual es el mayor y el menor d ellos\n");
        printf("4.- Realizar la multiplicacion mediante el metodo de sumas\n");
        printf("5.- Realizar division mediante el metodo de restas \n");
        printf("6.- Imprimir del uno al 10 \n");
        printf("7.- Triangulo de asteriscos en c \n");
        printf("8.- Suma de matrices \n");
        printf("10.- Salir\n");
        printf("Indica la opcion: ");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                printf("Obtener pares e impares \n");
                scanf(" %ld", &impar);
                for ( numero = 1 ; numero <= impar ; numero += 2 )
                {
                    printf( "%ld , ", numero );
                }
                for ( numero =2 ; numero <= impar ; numero += 2 )
                {
                    pares++;
                }
                printf( "\n   El numero %d tiene %d numeros pares", impar, pares );
                pares =0;
                break;
            case 2:
                // Solicitar numero para calcular el factorial
                printf("Numero para calcular el factorial \n");
                scanf(" %ld", &Factorial);
                // Calcular el factorial del numero solicitado
                Resultado = 1;
                while(Factorial > 1) {
                    Resultado *= Factorial;
                    printf(" %ld x",Factorial);
                    Factorial--;
                }
                printf(" 1 = %ld\n\n",Resultado);
                break;
            case 3:
                printf( "Primer numero \n " );
                scanf( "%d", &n1 );
                printf( "Segundo numero \n");
                scanf( "%d", &n2 );
                printf( "Tercer numero \n");
                scanf( "%d", &n3 );
                if ( n1 >= n2 && n1 >= n3 )
                    printf( "\n   %d es el mayor.", n1 );
                else

                if ( n2 > n3 )
                    printf( "\n   %d es el mayor.", n2 );
                else
                    printf( "\n   %d es el mayor.", n3 );
                if ( n1 <= n2 && n1 <= n3 )
                    printf( "\n   %d es el menor.", n1 );
                else

                if ( n2 < n3 )
                    printf( "\n   %d es el menor.", n2 );
                else
                    printf( "\n   %d es el menor.", n3 );
                break;
            case 4:
                printf( "Primer numero \n ");
                scanf( "%d", &primermulti );
                printf( "Segundo numero \n " );
                scanf( "%d", &segunmulti );
                if ( primermulti >= 0 && segunmulti >= 0 )
                {
                    acumulador = 0;

                    if ( segunmulti != 0 )
                    {
                        contador = 1;
                        while ( contador <= primermulti )
                        {
                            acumulador += segunmulti;
                            contador++;
                            printf( "\n    %d",  acumulador );
                        }
                    }

                    printf( "\n   %d * %d = %d", primermulti, segunmulti, acumulador );

                }
                else
                    printf( "No estan contemplados los negativos.");
                break;
            case 5:
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
            case 6:

                for( var_for = 0; var_for<10; var_for++){
                    printf("numero: %d\n", var_for);
                }
                break;
            case 7:
                // Solicitud del numero de filas a visualizar
                printf("No. de Filas : ");
                scanf(" %d",&filas);
                // Visualizar piramide
                if ( filas > 0 )
                {
                    columnas=filas*2;
                    for(i=1;i<=columnas;i+=2) {
                        printf("%*c",((columnas-(i))/2)+1,'*');
                        for(j=1;j<i;j++) {
                            printf("*");
                        }
                        printf("\n");
                    }
                }
                else
                    printf( "No estan contemplados los negativos.");

                break;
            case 8: {
                printf("Ingrese el tamaño de las matrices\n");
                scanf("%d", &tamanio);
                int mat1[tamanio][tamanio];
                int mat2[tamanio][tamanio];

                printf("Ingrese la matriz A \n");
                // Leer a
                for(a=0; a<tamanio; a++){
                    for(b=0; b<tamanio; b++){
                        printf("Ingrese la posicion[a=%d][b=%d]=: ",a,b);
                        scanf("%d",& valor);
                        mat1[a][b]=valor;
                    }
                }
                // Imprimir a
                for(a=0; a<tamanio; a++){
                    for(b=0; b<tamanio; b++){
                        if(b==tamanio-1){
                            printf("\t%i\n",mat1[a][b]);
                        }else printf("\t%i",mat1[a][b]);

                    }
                }
                // Leer b
                for(a=0; a<tamanio; a++){
                    for(b=0; b<tamanio; b++){
                        printf("Ingrese la posicion[a=%d][b=%d]=: ",a,b);
                        scanf("%d",& valor);
                        mat2[a][b]=valor;
                    }
                }
                // Imprimir b
                for(a=0; a<tamanio; a++){
                    for(b=0; b<tamanio; b++){
                        if(b==tamanio-1){
                            printf("\t%i\n",mat2[a][b]);
                        }else printf("\t%i",mat2[a][b]);

                    }
                }
                //DECLARAMOS LA MATRIZ RESULTADO
                int matres[tamanio][tamanio];
                for(a=0; a<tamanio; a++){
                    for(b=0; b<tamanio; b++){
                        matres[a][b]=mat1[a][b]+mat2[a][b];
                    }
                }
                printf("La matriz resultado es: \n");

                for(a=0; a<tamanio; a++){
                    for(b=0; b<tamanio; b++){
                        if(b==tamanio-1){
                            printf("\t%i\n",matres[a][b]);
                        }else{
                            printf("\t%i",matres[a][b]);
                        }
                    }
                }


            }
                break;
            case 10: break;
        }
    }
}
