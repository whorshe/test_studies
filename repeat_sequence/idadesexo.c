#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, sexo, cont = 1, h = 0, m = 0, soma = 0, mulheresmais = 0;
	float media = 0, mh = 0, sh = 0;
	while (cont<=5){
		printf("Informe o sexo (1 H/2 M) ");
		scanf("%d", &sexo);
		printf("Informe a idade: ");
		scanf("%d", &i);
		if (sexo==1){
			h++;
			sh = sh + i;
		}
		else{
			m++;
			if (i>20){
				mulheresmais++;
			}
		}
		soma = soma + i;
		cont++;
	}
	if (h>0){
		mh = sh/h;
	}
	media = soma/5.0;
	printf("HOMENS CADASTRADOS: %d\n", h);
	printf("MULHERES CADASTRADAS: %d\n", m);
	printf("MÉDIA DE IDADE DO GRUPO: %.1f\n", media);
	printf("MÉDIA DE IDADE DOS HOMENS: %.1f\n", mh);
	printf("%d MULHERES COM MAIS DE 20 ANOS.", mulheresmais);
return(0);
}