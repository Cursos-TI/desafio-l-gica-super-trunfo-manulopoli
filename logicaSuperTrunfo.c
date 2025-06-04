#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1 [20];
    char estado2 [20];
    char codigo1 [20];
    char codigo2 [20];
    char cidade1 [25];
    char cidade2 [25];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int NumeroPontosTuristicos1;
    int NumeroPontosTuristicos2;
    int pibpercapta1;
    int pibpercapta2;

    printf ("*** Desafio Super Trunfo - Países *** \n");
       
    // Cadastro das Cartas:
    //Dados Carta 1
    printf("Carta 1 \n");

    printf("Digite o Estado:");
    scanf("%s", &estado1);

    printf("Digite o Codigo:");
    scanf("%s", &codigo1);

    printf("Digite a Cidade:");
    scanf("%s", &cidade1);

    printf("Digite a População:");
    scanf("%d", &populacao1);

    printf("Digite a Área:");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &NumeroPontosTuristicos1);

    //Cálculo da densidade populacional e PIB per capita da Carta 1
    float densidadePopulacional1 = (float) populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    //Dados Carta 2
    printf("Carta 2 \n");

    printf("Digite o Estado:");
    scanf("%s", &estado2);

    printf("Digite o Codigo:");
    scanf("%s", &codigo2);

    printf("Digite a Cidade:");
    scanf("%s", &cidade2);

    printf("Digite a População:");
    scanf("%d", &populacao2);

    printf("Digite a Área:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &NumeroPontosTuristicos2);

    //Cálculo da densidade populacional e PIB per capita da Carta 2
    float densidadePopulacional2 = (float) populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);


    // Comparação de Cartas:

    printf ("Comparando as Cartas - PIB per capta:\n");

    // Lógica de comparação entre duas cartas:
   
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf ("Resultado: Carta 1 (%s) venceu!\n", cidade1 );

    }else {
        printf ("Resultado: Carta 2 (%s) venceu!\n", cidade2);


    }
    return 0;


}
