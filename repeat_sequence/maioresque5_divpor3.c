#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont = 0, maior = 0, div = 0, n;
	while (cont<10){
		printf("Digite um valor entre 0 e 10: ");
		scanf("%d", &n);
		if (n>=0 && n<=10){
			if (n>5){
			maior++;
		}
		if (n%3==0){
			div++;
		}
		cont++;
		} else {
		printf("Intervalo inválido.\n");
		continue;
	}
}
	printf("%d números maiores que 5\n", maior);
	printf("%d números divisíveis por 3.", div);
return(0);
}