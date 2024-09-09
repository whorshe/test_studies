#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float n1, n2, m;
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	m = (n1+n2)/2;
	if (m>7){
		printf("Média = %.1f\n", m);
		printf("Bom aproveitamento!");
	}
	else{
		printf("Média = %.1f\n", m);
		printf("Não teve um bom aproveitamento.");
	}
return(0);
}