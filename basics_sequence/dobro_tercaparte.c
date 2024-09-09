#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
float n;
printf("Digite um número: ");
scanf("%f", &n);
printf("O dobro de %.1f é %.1f\n", n, n*2);
printf("A terça parte de %.1f é %.5f", n, n/3);
return(0);
}