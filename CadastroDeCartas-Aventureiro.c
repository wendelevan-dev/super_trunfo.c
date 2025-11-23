#include <stdio.h>

// Desafio Super Trunfo - Nível Novato
// Tema 1 - Cadastro das cartas

int main(){
  
   // Área para definição das variáveis para armazenar as propriedades das cidades, Carta 01
   char estado1[20];
   char codigo1[20];
   char cidade1[20];
   int populacao1;
   float area1;
   float pib1;
   int pontosturisticos1;

   // Área para definição das variáveis para armazenar as propriedades das cidades, Carta 02
   char estado2[20];
   char codigo2[20];
   char cidade2[20];
   int populacao2;
   float area2;
   float pib2;
   int pontosturisticos2;
   

   // Área para entrada de dados, Carta01
   printf("Desafio Super Trunfo!\n");
   printf("Carta 01\n");
   printf("Digite o Estado (A, B): \n");
     scanf("%s", &estado1);
   printf("Digite o Código da Carta (ex: A01, B02): \n");
     scanf("%s", &codigo1);
   printf("Nome da Cidade: \n");
     scanf("%s", &cidade1);
   printf("Quantidade de Habitantes: \n");
     scanf("%d", &populacao1);
   printf("Digite a Área (em km²): \n");
     scanf("%f", &area1);
   printf("PIB da Cidade: ");
     scanf("%f", &pib1);
   printf("Quantidade de Pontos Turísticos: \n");
     scanf("%d", &pontosturisticos1);


   // Área para entrada de dados, Carta02
   printf("Carta 02\n");
   printf("Digite o Estado (A, B): \n");
     scanf("%s", &estado2);
   printf("Digite o Código da Carta (ex: A01, B02): \n");
     scanf("%s", &codigo2);
   printf("Nome da Cidade: \n");
     scanf("%s", &cidade2);
   printf("Quantidade de Habitantes: \n");
     scanf("%d", &populacao2);
   printf("Digite a Área (em km²): \n");
     scanf("%f", &area2);
   printf("PIB da Cidade: ");
     scanf("%f", &pib2);
   printf("Quantidade de Pontos Turísticos: \n");
     scanf("%d", &pontosturisticos2);


    // Área para cálculos derivados da carta01
   float densidade1 = (float)populacao1 / area1;
   float pibpercapita1 = (float)pib1 / populacao1;
   
    // Área para cálculos derivados da carta02
   float densidade2 = populacao2 / area2;
   float pibpercapita2 = pib2 / populacao2;



   // Área para exibição dos dados das cartas
   printf("Carta 01: \n");
   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f\n", pib1);
   printf("Pontos Turísticos: %d\n", pontosturisticos1);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
   printf("PIB per Capita: %.2f\n", pibpercapita1);

   printf("Carta 02: \n");
   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Pontos Turísticos: %d\n", pontosturisticos2);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
   printf("PIB per Capita: %.2f\n", pibpercapita2);


   return 0;

} 