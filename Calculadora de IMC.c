#include <stdio.h>

int main(int argc, char *argv[]) {
 float peso;
	float altura;
	float promedio;
	
	printf("Ingrese su peso en Kg: ");
 scanf("%f", &peso);
 printf("Ingrese su altura en metros: ");
 scanf("%f", &altura);
  promedio= peso/(altura*altura);
  
  printf("\n SU IMC ES DE: ");
  printf("%.1f", promedio);
  printf("\n    Indice    |  Condicion\n");
  printf("-----------------------------\n");
  printf("    <18.5     |  Bajo peso\n");
  printf(" 18.5 a 24.9  |  Normal\n");
  printf(" 25.0 a 29.9  |  Sobrepeso\n");
  printf("     >=30     |  Obesidad\n");
  
  if(promedio >30)
	  printf("PROTIP: Puedes desisntalar el L.O.L para bajar tu IMC.");
	return 0;
}

