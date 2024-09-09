#include<stdio.h>

int main(){
	int cont = 30;
	while (cont>=1){
		printf("%d ", cont);
		cont--;
		if (cont%4==0){
			printf("[%d] ", cont);
			cont--;
		}
	}
return(0);
}