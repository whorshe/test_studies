#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float valor, desconto;
	int sexo;
	printf("Digite o sexo (1 para homem e 2 para mulher): ");
	scanf("%d", &sexo);
	if (sexo==1){
		printf("Digite o valor das compras: ");
		scanf("%f", &valor);
		desconto = valor * 0.95;
		printf("Valor com desconto: %.2f", desconto);
	}
	else if (sexo==2){
		printf("Digite o valor das compras: ");
		scanf("%f", &valor);
		desconto = valor * 0.87;
		printf("Valor com desconto: %.2f", desconto);
	}
	else{
		printf("Sexo inválido.");
	}
return(0);
}