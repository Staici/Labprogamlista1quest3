#include <stdio.h>

int main(void) {
float x;
  
  printf("Digite um número real: ");
  scanf("%f",&x);
  printf("Número digitado com apenas duas casas decimais: %.2f",x);
  return 0;
}