#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float peso;
	float altura;
	float promedio;
	
	do {
		printf("Ingrese su peso en Kg: ");
		scanf("%f", &peso);
		
		if (peso <= 0) {
			printf("Error: el peso debe ser mayor que cero. Intente nuevamente.\n");
		}
	} while (peso <= 0);
	
	do {
		printf("Ingrese su altura en metros: ");
		scanf("%f", &altura);
		
		if (altura <= 0) {
			printf("Error: la altura debe ser mayor que cero. Intente nuevamente.\n");
		}
	} while (altura <= 0);
	
	promedio = peso / (altura * altura);
	
	printf("\nSU IMC ES DE: %.1f\n", promedio);
	
	printf("\n    Indice    |  Condicion\n");
	printf("-----------------------------\n");
	printf("    <18.5     |  Bajo peso\n");
	printf(" 18.5 a 24.9  |  Normal\n");
	printf(" 25.0 a 29.9  |  Sobrepeso\n");
	printf("     >=30     |  Obesidad\n\n");
	
	printf("Usted se encuentra en la condicion de: ");
	
	if (promedio < 18.5) {
		printf("Bajo peso\n");
	}
	else if (promedio < 25.0) {
		printf("Normal\n");
	}
	else if (promedio < 30.0) {
		printf("Sobrepeso\n");
	}
	else {
		printf("Obesidad\n");
	}
	
	system("pause");
	//https://github.com/lautaromirandautn-source/TPs-informatica
	return 0;
}
