#include <stdio.h>

int main(int argc, char *argv[]) {	
int n;
printf("Nota: Los codigos deben ser un nro. entre 1-999999999.\n");
printf("Cuantos productos desea cargar? ");
scanf("%d", &n);
	
	if (n<=0) {
		do{
			printf("La cantidad de productos debe ser mayor que cero.\n");
			scanf("%d", &n);
		} while(n<=0);
		
	}
	int codigos[n];
	float precios[n];
	float pmayor = 0;
	int pmayorCod;
	float pmenor = 0;
	int pmenorCod;
	
	for (int i = 0; i < n; i++) {
		printf("\nIngrese codigo de producto: ");
		scanf("%d", &codigos[i]);
		
		while (codigos[i] < 1 || codigos[i] > 999999999) {
			printf("Codigo invalido. Intente de nuevo: ");
			scanf("%d", &codigos[i]);
		}
		
		printf("Ingrese el precio del producto: ");
		scanf("%f", &precios[i]);
		
		while (precios[i] < 0) {
			printf("Tarifa invalida. Reintentar: ");
			scanf("%f", &precios[i]);
		}
		
		if (i == 0 || precios[i] > pmayor) {
			pmayor = precios[i];
			pmayorCod = codigos[i];
		}
		
		if (i == 0 || precios[i] < pmenor) {
			pmenor = precios[i];
			pmenorCod = codigos[i];
		}
	}
	
	printf("\n\nCodigo precio:\n");
	
	for (int i = 0; i < n; i++) {
		printf("%d  $%.2f\n", codigos[i], precios[i]);
	}
	
	printf("\nEl mas caro:");
	printf("\n%d ($%.2f)\n", pmayorCod, pmayor);
	
	printf("\nEl mas barato:");
	printf("\n%d ($%.2f)\n", pmenorCod, pmenor);

	return 0;
}

