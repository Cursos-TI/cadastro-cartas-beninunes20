#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países

int main()
{

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Para a primeira carta
  char estado, codigo_da_carta[10], nome_da_cidade[50];
  int numero_de_pontos_turisticos;
  float area, pib, densidade_populacional, pib_per_capita, super_poder;
  unsigned long int população;

  // Para a segunda carta
  char estado2, codigo_da_carta2[10], nome_da_cidade2[50];
  int numero_de_pontos_turisticos2;
  float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
  unsigned long int população2;

  // Variaveis de menu
  int opcao;


  // Área para entrada de dados

  // Entrada de dados para a primeira carta
  printf("Carta 1:\n");        // Todos os dados referentes a primeira carta
  printf("Digite o estado: "); // Uma letra de 'A' a 'H' (representando um dos oito estados).
  scanf("%c", &estado);

  printf("Digite o código da carta: "); // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
  scanf("%s", codigo_da_carta);

  printf("Digite o nome da cidade: ");                  // O nome da cidade deve ser lido usando fgets para permitir espaços, e o caractere de nova linha deve ser removido.
  fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin); // Limpa o buffer
  fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin); // Lê o nome da cidade
  nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0'; // Remove o caractere de nova linha

  printf("Digite a população: "); // Número de habitantes da cidade.
  scanf("%ld", &população);

  printf("Digite a área: "); // Área da cidade em quilômetros quadrados (pode ser um número decimal).
  scanf("%f", &area);

  printf("Digite o PIB: "); // Produto Interno Bruto da cidade em bilhões de reais (pode ser um número decimal).
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: "); // Número de pontos turísticos da cidade.
  scanf("%d", &numero_de_pontos_turisticos);

  /* Limpeza do buffer de entrada para o funcionamento do fgets*/
  while (getchar() != '\n')
    ; // Limpa o buffer de entrada


  /* Entrada de dados para a segunda carta */
  printf("\nCarta 2:\n");      // Todos os dados referentes a segunda carta, seguindo o mesmo formato da primeira carta.
  printf("Digite o estado: "); // Uma letra de 'A' a 'H' (representando um dos oito estados).
  scanf("%c", &estado2);

  printf("Digite o código da carta: "); // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
  scanf("%s", codigo_da_carta2);

  printf("Digite o nome da cidade: ");                    // O nome da cidade deve ser lido usando fgets para permitir espaços, e o caractere de nova linha deve ser removido.
  fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin); // Limpa o buffer
  fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin); // Lê o nome da cidade
  nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0'; // Remove o caractere de nova linha

  printf("Digite a população: "); // Número de habitantes da cidade.
  scanf("%ld", &população2);

  printf("Digite a área: "); // Área da cidade em quilômetros quadrados (pode ser um número decimal).
  scanf("%f", &area2);

  printf("Digite o PIB: "); // Produto Interno Bruto da cidade em bilhões de reais (pode ser um número decimal).
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: "); // Número de pontos turísticos da cidade.
  scanf("%d", &numero_de_pontos_turisticos2);

  /* Cálculo da densidade populacional */
    densidade_populacional = população / area; // Calculo da densidade populacional para a primeira carta
    densidade_populacional2 = população2 / area2; // Calculo da densidade populacional para a segunda carta

  /* Cálculo do PIB per capita*/
    pib_per_capita = ((pib*(1000000000)) / (float)população); // Calculo do PIB per capita para a primeira carta
    pib_per_capita2 = ((pib2 *(1000000000))/ (float)população2); // Calculo do PIB per capita para a segunda carta  

  /* Cálculo de super poder*/ 
  super_poder = (float)população + area + pib + (float)numero_de_pontos_turisticos + pib_per_capita + (1/densidade_populacional);
  super_poder2 = (float)população2 + area2 + pib2 + (float)numero_de_pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional2);

  // Área para exibição dos dados da cidade

  /* Exibição dos dados da primeira carta */
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código da carta: %s\n", codigo_da_carta);
  printf("Nome da cidade: %s\n", nome_da_cidade);
  printf("População: %ld\n", população);
  printf("Área: %.2f KM²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);
  printf("Densidade populacional: %.2f habitantes por KM²\n", densidade_populacional);
  printf("PIB per capita: %.2f reais\n", pib_per_capita);
  printf("Super poder: %.2f \n" , super_poder);

  /* Exibição dos dados da segunda carta */
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código da carta: %s\n", codigo_da_carta2);
  printf("Nome da cidade: %s\n", nome_da_cidade2);
  printf("População: %ld\n", população2);
  printf("Área: %.2f KM²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
  printf("Densidade populacional: %.2f habitantes por KM²\n", densidade_populacional2); 
  printf("PIB per capita: %.2f reais\n", pib_per_capita2);
  printf("Super poder: %.2f \n", super_poder2);

  /*Menu iterativo com switch*/
  //menu
  printf("\n**** Super Trunfo ****\n");
  printf("Ecolha o atributo de comparação:\n");
  printf("1- População\n");
  printf("2- Área\n");
  printf("3- PIB\n");
  printf("4- Número de pontos turísticos\n");
  printf("5- Densidade Demográfica\n");
  scanf("%d", &opcao);

  // switch
  switch (opcao)
  {
  case 1:
  // comparação da população
    printf("\nComparação do atributo população\n");
    printf("Carta 1 - %s: %ld \n", nome_da_cidade, população);
    printf("Carta 2 - %s: %ld \n", nome_da_cidade2, população2);
    if(população > população2){
    printf("*** Carta 1 - %s venceu!!! ***\n",nome_da_cidade);
  }else if(população < população2){
    printf("*** Carta 2 - %s venceu!!! ***\n",nome_da_cidade2);
  }else{
    printf("Houve um empate!!!\n");
  }
    break;

  case 2:
    // comparação da área
    printf("\nComparação do atributo área\n");
    printf("Carta 1 - %s: %.2f \n", nome_da_cidade, area);
    printf("Carta 2 - %s: %.2f \n", nome_da_cidade2, area2);
    if(area > area2){
      printf("*** Carta 1 - %s venceu!!! ***\n",nome_da_cidade);
    }else if (area < area2){
      printf("*** Carta 2 - %s venceu!!! ***\n",nome_da_cidade2);
    }else{
      printf("Houve um empate!!!\n");
    }

    break;

  case 3:
    // comparação da PIB
    printf("\nComparação do atributo PIB\n");
    printf("Carta 1 - %s: %.2f \n", nome_da_cidade, pib);
    printf("Carta 2 - %s: %.2f \n", nome_da_cidade2, pib2);
    if(pib > pib2){
      printf("*** Carta 1 - %s venceu!!! ***\n",nome_da_cidade);
    }else if(pib < pib2) {
      printf("*** Carta 2 - %s venceu!!! ***\n",nome_da_cidade2);
    }else{
      printf("Houve um empate!!!\n");
    }
    break;

  case 4:
    // comparação de número de pontos turísticos
    printf("\nComparação do atributo número de pontos turísticos\n");
    printf("Carta 1 - %s: %.d \n", nome_da_cidade, numero_de_pontos_turisticos);
    printf("Carta 2 - %s: %.d \n", nome_da_cidade2, numero_de_pontos_turisticos2);
    if(numero_de_pontos_turisticos > numero_de_pontos_turisticos2){
      printf("*** Carta 1 - %s venceu!!! ***\n",nome_da_cidade);
    }else if (numero_de_pontos_turisticos < numero_de_pontos_turisticos2){
      printf("*** Carta 2 - %s venceu!!! ***\n",nome_da_cidade2);
    }else{
      printf("Houve um empate!!!\n");
    }
    break;

  case 5:
    // comparação da densidade populacional
    printf("\nComparação do atributo densidade populacional\n");
    printf("Carta 1 - %s: %.2f \n", nome_da_cidade, densidade_populacional);
    printf("Carta 2 - %s: %.2f \n", nome_da_cidade2, densidade_populacional2);
    if(densidade_populacional < densidade_populacional2){
      printf("*** Carta 1 - %s venceu!!! ***\n",nome_da_cidade);
    }else if(densidade_populacional > densidade_populacional2) {
      printf("*** Carta 2 - %s venceu!!! ***\n",nome_da_cidade2);
    }else{
      printf("Houve um empate!!!\n");
    }
      break;

  default:
    printf("Você digitou um valor inválido!!!");
    break;
  }

  return 0;
}