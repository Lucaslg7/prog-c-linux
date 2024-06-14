#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int a = 10;

  if (0) { // Em binário, 0 é falso e 1 é verdadeiro
    printf("Entrou no if\n");
  }

  if (a == 5 || a > 5) {
    printf("a é 5 ou maior\n");
  } else {
      printf("a é diferente de 5 e menor que 5\n");
  }

  // Podemos usar o if sem as chaves, porém ele só irá executar o comando logo abaixo

  if (1 <= 6)
    puts(":)");

  // Podemos combinar if e else
  if (a > 9 && a != 10) {
    puts("a não é maior que 9 E diferente de 10");
  } else if (a == 10) {
    puts("a é 10");
  } else {
    puts("a é algum número ai");
  }

  // Operador ternário
  // Ao invés de fazer isso
  if (a == 10) {
  puts("10");
  } else {
    puts("Diferente de 10");
  }

  // Podemos fazer assim
  (a == 10) ? puts("10") : puts("Diferente de 10");
  // A primeira parte (a == 10) corresponde a condição aplicada a um if
  // ? -> se a condição for verdadeira, o comando após a ? será executada.
  // : -> equivale ao else, e é executado caso a ? seja falsa
  return 0;
}
