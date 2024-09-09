#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float c, l, a;
	printf("Informe o comprimento e a altura:\n");
	scanf("%f%f", &c, &l);
	a = l * c;
	printf("%.1fm² é a área desse terreno retangular.\n", a);
	if (a<100){
		printf("TERRENO POPULAR.");
	}
	else if (a>=100 && a<=500){
		printf("TERRENO MASTER.");
	}
	else{
		printf("TERRENO VIP.");
	}
return(0);
}