#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * CONJUNCAO (E, AND)
 * 0 0 -> 0 (falso)
 * 0 1 -> 0 (falso)
 * 1 0 -> 0 (falso)
 * 1 1 -> 1 (verdadeiro)
 *
 * DISJUNCAO (OU, OR)
 * 0 0 -> 0
 * 1 0 -> 1
 * 0 1 -> 1
 * 1 1 -> 1
 *
 * OPERADORES
 * <, >, <=, >=, ==, !=
 * */

int main(void) {
  int a = 8;
  int b = 9;

  // Operador de igualdade (==)
  printf("%d\n", a == b); // Falso, pois 8 é diferente de 9

  a = b = 8;
  printf("%d\n", a == b); // Verdadeiro, pois 8 é igual a 8
 
  // Operador de conjunção (&&)
  printf("a == b && b > 4 -> %d\n", a == b && b > 4); 

  printf("a == b && b < 4 -> %d\n", a == b && b < 4); 

  // Operador de disjunção (||)     
  printf("a == b || b > 4 -> %d\n", a == b || b > 4); 

  printf("a == b || b > 4 -> %d\n", a == b || b < 4); 

  // Operador de negação e diferença (!, !=)
  
  printf("!(a == b) -> %d\n", !(a == b)); 

  printf("!(a != b) -> %d\n", !(a != b));

  return 0;
}
