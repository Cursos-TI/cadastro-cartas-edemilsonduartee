#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //carta 01
  char estado1[2];
  char codigo_da_carta1[4];
  char nome_da_cidade1[50];  //Nome com espaços
  int populacao1;
  float area1;
  float pib1;
  int Numeros_de_pontos_turisticos1;

 //carta 02
  char estado2[2];
  char codigo_da_carta2[4];
  char nome_da_cidade2[50];  //Nome com espaços
  int populacao2;
  float area2;
  float pib2;
  int Numeros_de_pontos_turisticos2;

 // Área para entrada de dados carta 1
  printf("Digite o nome do estado 1: ");
  scanf("%49s", estado1);

  printf("Digite o código da carta1: ");
  scanf("%9s", codigo_da_carta1);

  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nome_da_cidade1);

  printf("Digite a população: ");
  scanf("%d", &populacao1);

  printf("Digite a área (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &Numeros_de_pontos_turisticos1);
 
   // Área para entrada de dados carta 2
  printf("Digite o nome do estado 2: ");
  scanf("%49s", estado2);

  printf("Digite o código da carta1: ");
  scanf("%9s", codigo_da_carta2);

  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nome_da_cidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a área (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &Numeros_de_pontos_turisticos2);

  // Área para exibição dos dados da cidade
  printf("\n--- Carta da Cidade 01 ---\n");
  printf("Estado: %s\n", estado1);
  printf("Código da Carta: %s\n", codigo_da_carta1);
  printf("Nome da Cidade: %s\n", nome_da_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", Numeros_de_pontos_turisticos1);

   // Área para exibição dos dados da cidade
  printf("\n--- Carta da Cidade 02 ---\n");
  printf("Estado: %s\n", estado2);
  printf("Código da Carta: %s\n", codigo_da_carta2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", Numeros_de_pontos_turisticos2);
  return 0;
}
