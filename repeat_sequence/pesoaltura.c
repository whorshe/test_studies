#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float peso, altura, media = 0, soma = 0;
	int cont = 1, mais90 = 0, mais190 = 0, menos = 0;
	while (cont<=7){
		printf("Informe o peso: ");
		scanf("%f", &peso);
		printf("Informe a altura: ");
		scanf("%f", &altura);
		printf("-----------------------\n");
		soma = soma + altura;
		if (peso>90){
			mais90++;
		}
		if(peso<50 && altura<1.60){
				menos++;
			}
		if (altura>1.90 && peso>100){
			mais190++;
		}
		cont++;
	}
	media = soma/7.0;
	printf("MÉDIA DE ALTURA DO GRUPO: %.2f\n", media);
	printf("%d pessoas pesam mais de 90kg\n", mais90);
	printf("%d pessoas que pesam menos de 50kg e tem menos de 1,60m\n", menos);
	printf("%d pessoas medem mais de 1,90 e pesam mais de 100kg.", mais190);
return(0);
}