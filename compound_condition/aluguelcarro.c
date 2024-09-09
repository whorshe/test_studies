#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int tipo, diasaluguel, kmpercorridos;
	float precopago;
	printf("Qual o tipo de carro? (1 para popular / 2 para de luxo) ");
	scanf("%d", &tipo);
	printf("Quantos dias de aluguel? ");
	scanf("%d", &diasaluguel);
	printf("Quantos km percorridos? ");
	scanf("%d", &kmpercorridos);
	if (tipo==1){
		if (kmpercorridos<=100){
			precopago = (90*diasaluguel) + (0.20 * kmpercorridos);
		}
		else {
		precopago = (90*diasaluguel) + (0.10 * kmpercorridos);
		}
	}
	else if (tipo==2){
		if (kmpercorridos<=200){
			precopago = (150*diasaluguel) + (0.30*kmpercorridos);
		}
		else{
			precopago = (150*diasaluguel) + (0.25*kmpercorridos);
		}
	}
	else {
		printf("Tipo de carro inválido.");
		return 1;
	}
	printf("Pague R$ %.2f", precopago);
return(0);
}