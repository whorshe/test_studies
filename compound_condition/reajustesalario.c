#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float salario, novosalario;
	int anost;
	printf("Qual o salário do funcionário? ");
	scanf("%f", &salario);
	printf("Há quantos anos ele trabalha na empresa? ");
	scanf("%d", &anost);
	if (anost<=3){
		novosalario = salario * 1.03;
	}
	else if(anost>3 && anost <=10){
		novosalario = salario * 1.125;
	}
	else{
		novosalario = salario * 1.20;
	}
	printf("Novo salário = R$ %.2f", novosalario);
return(0);
}