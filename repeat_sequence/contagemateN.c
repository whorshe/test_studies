#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont = 1, n;
	printf("Digite um valor: ");
	scanf("%d", &n);
	if (n>0){
		while (cont<=n){
			printf("%d ", cont);
			cont++;
		}
		printf("Acabou!");
	}
	else{
		printf("Número inválido.");
	}
return(0);
}