#include <stdio.h>         

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste larissa

int main() {

char Estado[40];
    char CodigoCarta[45];
    char NomeCidade[65];
    int NumeroPopulacao;
    float Areakm2;
    float PIB = 0.0;
    int Pontosturisticos[50]; // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//  int PontoTuristico = Pontosturisticos[49];

//  numero_especial A, E, I;

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





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}





       
