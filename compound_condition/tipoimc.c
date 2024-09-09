#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float peso, altura, imc;
	printf("Digite seu peso e altura:\n");
	scanf("%f%f", &peso, &altura);
	imc = peso/(altura*altura);
	printf("IMC = %.1f. ", imc);
	if (imc<18.5){
		printf("Abaixo do peso.");
	}
	else if (imc>=18.5 && imc<25){
		printf("Peso ideal.");
	}
	else if (imc>=25 && imc<30){
		printf("Sobrepeso.");
	}
	else if (imc>=30 && imc<40){
		printf("Obesidade.");
	}
	else{
		printf("Obesidade mórbida.");
	}
return(0);
}