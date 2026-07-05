#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
 char estado1 [50];

    char codigo1 [50];

    char nomecidade1 [50];

    int populacao1;

    float area1;

    float pib1;

    int pontosturisticos1;

    float densidadepopulacional;

    // Carta 2
   char estado2 [50];

    char codigo2 [50];

    char nomecidade2 [50];

    int populacao2;

    float area2;

    float pib2;

    int pontosturisticos2;

    float densidadepopulacional1;

    float densidadepopulacional2;

    float pibpercapita1;
    
    float pibpercapita2;

  // Área para entrada de dados

  printf(" ***Cadastre os Dados da Carta 1*** \n");

printf("Nome do Estado: \n");
    scanf(" %[^\n]", estado1);

  printf("Código da Carta: \n");
    scanf(" %s", codigo1);
    
  printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomecidade1);

  printf("População: \n");
    scanf(" %d", &populacao1);
    
  printf("Área: \n");
    scanf(" %f", &area1);
    
  printf("PIB: \n");
    scanf(" %f", &pib1);

  printf("Pontos Turísticos: \n");
    scanf(" %d", &pontosturisticos1);
    
    densidadepopulacional1 = (float) populacao1 / (float) area1;
    pibpercapita1 = (float) pib1 / (float) populacao1;

    printf(" ***Cadastre os Dados da Carta 2*** \n");

  printf("Nome do Estado: \n");
    scanf(" %[^\n]", estado2);

  printf("Código da Carta: \n");
    scanf(" %s", codigo2);
    
  printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomecidade2);

  printf("População: \n");
    scanf(" %d", &populacao2);
    
  printf("Área: \n");
    scanf(" %f", &area2);
    
  printf("PIB: \n");
    scanf(" %f", &pib2);

  printf("Pontos Turísticos: \n");
    scanf(" %d", &pontosturisticos2);

    densidadepopulacional2 = (float) populacao2 / (float) area2;
    pibpercapita2 = (float) pib2 / populacao2;

  // Área para exibição dos dados da cidade
  printf("***Dados da Carta 1*** \n");
printf("\nCarta 1 \n");
printf("Estado: %s \n", estado1);
printf("Código: %s \n", codigo1);
printf("Nome da Cidade: %s \n", nomecidade1);
printf("População: %d \n", populacao1);
printf("Área: %.2f \n", area1);
printf("PIB: %.2f \n", pib1);
printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);
printf("Densidade Populacional: %.2f \n", densidadepopulacional1);
printf("PIB per Capita: %.2f \n", pibpercapita1);

printf("***Dados da Carta 2*** \n");
printf("Carta 2 \n");
printf("Estado: %s \n", estado2);
printf("Código: %s \n", codigo2);
printf("Nome da Cidade: %s \n", nomecidade2);
printf("População: %d \n", populacao2);
printf("Área: %.2f \n", area2);
printf("PIB: %.2f \n", pib2);
printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
printf("Densidade Populacional: %.2f \n", densidadepopulacional2);
printf("PIB per Capita: %.2f \n", pibpercapita2);

printf("\nPressione Enter para Terminar...");
getchar();

return 0;
} 