#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float n1, n2, m;
	printf("Digite as duas notas do aluno:\n");
	scanf("%f%f", &n1, &n2);
	m = (n1+n2)/2;
	printf("MÉDIA = %.1f\n", m);
	if (m<=4.9){
		printf("REPROVADO!");
	}
	else if(m>=5.0 && m<=6.9){
		printf("RECUPERAÇÃO!");
	}
	else{
		printf("APROVADO!");
	}
return(0);
}