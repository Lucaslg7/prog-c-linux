#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // argc -> numéro de argumentos passados para a função main
  // *argv[] -> ponteiro de array de strings passada para a função main
  
  int i; // 4bytes alocados para um int32
  printf("endereco de i %p\ntamanho de i: %zu\n\n", &i, sizeof i);

  int *p = NULL; // 8 bytes alocados, pois a arquitetura é 64 bits, logo o ponteiro terá 64 bits
  printf("endereco de p %p\ntamanho de p: %zu\n\n", &p, sizeof p);

  printf("p = &p (p recebe endereco de i)\n\n"); // p pode receber o endereco de i pois o endereco de i possui 8 bytes, o que corresponde ao tamanho suportado plo ponteiro p
  p = &i;
  
  printf("endereco de p %p\ntamanho de p: %zu\n", &p, sizeof p);
  printf("O conteudo de p: %p\n\n", p);

  i = 9;
  printf("*p = %d\n", *p); // Como p aponta para o endereco de i, se i mudar, p vai mudar o conteudo tambem

  int *j = NULL;
  // *j = 9; Isso nao funcionará, pois não há espaço alocado para guardar a variável

  printf("endereco de j: %p\n", j);

  j = malloc(sizeof (int)); // o malloc aloca memoria do tamamnho de um int, nesse caso. Poderia ser feito também malloc(4). Essa função aloca esse endereco e retorna um ponteiro para a variavel j, sendo assim, podemos ver para onde j está apontando
  printf("endereco de j: %p\n", j);

  *j = 9;

  printf("j: %d\n", *j);
  free(j); // É neessário desalocar a memória, para não gerar problemas

  return 0;
}
