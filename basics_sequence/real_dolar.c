#include<stdio.h>
#include<locale.h>
#define dolar 3.45

int main(){
	setlocale(LC_ALL, "portuguese");
	float r;
	printf("Quanto R$ você possui na carteira? ");
	scanf("%f", &r);
	printf("Você pode comprar %.2f dólares.", r/dolar);
return(0);
}