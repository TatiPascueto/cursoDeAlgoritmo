#include <stdio.h>
int main() {
  int tati, matheus, rafael, isabela;

  printf("Digite a idade de Tati: ");
    scanf ("%d", &tati);

   printf("Digite a idade de Matheus: ");
    scanf ("%d", &matheus);

   printf("Digite a idade de Rafael: ");
    scanf ("%d", &rafael);

  printf("Digite a idade de Isabela: ");
  scanf ("%d", &isabela);

  float idadeMedia = (tati + matheus + rafael + isabela) / 4.0;
  
  printf("A idade média da turma é %.2f anos. \n", idadeMedia);

  return 0;
}
