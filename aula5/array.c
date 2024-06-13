#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  unsigned char c[3];
  printf("O tamanho de c (char array) eh: %zu bytes\n", sizeof c);

  // Para ver a quantidade de elementos do array
  printf("O numero de elementos de c (char array) eh: %zu\n", sizeof c / sizeof c[0]); // Dividimos o tamanho de c em bytes pelo tamanho do primeiro elemento do array (em bytes)

  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;

  printf("O elemento 0 de c eh: %d\n", c[0]);
  printf("O elemento 1 de c eh: %d\n", c[1]);
  printf("O elemento 2 de c eh: %d\n", c[2]);

  printf("O endereço do array c em memoria: %p\n", c);
  printf("O endereço do array &c em memoria: %p\n", &c);
  printf("O endereço do primeiro elemento do array c em memoria: %p\n", &c[0]);
  printf("O endereço do segundo elemento do array c em memoria: %p\n", &c[1]);
  printf("O endereço do terceiro elemento do array c em memoria: %p\n\n", &c[2]);

  int i[3];

  i[0] = 1;
  i[1] = 2;
  i[2] = 3;


  printf("O elemento 0 de i eh: %d\n", i[0]);
  printf("O elemento 1 de i eh: %d\n", i[1]);
  printf("O elemento 2 de i eh: %d\n", i[2]);

  printf("O endereço do array i em memoria: %p\n", i);
  printf("O endereço do array &i em memoria: %p\n", &i);
  printf("O endereço do primeiro elemento do array i em memoria: %p\n", &i[0]);
  printf("O endereço do segundo elemento do array i em memoria: %p\n", &i[1]);
  printf("O endereço do terceiro elemento do array i em memoria: %p\n", &i[2]);

  return 0;
}
