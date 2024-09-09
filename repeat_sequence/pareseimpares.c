#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont = 1, n, ti = 0, tp = 0;
	while (cont<=6){
		printf("Digite o %dº número inteiro: ", cont);
		scanf("%d", &n);
		cont++;
		if (n%2==0){
			tp++;
		}
		else if (n%2!=0){
			ti++;
		}
	}
	printf("%d números pares e %d números ímpares", tp, ti);
return(0);
}