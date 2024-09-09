#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float salarioatual, novosalario;
	int genero, anos;
	printf("Qual o salário atual do funcionário? ");
	scanf("%f", &salarioatual);
	printf("Quantos anos trabalha na empresa? ");
	scanf("%d", &anos);
	printf("Qual o gênero do funcionário? (1 para F e 2 para M) ");
	scanf("%d", &genero);
	if (genero==1){
		if (anos<15){
			novosalario = salarioatual * 1.05;
		}
		else if (anos>=15 && anos<20){
			novosalario = salarioatual * 1.12;
		}
		else{
			novosalario = salarioatual * 1.23;
		}
	}
	else if (genero==2){
		if (anos<20){
			novosalario = salarioatual * 1.03;
		}
		else if (anos>=20 && anos<30){
			novosalario = salarioatual * 1.13;
		}
		else{
			novosalario = salarioatual * 1.25;
		}
	}
	else {
		printf("Gênero inválido.\n");
		return 1;
	}
	printf("Novo salário do funcionário = R$%.2f", novosalario);
return(0);
}