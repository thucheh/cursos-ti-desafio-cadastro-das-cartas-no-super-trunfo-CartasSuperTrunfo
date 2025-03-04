


#include <stdio.h>

/* @Thucheh@ Crie um programa que Leia o Estado, Código da carta, Nome da Cidade,
 Área em km², PIB, pPopulação e Número de pontos turisticos */


int main() {


  char Estado[40];
  char CodigoCarta[45];
  char NomeCidade[65];
  int NumeroPopulacao;
  float Areakm2;
  float PIB = 0.0;
  int Pontosturisticos[50];

  printf("\n\n\n\n\n\n\n", Estado);

  printf("Digite o Estado: ");
  scanf("%s", Estado);

  printf("Digite o Código da carta: ");
  scanf("%s", CodigoCarta);

  printf("Digite o Nome da cidade: ");
  scanf("%s", NomeCidade);
  
  printf("Digite a Area em km2: ");
  scanf("%f", &Areakm2);
    
  printf("Digite o PIB: ");
  scanf("%f", &PIB);    
 
  printf("Digite População: ");
  scanf("%i", &NumeroPopulacao);

  printf("Digite o Número de pontos turísticos ");
  scanf("%i", &Pontosturisticos[23]);
  

  printf("\n--jogo supertrunfo--\n\n");

  printf("Estado: %s\n", Estado);
  printf("Código da carta: %s\n", CodigoCarta);
  printf("Nome da cidade: %s\n", NomeCidade);
  printf("Área em km2: %.2f\n", Areakm2);
  printf("PIB: %.2f\n", PIB);
  printf("População: %i\n", NumeroPopulacao);
  printf("Número de pontos turísticos: %i\n", Pontosturisticos[23]);

  return 0;

}


     