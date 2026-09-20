#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float peso;
    float altura;
    float promedio;

    do {
        printf("Ingrese su peso en Kg: ");
        scanf("%f", &peso);

        if (peso < 0) {
            printf("Error: el peso no puede ser negativo. Intente nuevamente.\n");
        }
    } while (peso < 0);

    do {
        printf("Ingrese su altura en metros: ");
        scanf("%f", &altura);

        if (altura < 0) {
            printf("Error: la altura no puede ser negativa. Intente nuevamente.\n");
        }
    } while (altura < 0);

    promedio = peso / (altura * altura);

    printf("\n SU IMC ES DE: ");
    printf("%.1f", promedio);
    printf("\n    Indice    |  Condicion\n");
    printf("-----------------------------\n");
    printf("    <18.5     |  Bajo peso\n");
    printf(" 18.5 a 24.9  |  Normal\n");
    printf(" 25.0 a 29.9  |  Sobrepeso\n");
    printf("     >=30     |  Obesidad\n \n");
	
    system("pause");
    //https://github.com/lautaromirandautn-source/TPs-informatica
    return 0;
}
