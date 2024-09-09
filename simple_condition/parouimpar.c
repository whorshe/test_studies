#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	printf("Informe um número inteiro: ");
	scanf("%d", &n);
	if (n%2==0){
		printf("Número par.");
	}
	else{
		printf("Número ímpar.");
	}
return(0);
}