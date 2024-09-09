#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float preco, precopromo;
	printf("Qual o valor do produto? ");
	scanf("%f", &preco);
	precopromo = preco - 1.05;
	printf("PREÇO PROMOCIONAL: %.2f", precopromo);
return(0);
}