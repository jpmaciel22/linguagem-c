#include <stdio.h>
#include <math.h>
void main() {
    int contador=0,coeficientes[3],a,b,c;
    float delta,x1,x2;
    printf("Insira 3 coeficientes\n");
    do {
        printf("Digite em ordem a,b,c: ");
        scanf("%d",&coeficientes[contador]);
        contador++;
       }while(contador<3);
       delta=(coeficientes[1]*coeficientes[1]) - (4*coeficientes[0]*coeficientes[2]);
       if(delta<0){
       printf("As duas raizes sao complexas.");
                  }
                  else {
                  x1 = (-coeficientes[1]+sqrt(delta))/(2*coeficientes[0]);
                  x2 = (-coeficientes[1]-sqrt(delta))/(2*coeficientes[0]);
                  printf("x1 = %.2f\nx2 = %.2f",x1,x2);
                       }
                       if(x1==x2){printf("As raízes sao iguais, portanto sua soma é: %.2f",x1+x2);}
                       
}