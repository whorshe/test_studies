#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int d;
	float preco;
	printf("Qual distância deseja percorrer? (em km) ");
	scanf("%d", &d);
	if (d<=200){
		preco = 0.50 * d;
		printf("Pague R$%.2f", preco);
	}
	else{
		preco = 0.45 * d;
		printf("Pague R$%.2f", preco);
	}
return(0);
}