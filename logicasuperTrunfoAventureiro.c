#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível aventureiro - Comparação das Cartas usando Switch

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char pais1 [20];
    char pais2 [20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int NumeroPontosTuristicos1;
    int NumeroPontosTuristicos2;
    float densidadeDemografica1;
    float densidadeDemografica2;
    int opcao;

    printf ("*** Desafio Super Trunfo - Países *** \n");
       
    // Cadastro das Cartas:
    //Dados Carta 1
    printf("Carta 1 \n");

    printf("Digite o País:");
    scanf("%s", pais1);
 
    printf("Digite a População:");
    scanf("%d", &populacao1);

    printf("Digite a Área:");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &NumeroPontosTuristicos1);

    //Cálculo da densidade populacional da Carta 1
    densidadeDemografica1 = (float) populacao1 / area1;

    printf("Densidade Demográfica: %.2f habitantes por km²\n", densidadeDemografica1);

    //Dados Carta 2
    printf("Carta 2 \n");

    printf("Digite o País:");
    scanf("%s", pais2);

    printf("Digite a População:");
    scanf("%d", &populacao2);

    printf("Digite a Área:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &NumeroPontosTuristicos2);

    //Cálculo da densidade populacional e PIB per capita da Carta 2
    densidadeDemografica2 = (float) populacao2 / area2;

    printf("Densidade Demográfica: %.2f habitantes por km²\n", densidadeDemografica2);


    // Comparação de Cartas:

    printf ("Comparando as Cartas:\n");

    // Lógica de comparação entre duas cartas:

    printf("Escolha um dos atributos abaixo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha a opção desejada: \n");
    scanf("%d", &opcao);

    switch (opcao) { 
    case 1:
      printf("População - %s é %d\n", pais1, populacao1);
      printf("População - %s é %d\n", pais2, populacao2);

      if (populacao1 > populacao2) {
      printf("*** Carta 1 venceu!!! ***\n");
    
    }  else if (populacao1 < populacao2) {
      printf ("*** Carta 2 venceu!!! ***\n");

    }  else {
        printf ("*** Empatou!!! ***\n");
    }
    break;

    case 2:
      printf("Área - %s é %f\n", pais1, area1);
      printf("Área - %s é %f\n", pais2, area2);
       
       if (area1 > area2) {
      printf("*** Carta 1 venceu!!! ***\n");
    
    }  else if (area1 < area2) {
      printf ("*** Carta 2 venceu!!! ***\n");

    }  else {
        printf ("*** Empatou!!! ***\n");
    }
      break;

    case 3:
      printf("PIB - %s é %f\n", pais1, pib1);
      printf("PIB - %s é %f\n", pais2, pib2);

        if (pib1 > pib2) {
      printf("*** Carta 1 venceu!!! ***\n");
    
    }  else if (pib1 < pib2) {
      printf ("*** Carta 2 venceu!!! ***\n");

    }  else {
        printf ("*** Empatou!!! ***\n");
    }
      break;
    
    case 4:
      printf("Número de Pontos Turísticos - %s é %d\n", pais1, NumeroPontosTuristicos1);
      printf("Número de Pontos Turísticos - %s é %d\n", pais2, NumeroPontosTuristicos2);

       if (NumeroPontosTuristicos1 > NumeroPontosTuristicos2) {
      printf("*** Carta 1 venceu!!! ***\n");
    
    }  else if (NumeroPontosTuristicos1 < NumeroPontosTuristicos2) {
      printf ("*** Carta 2 venceu!!! ***\n");

    }  else {
        printf ("*** Empatou!!! ***\n");
    }
      break;
    
    case 5:
      printf("Densidade Demográfica - %s é %f\n", pais1, densidadeDemografica1);
      printf("Densidade Demográfica - %s é %f\n", pais2, densidadeDemografica1);
      
       if (densidadeDemografica1 < densidadeDemografica2) {
      printf("*** Carta 1 venceu!!! ***\n");
    
    }  else if (densidadeDemografica1 > densidadeDemografica2) {
      printf ("*** Carta 2 venceu!!! ***\n");

    }  else {
        printf ("*** Empatou!!! ***\n");
    }
      break;

    default:
      printf("Opção inválida! Tente novamente!\n");
      break;
      
   }

    return 0;
}
