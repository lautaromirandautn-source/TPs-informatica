#include <stdio.h>
#include <string.h>

char figura[12];
float calcularAreaRectangulo(float l, float a);
float calcularPerimetroRectangulo(float l, float a);
float calcularAreaCirculo(float r);
float calcularPerimetroCirculo(float r);
void imprimirResultados(float a, float p);


int main(int argc, char *argv[]) {	
int select;

	printf("Ingresar figura a calcular ('1' para rectangulo, '2' para circulo): ");
	scanf("%d", &select);
	 while(select!=1&&select!=2){
		printf("Por favor seleccione una opcion valida: ");
		scanf("%d", &select);
	}
	if(select==1){
		 strcpy(figura, "rectangulo");
		printf("Usted ha seleccinado: rectangulo\n");
	float l, a;
		printf("\nIngrese la longitud: ");
		scanf("%f", &l);
		printf("Ingrese la altura: ");
		scanf("%f", &a);
		float area = calcularAreaRectangulo(l, a);
		float per = calcularPerimetroRectangulo(l, a);
		imprimirResultados(area, per);
		} 
	else if(select==2){
		
	float rad;
		strcpy(figura, "circulo");
		printf("Usted ha seleccionado: circulo\n");
		printf("\nIngrese el radio: ");
		scanf("%f", &rad);
		float area = calcularAreaCirculo(rad);
		float per = calcularPerimetroCirculo(rad);
		imprimirResultados(area, per);
	}
	
	return 0;
}

float calcularAreaRectangulo(float l, float a){
	float area = l*a;
	return area;
}

float calcularPerimetroRectangulo(float l, float a){
	float per = 2*(l+a);
	return per;
}

float calcularAreaCirculo(float r){
	float area = 3.14159265359*(r*r);
	return area;
}
	
float calcularPerimetroCirculo(float r){
	float per = 2*3.14159265359*r;
	return per;
}
	
void imprimirResultados(float area, float per){
	printf(" -El area del %s es: %.1f\n", figura, area);
	printf(" -El perimetro del %s es: %.1f", figura, per);
}
