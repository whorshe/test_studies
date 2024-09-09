#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int horasatividade, pontos;
	float dinheiro;
	printf("Quantas horas de atividade teve por mês? ");
	scanf("%d", &horasatividade);
	if (horasatividade<=10){
		pontos = 2 * horasatividade;
	}
	else if (horasatividade>=10 && horasatividade<20){
		pontos = 5 * horasatividade;
	}
	else{
		pontos = 10 * horasatividade;
	}
	dinheiro = pontos * 0.05;
	printf("Você conseguiu %d pontos e R$%.2f", pontos, dinheiro);
return(0);
}