#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
 
  float f = 1; // Para representar uma notação científica, podemos usar, por exemplo, 2e4, que significa 2 * 10^4. 

  printf("O tamanho de f (float): bytes: %zu bits: %zu\n", sizeof f, sizeof f * 8);
  printf("O valor de f eh: %.2f \n", f); // Podemos usar a notação %.nf, sendo n um numero inteiro, para limitar o número de casas decimais. 

  double d = 2.065123;
  printf("O tamanho de f (float): bytes: %zu bits: %zu\n", sizeof d, sizeof d *     8);
  printf("O valor de f eh: %.2g \n", d);
  
  long double d2 = 2.37165859;
  printf("O tamanho de f (float): bytes: %zu bits: %zu\n", sizeof d2, sizeof d2 *     8);
  printf("O valor de f eh: %.5Lg \n", d2);

  printf("5 / 5 =  %f \n", 5 / 5);
  printf("5 / 5 =  %f \n", 5.2 / 5.7);

  return 0;

}
