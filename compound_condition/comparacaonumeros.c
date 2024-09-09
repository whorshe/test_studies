#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2;
	printf("Informe dois valores:\n");
	scanf("%d %d", &n1, &n2);
	if (n1>n2){
		printf("%d é o maior.", n1);
	}
	else if(n2>n1){
		printf("%d é o maior.", n2);
	}
	else{
		printf("Não existe valor maior. %d é igual a %d.", n1, n2);
	}
return(0);
}