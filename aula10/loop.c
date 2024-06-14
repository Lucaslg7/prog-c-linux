#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  unsigned int j = 0;
imprimir: // Label dos comandos usando goto(não é recomendado, mas é utilizavel)
  printf("O valor de i é: %u\n", j);
  j++;
  if (j < 5) {
    goto imprimir;
  }

  // Loop for
  printf("Loop for\n");
  for (unsigned int i = 0; i < 5; i++) {
    printf("O valor de i é: %u\n", i);
  }

  // Loop while
  printf("Loop while\n");
  unsigned int k = 0;
  while (k < 10) {
    printf("O valor de k é: %u\n", k);
    k++;
  }

  // Loop do while
  printf("Loop do while\n");
  unsigned int l = 1;
  do {
    printf("O valor de l é: %u\n", l);
    l++;
  } while (l <= 20);

  // Podemos usar break para parar o loop independentemente da condição ou o continue para reiniciar o loop
  return 0;
}
