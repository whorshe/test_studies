#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float preco;
	int dias, km;
	printf("Quantos km o carro alugado percorreu? ");
	scanf("%d", &km);
	printf("Por quantos dias ele foi alugado? ");
	scanf("%d", &dias);
	preco = (90*dias) + (0.20*km);
	printf("Você deverá pagar R$%.2f", preco);
return(0);
}