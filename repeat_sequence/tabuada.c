#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont = 1, n;
	printf("Digite um valor: ");
	scanf("%d", &n);
	for (cont = 1; cont<=9; cont++){
		printf("%d x %d = %d\n", n, cont, cont*n);
	}
return(0);
}