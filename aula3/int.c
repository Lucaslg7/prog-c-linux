#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
 
  long i; //long int. Também temos short, que refere-se ao short int, que possui 16 bits

  printf("O tamanho de i (int): bytes: %zu bits: %zu\n", sizeof i, sizeof i * 8);
  printf("O valor de i eh: %lu\n", i); 
  
  short i2;
  
  printf("O tamanho de i2 eh: bits: %zu bytes: %zu", sizeof i2, sizeof i2 * 8);
  printf("O valor de i2 (short int) eh: %u\n", i2);

  size_t t;

  printf("Valor de t (size_t): %zu\n", t);
  
  register int i3;

  printf("O tamanho de i3 eh: bits: %zu bytes: %zu\n", sizeof i3, sizeof i3 * 8);
      printf("O valor de i3 (register int) eh: %u\n", i3);

  
  return 0;

}
