#include <stdio.h>

int main() {
  // trecho que não utiliza array (vetores)
  int rafael = 22, tati = 30, mateus = 22, brenddon = 25;
  float idadeMedia;

  printf("\n\tMostrando valores via variável isolada:");
  printf("\n%d", rafael);
  printf("\t%d", tati);
  printf("\t%d", mateus);
  printf("\t%d\n", brenddon);

  idadeMedia = (rafael + tati + mateus + brenddon)/4.0;
  printf("Idade Média via variável separada: %f\n\n", idadeMedia);


//utilizando vetores
  int tamanhoTurma = 4;
  
// primeiro jeito:
// int idades[tamanhoTurma]; = {22, 30, 22, 25};

//segundo jeito:
  int idades[tamanhoTurma]; // == idades[4]

  float mediaIdadeVetor = 0;

  idades[0] = 22;
  idades[1] = 30;
  idades[2] = 22;
  idades[3] = 25;

  printf("\nMostrando valores via vetor:\n");
  // i=i+1 ====== i++
  for (int i=0; i < tamanhoTurma; i++) {
    printf("\t%d", idades[i]);
    mediaIdadeVetor = mediaIdadeVetor + idades[i];
  }

  mediaIdadeVetor = mediaIdadeVetor/4.0;

  
  printf("\nIdade média via vetor: %f\n\n", mediaIdadeVetor);


    
  return 0;
}