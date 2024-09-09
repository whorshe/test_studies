#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont = 1, i, mais = 0, menos = 0, maior = 0, s = 0;
	float media;
	while (cont<=10){
		printf("Digite a %dª idade: ", cont);
		scanf("%d", &i);
		s = s + i;
		
		if (i>18){
			mais++;
		}
		if (i<5){
			menos++;
		}
		if (i>maior){
			maior = i;
		}
		cont++;
	}
	media = s/10.0;
	printf("Média de idade do grupo = %.2f\n", media);
	printf("%d pessoas tem mais de 18 anos\n", mais);
	printf("%d pessoas tem menos de 5 anos\n", menos);
	printf("A maior idade lida foi %d", maior);
return(0);
}