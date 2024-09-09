#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
float n1, n2;
printf("Nota 1: ");
scanf("%f", &n1);
printf("Nota 2: ");
scanf("%f", &n2);
printf("A média entre %.1f e %.1f é igual a %.1f", n1, n2, (n1+n2)/2);
return(0);
}