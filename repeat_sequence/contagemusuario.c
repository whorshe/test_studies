#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int vi, vf, inc, cont;
	printf("Digite o primeiro valor: ");
	scanf("%d", &vi);
	printf("Digite o último valor: ");
	scanf("%d", &vf);
	printf("Digite o incremento: ");
	scanf("%d", &inc);
	
	if (inc>0){
	for (cont = vi; cont<=vf; cont = cont + inc){
		printf("%d ", cont);
	}
	printf("Acabou!");
}
else if (inc<0){
	for (cont = vi; cont>=vf; cont = cont + inc){
		printf("%d ", cont);
}
	printf("Acabou!");
}
return(0);
}