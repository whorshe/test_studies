#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int velocidade, velocidadep = 80;
	float multa;
	printf("Qual a velocidade do carro? (km/h) ");
	scanf("%d", &velocidade);
	if (velocidade>80){
		printf("Você foi multado.\n");
		multa = (velocidade - velocidadep) * 5;
		printf("Multa de R$%.2f", multa);
	}
	else{
		printf("Siga em frente.");
	}
return(0);
}