#include <stdio.h>

int main(){

float metro;

printf("Entre com um valor em METRO.\n");
scanf("%f ",&metro);


// %.2f  é utilizado pra indicar quantas casas decimais vão ser imprimidas.

printf("%.2f metro(s) e equivalente a %.2f decimetro.\n",metro,metro*10);

printf("%.2f metro(s) e equivalente a %.2f centimetro.\n",metro,metro*100);

printf("%.2f metro(s) e equivalente a %.2f milimetro.\n",metro,metro*1000);

return(0);

}
