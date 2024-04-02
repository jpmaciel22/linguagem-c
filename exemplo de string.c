#include <stdio.h>

#include <string.h>

#define maximo 100

void main() {

char palavra[maximo];

int i;

while (1) {

printf("Digite algo (Digite 'parar' para sair): ");

fgets(palavra, maximo, stdin);

palavra[strcspn(palavra, "\n")] = '\0';

if (strcmp(palavra, "parar") == 0) {

break;} else {

for (i = 1; i <= 10; i++) {

printf("%d ", i);}

printf("\n");}}}