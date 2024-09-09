#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont = 500, s = 0;
	while (cont>=0){
		printf("%d ", cont);
		s = s + cont;
		cont = cont - 50;
	}
	printf("Soma = %d", s);
return(0);
}