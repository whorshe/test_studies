#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int qtdcd, qtdanosf, minperdidos, dperdidos;
	printf("REDUÇÃO DE TEMPO DE VIDA\n");
	printf("Quantos cigarros fuma por dia? ");
	scanf("%d", &qtdcd);
	printf("Há quantos anos fuma? ");
	scanf("%d", &qtdanosf);
	minperdidos = qtdcd * 10 * 365 * qtdanosf;
	dperdidos = minperdidos/1440;
	printf("%d dias perdidos.", dperdidos);
return(0);
}