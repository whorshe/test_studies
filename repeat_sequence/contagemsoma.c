#include<stdio.h>

int main(){
	int cont = 6, s = 0;
	while (cont<=100){
		printf("%d ", cont);
		s = s + cont;
		cont = cont + 2;
	}
	printf("Soma = %d", s);
return(0);
}