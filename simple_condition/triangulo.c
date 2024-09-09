#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int s1, s2, s3, a, b, c;
	printf("Digite os três segmentos de reta:\n");
	scanf("%d %d %d", &s1, &s2, &s3);
	a = s1 + s2;
	b = s2 + s3;
	c = s3 + s1;
	if (s1<b && s2 < c && s3 < a){
		printf("Forma um triângulo.");
	}
	else{
		printf("Não forma um triângulo.");
	}
	
	
return(0);
}