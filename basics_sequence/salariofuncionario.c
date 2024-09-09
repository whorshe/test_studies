#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int dtm, ht;
	float salario;
	printf("Quantos dias foram trabalhados no mês? ");
	scanf("%d", &dtm);
	ht = dtm * 8;
	salario = 25*ht;
	printf("Salário = R$%.2f", salario);
return(0);
}