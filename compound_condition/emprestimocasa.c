#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("EMPRÉSTIMO BANCARIO\n");
	float valorcasa, salario, prestmensal, porcsalario;
	int anos, meses;
	printf("Valor da casa que deseja: ");
	scanf("%f", &valorcasa);
	printf("Salário do comprador: ");
	scanf("%f", &salario);
	printf("Quantos anos deseja pagar: ");
	scanf("%d", &anos);
	meses = anos * 12;
	prestmensal = valorcasa/meses;
	porcsalario = salario * 0.30;
	if (prestmensal>porcsalario){
		printf("Empréstimo negado.");
	}
	else{
		printf("Prestação mensal = R$ %.2f", prestmensal);
	}
return(0);
}