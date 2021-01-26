#include<stdio.h>
#include<string.h>

int main() {
    char frase[60],rep[100],etereo[100];
    char pal;
    int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=5;
    int repetido=0,gano=0;

    printf("\tNo tan ahorcado como yo con estos programasn");
    printf("¿Con que palabra le juegas? ");
    gets(frase);

    system("cls");

    longitud = 0;
    inicial = 0;
    j = 0;

    rep[0] = ' ';
    rep[1] = '\0';


    do {
        system("cls");
        temp=0;

        if(inicial == 0) {
            for(i=0;i<strlen(frase);i++) {
                if(frase[i] == ' ') {
                    etereo[i] = ' ';
                    longitud++;
                }
                else {
                    etereo[i] = '_';
                    longitud++;
                }
            }
        }

        inicial = 1;

        etereo[longitud] = '\0';

        for(i=0;i<strlen(rep);i++) {
            if(rep[i] == pal) {
                repetido = 1;
                break;
            }
            else {
                repetido = 0;
            }
        }

        if(repetido == 0) {
            for(i=0;i<strlen(frase);i++) {
                if(frase[i] == pal) {
                    etereo[i] = pal;
                    acertado++;
                    temp=1;
                }
            }
        }

        if(repetido == 0) {
            if(temp == 0) {
                oportunidades = oportunidades - 1;
            }
        }
        else {
            printf("Esa ya estaba");
            printf("\n\n");
        }

        printf("\n");

        for(i=0;i<strlen(etereo);i++) {
            printf(" %c ",etereo[i]);
        }

        printf("\n");

        if(strcmp(frase,etereo) == 0) {
            gano = 1;
            break;
        }

        printf("\n");
        printf("Buenass: %d",acertado);
        printf("\n");
        printf("Vidas: %d",oportunidades);
        printf("\n");

        rep[j] = pal;
        j++;

        if (oportunidades==0)
        {
            break;
        }

        printf("Ahora que letras piensas que queda:");
        scanf("\n%c",&pal);

    }while(oportunidades != 0);


    if(gano) {
        printf("\n\n");
        printf("Siiiiiiii ganaste krnal.");
    }
    else {
        printf("\n\n");
        printf("Chale, perdiste mier mano.");
    }

    printf("\n\n");
    system("PAUSE");
    return 0;

}