#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float l, a;
	printf("Informe a largura da parede: ");
	scanf("%f", &l);
	printf("Informe a altura da parede: ");
	scanf("%f", &a);
	printf("%.1fm² é a área a ser pintada.\n", l*a);
	printf("É necessário %.2fl de tinta", l*a/2);
return(0);
}