#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int a, b, c, delta;
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	delta = (pow(b, 2)) - (4*a*c);
	printf("O valor de delta é %d", delta);
return(0);
}