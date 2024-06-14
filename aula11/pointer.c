#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

void imprime(char *s) {
  while (*s) {
    putchar(*s++);
  }
  printf("\n");
}

int main(void) {
  int a[] = { 1, 2, 3 };

  for (int i = 0; i < 3; i++) {
    printf("%d\n", *a + i);// Podemos somar o endereço de memória com o iterador para obtermos o próximo elemento. Neste caso estamos utilizando ponteiros para acessar os valores do array, em vez da notação a[i] 
  }

  int j = 2024;
  printf("O endereco da variavel j em memoria é: %p\n", &j);

  int *p; // ponteiro
  p = &j;
  printf("O endereco da variavel p em memoria é: %p\n", p);

  printf("O valor de j é: %d\n", *p); // *p recupera o valor de j, pois p aponta para o endereço de memoria de j, como declarado acima

  char b[] = "texto";
  imprime(b);

  char *c = "texto";
  imprime(c);

  char *num = "123";
  for ( ;*num; *num++) {
    printf("%d\n", *num);
  }


  return 0;
}
