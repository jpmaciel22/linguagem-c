#include <stdio.h>

void main() {
int quantidade = 10,temp,posicao,i,j;
int numeros[quantidade];
for(int i=0;i<quantidade;i++){
    printf("Quais números quer inserir?: ");
    scanf("%d",&numeros[i]);
    
}
for(int i=0;i<quantidade;i++){
    printf("Numero [%d]: %d\n",i,numeros[i]);
}
for(int i=0;i<quantidade;i--){
    for(int j=0;j<quantidade;j++){
        if(numeros[j]>numeros[j+ 1]){
            temp=numeros[j];
            numeros[j]=numeros[j+ 1];
            numeros[j + 1]=temp;
        }
    }
}
printf("Maior: %d",numeros[9]);
printf("Posicao: %d",9);
}