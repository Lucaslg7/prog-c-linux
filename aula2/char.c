#include <stdio.h>

int main(void) {
  unsigned  char c; // Em variaveis sem sinal, o primeiro bit pode ser utilizado para formar um numero, fazendo com que a variavel char possa ter ate o valor 255, em vez de somente 127

  printf("O tamanho de c (char): bytes: %zu bits: %zu\n", sizeof c, sizeof c * 8);
  
  c = 255;
  printf("Valor de c sem sinal eh: %i\n", c);

  char c2; // Em variaveis com sinal, o valor vai até 127, após isso, entram os numeros negativos, ou seja, ao colocar c = 129, será mostrado que o calor de c é -128, e esse valor irá decrementando até o 255, que será igual a -1.

  c2 = 129;
  
  printf("O valor de c com sinal é: %i\n", c2);
  return 0;

}
