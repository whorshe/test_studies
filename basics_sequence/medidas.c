#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
float d;
printf("Digite uma distância em metros: ");
scanf("%f", &d);
printf("A distância de %.2fm corresponde a %.5fkm\n", d, d/1000);
printf("A distância de %.2fm corresponde a %.4fhm\n", d, d/100);
printf("A distância de %.2fm corresponde a %.3fdam\n", d, d/10);
printf("A distância de %.2fm corresponde a %.1fdm\n", d, d*10);
printf("A distância de %.2fm corresponde a %.1fcm\n", d, d*100);
printf("A distância de %.2fm corresponde a %.1fmm", d, d*1000);
return(0);
}