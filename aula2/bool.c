#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool b;

  b = true;
  b = false;

  printf("O tamanho de b (bool eh: %zu\n", sizeof b);

  b = true;
  printf("O valor de b (bool=true)  eh: %i\n", b);

  b = false;
  printf("O valor de b (bool=false) eh: %i\n", b);

  return 0;
}
