#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Es para el tiempo
//Funcion de llenado aleatorio
void aleatorios(int *p);
//Algoritmos de Ordenacion
void burbuja(int *p); //arreglo que le estoy mandando
void seleccion(int *p); //Mando la direccion del arreglo
void insercion(int *p);
void quicksort(int *p,int izq,int der); //Mando el arreglo el limite izquierdo, y el derecho 0, 9999
void shell(int *p);

//Impresion de resultados
double segundos,n;
clock_t tiempo_inicio, tiempo_final; //Es una funcion por la biblioteca time.h, sirve para declarar las dos variables contar el time
double seg[5],iteraciones[5]; //Segundo en tardar la funcion
int ao[5] = {1,2,3,4,5}; //Tabla de posiciones

//Iteraciones de Quicksort
double contQS = 0; //iteraciones de quickbutwsky es global porque es recursiva, entonces pude generar errores
int main(){
    int opc;
    int *p,*a; //Es el primer arreglo de 10k y a es el arreglo auuxiliar para ordenar los numeros
    p = (int *)malloc(1000000*sizeof(int)); //Arreglo sin ordenar
    a = (int *)malloc(1000000*sizeof(int)); //Ya arreglado
    aleatorios(p); //Espacio de memoria para 10k numeros funcoon aleat

    //Iteraciones de quicksort
    int t_ini = 0;
    int *Iquick;
    Iquick =  &t_ini;

    do{
        //Reiniciar arreglo
        for(int i=0;i<1000000;i++){ //a ya esta en orden si si usamos un agoritmo, reiniciar el arreglo en desorden.
            *(a+i)=*(p+i);
        }
        printf("Algoritmo para ordenar sus numeros\n1.Burbuja\n2. Seleccion\n3 Insercion\n4. QuickSort\n5. Shell\n6.Imprimir Arreglo en desorden\n7.Mostrar tabla Resultados\n8.Salir\n\n");
        scanf("%d",&opc);
        switch(opc){
            case 1:
                burbuja(a);
                break;
            case 2:
                seleccion(a);
                break;
            case 3:
                insercion(a);
                break;
            case 4:
                segundos = 0;
                n=0;
                tiempo_inicio = clock();
                quicksort(a,0,999999); //Guardo el arreglo en a, y los limites
                tiempo_final = clock();
                segundos = (double)(tiempo_final - tiempo_inicio) / CLOCKS_PER_SEC;
                system("cls");
                for(int s=0;s<1000000;s++){
                    printf("%i\n",*(a+s));
                }
                printf("Tiempo transcurrido: %f segundos\n Numero de iteraciones: %.0f\n", segundos,contQS);
                seg[3] = segundos;
                iteraciones[3] = contQS;
                break;

            case 5:	 system("cls");
                shell(a);
                break;
            case 6:
                for(int s=0;s<1000000;s++){
                    printf("%i\n",*(p+s));
                }
                break;
            case 7:
                system("cls");
                for(int pasada=0;pasada < 5-1; pasada++){ //Vamos a ordenar con Burbuja
                    for(int j=0;j<5-pasada-1;j++){
                        if(seg[j] > seg[j+1]){
                            double aux,aux3;
                            int aux2;
                            aux = seg[j];
                            seg[j] = seg[j+1];
                            seg[j+1] = aux;
                            //Numero de algoritmo de Ordenacion
                            aux2 = ao[j];
                            ao[j] = ao[j+1];
                            ao[j+1] = aux2;
                            //# de iteraciones.
                            aux3 = iteraciones[j];
                            iteraciones[j] = iteraciones[j+1];
                            iteraciones[j+1] = aux3;
                        }
                    }
                }
                FILE * archivo1;
                archivo1=fopen("ProyectoFinal.txt", "a"); //crear archivo o abrirlo
                fputs("Resultados de rendimiento de algorítmos de ordenación\n",archivo1);
                for(int s=0;s<5;s++){
                    printf("Algoritmo de Ordenacion %i = %f segundos con %0.f iteraciones\n",ao[s],seg[s],iteraciones[s]);
                    fprintf(archivo1,"Algoritmo de Ordenacion %i = %f segundos con %0.f iteraciones\n", ao[s],seg[s],iteraciones[s]);
                }
                fclose(archivo1);
                break;
        }
    }while(opc != 8);
    free(p);
    free(a);
    system("PAUSE");
}

void aleatorios(int *p){
    srand(time(NULL)); //Random es funcion
    for(int i=0;i<1000000;i++){
        *(p+i) = 1 + rand() % ((1000000+1)-1); //Crear 10k randoms y guardar en el espacio de memoria
    }
}

void burbuja(int *p){
    system("cls");
    n=0; //Contar las iteraciones es global
    segundos = 0; //Tiempo  double
    tiempo_inicio = clock(); //inicia a contar
    for(int pasada=0;pasada < 1000000-1; pasada++){
        for(int j=0;j<1000000-pasada-1;j++){
            n++;
            if(*(p+j) > *(p+j+1)){
                int aux;
                aux = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = aux;

            }
        }
    }
    //ALGORITMO BURBUJAAAAAAAA arriba
    tiempo_final = clock(); //Para reloj
    segundos = (double)(tiempo_final - tiempo_inicio) / CLOCKS_PER_SEC; //Agarra el tiempo de la computadora
    for(int s=0;s<1000000;s++){
        printf("%i\n",*(p+s)); //Imprime el arreglo ordenado
    }
    printf("Tiempo transcurrido: %f segundos\n Numero de iteraciones: %.0f\n", segundos,n);
    seg[0] = segundos;
    iteraciones[0] = n;
}


void seleccion(int *p){
    system("cls");
    int indicemenor; //Parte de seleccion
    n=0; //iteraciones
    segundos = 0; //tiempo
    tiempo_inicio = clock(); //incia time

    for(int i=0; i<1000000-1;i++){
        indicemenor = i;
        for(int j = i+1;j<=1000000;j++){
            n++;
            if(*(p+j) <= *(p+indicemenor)){
                indicemenor = j;
            }
        }
        int aux = *(p+i);
        *(p+i) = *(p+indicemenor);
        *(p+indicemenor) = aux;
    }
    //SLEECICCIONNNN
    tiempo_final = clock();
    segundos = (double)(tiempo_final - tiempo_inicio) / CLOCKS_PER_SEC;
    for(int s=0;s<1000000;s++){
        printf("%i\n",*(p+s)); //Imprimir todo arreglado
    }
    printf("Tiempo transcurrido: %f segundos\n Numero de iteraciones: %.0f\n", segundos,n);
    seg[1] = segundos;
    iteraciones[1] = n;//Es global
}

void insercion(int *p){
    system("cls");
    int posicion,aux; //Parte de insecion
    n=0;
    segundos = 0;
    tiempo_inicio = clock();
    for(int i=0;i<1000000;i++){
        posicion = i;
        aux = *(p+i);
        while((posicion>0) && (aux <= *(p +(posicion-1)))){
            *(p+posicion) = *(p+(posicion-1));
            posicion--;
            n++;
        }
        *(p + posicion) = aux;
    }
    //INSERCIOOOOOOOOOOOOOOOOOON
    tiempo_final = clock();
    segundos = (double)(tiempo_final - tiempo_inicio) / CLOCKS_PER_SEC;
    for(int s=0;s<1000000;s++)
    {
        printf("%i\n",*(p+s));
    }
    printf("Tiempo transcurrido: %f segundos\nNumero de iteraciones: %.0f\n", segundos,n);
    seg[2] = segundos;
    iteraciones[2] = n;
}

void quicksort(int *p,int izq,int der){
    int pivote = p[izq];
    int i = izq;
    int j = der;
    int aux;
    //Contar Iteraciones
    contQS++;
    //
    while (i < j) {
        while (p[i] <= pivote && i < j) i++;
        while (p[j] > pivote) j--;
        if (i < j){
            aux  = p[i];
            p[i] = p[j];
            p[j] = aux;
        }
    }
    p[izq] = p[j];
    p[j] = pivote;
    if(izq<j - 1){
        quicksort(p, izq, j - 1);
    }
    if(j + 1 <der){
        quicksort(p, j + 1, der);
    }
}

void shell(int *p){
    int i=1000000, j, aux;
    int comp = 0;
    segundos = 0;
    n=0;
    tiempo_inicio = clock();
    while(i > 1){
        i = (i / 2);
        comp = 1;
        while(comp == 1){
            comp = 0;
            j=0;
            while((j+i) <= 1000000){
                if(*(p+j) > *(p+(i+j))){
                    aux = *(p+j);
                    *(p+j) =  *(p+(i+j));
                    *(p+(i+j)) = aux;
                    n++;
                    comp = 1;
                }
                j++;
            }
        }
    }
    tiempo_final = clock();
    segundos = (double)(tiempo_final - tiempo_inicio) / CLOCKS_PER_SEC;
    for(int s=0;s<1000000;s++){
        printf("%i\n",*(p+s));
    }
    printf("Tiempo transcurrido: %f segundos\nNumero de iteraciones: %.0f\n", segundos,n);
    seg[4] = segundos;
    iteraciones[4] = n;
}
