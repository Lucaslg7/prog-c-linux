#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
 int a;
 int b;

 a = 10; // Operador de atribuição (=)
         // (+) ou (-), antes de um número, chama-se operador unário (+10, -8)
 printf("%d\n", a);

 // (+) ou (-) entre dois numeros, chama-se operador binário( 1+2 3-8). Fazem a soma e a subtração
 b = 3;

 printf("A soma de a e b eh: %d\n", a + b);
 printf("A subtração de a e b eh: %d\n", a - b);

 // Operadores binarios de multiplicacao e divisao (*) (/)
 float c = 10;
 float d = 3; 
 printf("A multiplicacao de a e b eh: %f\n", c * d);
 printf("A divisao de a e b eh: %f\n", c / d);

 // Operadores de incremento ou decremento
 a = a + 1;
 printf("a incrementado em 1: %d\n", a);

 a += 1;
 printf("a incrementado em 1: %d\n", a);
 
 a++;
 printf("a incrementado em 1: %d\n", a);

 // Caso o operador ++ ou -- seja usado dentro de um printf, ocorrerá um pós incremento, ou seja, o valor da variável será exibido primeiro e só depois o valor será incrementado em 1. P.e:
 // printf("%d", a++)
 // Também pode ser feito com outros operadores aritméticos, como por exemplo: a = a * a, a -= 2, a--...
 

 // Operador resto da divisão (nao pode ser usado com floats, somente com ints) 
 printf("A resto da divisao de a e b eh: %d\n", a % b);

 // Prioridades das operações
 // + ou - (unários) -> () -> [] -> {} -> * ou / -> + ou - (binarios)
 
  return 0;
}
