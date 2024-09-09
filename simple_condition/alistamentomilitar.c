#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int ano, anoa, idade, alistamento;
	printf("ALISTAMENTO MILITAR\n");
	printf("Em que ano você nasceu? ");
	scanf("%d", &ano);
	printf("Em que ano estamos? ");
	scanf("%d", &anoa);
	idade = anoa - ano;
	if (idade<18){
		alistamento = 18 - idade;
		printf("Falta %d anos para seu alistamento.", alistamento);
	}
	else if (idade>18){
		alistamento = idade - 18;
		printf("Já se passaram %d ano(s) do seu alistamento.", alistamento);
	}
return(0);
}