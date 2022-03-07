#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
    setlocale( LC_ALL, "Portuguese");

    float lado1, lado2, hipotenusa, cateto1, cateto2;
    char lado;

    printf("============================================================");
    printf("\n|                    AV1 - ALGORITMOS I                    |");
    printf("\n============================================================");
    printf("\n");
    printf("\n\tDigite o valor do primeiro lado: ");
    scanf("%f", &lado1);
    printf("\n\tDigite o valor do segundo lado: ");
    scanf("%f", &lado2);
    printf("\n\tVoc� quer calcular  [C]Cateto ou  [H]Hipotenusa?: ");
    scanf(" %c", &lado);
    printf("\n============================================================");
    printf("\n");


    if ( lado == 'H' || lado == 'h' ){
        lado1 = lado1 * lado1;
        lado2 = lado2 * lado2;
        hipotenusa = sqrt( lado1 + lado2 );
            printf("\n\tO valor da Hipotenusa �: %.2f", hipotenusa);
            printf("\n");
            printf("\n============================================================");
            printf("\n");
    }

        else {
            if (lado1 < 0 || lado2 < 0 ){
                printf("\n\tERRO: DIGITE UM VALOR V�LIDO!");
                printf("\n");
                printf("\n============================================================");
                printf("\n");
            }
        else {
            if ( lado == 'C' || lado == 'c' && lado1 > lado2) {
                lado1 = lado1 * lado1;
                lado2 = lado2 * lado2;
                cateto1 = sqrt( lado1 - lado2 );
                    printf("\n\tO valor do Cateto �: %.2f", cateto1);
                    printf("\n");
                    printf("\n============================================================");
                    printf("\n");
            }
            else {
            if ( lado == 'C' || lado == 'c' && lado2 > lado1) {
                lado1 = lado1 * lado1;
                lado2 = lado2 * lado2;
                cateto2 = sqrt( lado2 - lado1 );
                    printf("\n\tO valor do Cateto �: %.2f", cateto2);
                    printf("\n");
                    printf("\n============================================================");
                    printf("\n");
                }

            else {
            printf("\n\tERRO: DIGITE UM VALOR V�LIDO!");
            printf("\n");
            printf("\n============================================================");
            printf("\n");
                }
            }
        }
    }


return 0;
}
