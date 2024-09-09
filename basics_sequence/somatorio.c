#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
int n1, n2;
printf("Digite um valor: ");
scanf("%d", &n1);
printf("Digite outro valor: ");
scanf("%d", &n2);
printf("A soma entre %d e %d é igual a %d", n1, n2, n1+n2);
return(0);
}