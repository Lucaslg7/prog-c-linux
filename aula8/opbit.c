#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * Operadores bit a bit
 * & - Conjunção bit a bit
 * | - Disjunção bit a bit
 * ^ = Disjunção exclusiva (é verdadeiro se apenas uma das entradas forem verdadeiras, como por exemplo, 01 ou 10
 * ~ - Negação bit a bit
 * << (shift left) "empurra o numero para a esquerda e adiciona um zero no final"
 * >> (shift right) "empurra o numero para a direita e adiciona um zero no inicio"
 *
 * */
int main(void) {
  int a = 2; // 10 em binário
  int b = 3; // 11 em binário


  // A operação bit a bit vai julgar cada bit de uma variável
  // Operador de conjunção bit a bit (&)

  printf("%d\n", a & b); // a -> 1 e 0 dá 0, e b -> 1 1 dá 1, formando 10 no final, que, convertendo de volta pra decimal, dá 2


  // Operador de disjuncao bit a bit (|)
  
  printf("%d\n", a | b); // a -> 1 ou 0 dá 1, e b -> 1 ou 1 dá 1, formando 11 no final, que, convertendo de volta pra decimal, dá 3
  

  // Operador de disjunção exclusiva bit a bit (^)
  
  printf("%d\n", a ^ b); // a -> 1 ou 0 dá 1, e b -> 1 ou 1 dá 0, formando 10 no final, que, convertendo de volta pra decimal, dá 2
  

  // Negação bit a bit
  int c = 0b00000000000000000000000000000000;
  int d = 0b11111111111111111111111111111111;
  
  printf("%d\n", ~c); // O resultado é -1 pois, como a variável c é um signed int, o primeiro bit é responsável por comunicar se é positivo ou negativo. Ao negar todos os bits 0, o bit responsável pelo sinal também é invertido, resultando em -1. Dado isso, ~c == d == -1


  // Shift left / right
  int e = 0b1000; // 8
  
  printf("%d\n", e << 1); // Por a base ser 2, o 8 vira 16

  printf("%d\n", e >> 1); // Por ser base 2, o 8 vira 4


  return 0;
}
