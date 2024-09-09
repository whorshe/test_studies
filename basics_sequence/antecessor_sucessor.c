#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
int n;
printf("Digite um número: ");
scanf("%d", &n);
printf("O antecessor de %d é %d\n", n, n-1);
printf("O sucessor de %d é %d", n, n+1);
return(0);
}