#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[2];
  char codigo_da_carta[4];
  char nome_da_cidade[50];  //Nome com espaços
  int populacao;
  float area;
  float pib;
  int Numeros_de_pontos_turisticos;

  printf("Digite o nome do estado: ");
  scanf("%49s", estado);

  printf("Digite o código da carta: ");
  scanf("%9s", codigo_da_carta);

  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nome_da_cidade);

  printf("Digite a população: ");
  scanf("%d", &populacao);

  printf("Digite a área (em km²): ");
  scanf("%f", &area);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &Numeros_de_pontos_turisticos);
  // Área para entrada de dados

  // Área para exibição dos dados da cidade
  printf("\n--- Carta da Cidade 01 ---\n");
  printf("Estado: %s\n", estado);
  printf("Código da Carta: %s\n", codigo_da_carta);
  printf("Nome da Cidade: %s\n", nome_da_cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões\n", pib);
  printf("Número de Pontos Turísticos: %d\n", Numeros_de_pontos_turisticos);

  return 0;
}
