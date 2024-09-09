#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont = 1, n, s = 0;
	while (cont<=7){
		printf("Digite o %dº valor: ", cont);
		scanf("%d", &n);
		s = s + n;
		cont++;
	}
	printf("Soma = %d", s);
return(0);
}