#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float s1, s2, s3;
	printf("Informe os três segmentos:\n");
	scanf("%f%f%f", &s1, &s2, &s3);
	if (s1<s2+s3 && s2<s3+s1 && s3<s2+s1){
		printf("Forma um triângulo");
		if (s1==s2 && s2==s3){
			printf(" equilátero.");
		}
		else if((s1==s2) || (s1 == s3)|| (s2 == s3)){
			printf(" isósceles.");
		}
		else{
			printf(" escaleno.");
		}
	}
	else{
		printf("Não forma um triângulo.");
	}
return(0);
}