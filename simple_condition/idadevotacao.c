#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int ano, idade, anoa;
	printf("Qual seu ano de nascimento? ");
	scanf("%d", &ano);
	printf("Em qual ano estamos? ");
	scanf("%d", &anoa);
	idade = anoa - ano;
	if (idade>=16){
		printf("Você pode votar.");
	}
	else{
		printf("Você não pode votar.");
	}
return(0);
}