#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont = 1;
	float preco, maior = -1, menor = 1000000000;
	while (cont<=8){
		printf("Digite o preço do %dº produto: ", cont);
		scanf("%f", &preco);
		cont++;
		if (preco>maior){
			maior = preco;
		}
		if (preco<menor){
			menor = preco;
		}
	}
	printf("Maior preço = %.2f\n", maior);
	printf("Menor preço = %.2f", menor);
return(0);
}