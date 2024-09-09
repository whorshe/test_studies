#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float salariof, newsalario;
	printf("Informe o salário atual do funcionário: ");
	scanf("%f", &salariof);
	
	newsalario = salariof * 1.15;
	
	printf("O novo salário será: %.2f", newsalario); 
	
	
return(0);
}