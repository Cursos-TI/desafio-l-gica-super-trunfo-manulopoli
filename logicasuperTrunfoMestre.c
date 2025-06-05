#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    int resultado1, resultado2;
    int opcao1, opcao2;
    float valor1_a = 0, valor1_b = 0, valor2_a = 0, valor2_b = 0;
    float soma1 = 0, soma2 = 0;


    printf("*** Desafio Super Trunfo - Países ***\n");
       
    // Cadastro das Cartas:
    //Dados Carta 1
    printf("\nCarta 1 \n");

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
    printf("\nCarta 2 \n");

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
    printf ("\nComparando as Cartas:\n");

    //Início do jogo:
    //Escolha do primeiro atributo:
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    
    printf("\nAtributo escolhido: ");
    scanf("%d", &opcao1);

    //Escolha do segundo atributo:
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("\nAtributo escolhido: ");
    scanf("%d", &opcao2);

     // Verificação: atributos não podem ser iguais
    if (opcao1 == opcao2) {
        printf("\nErro: você não pode escolher o mesmo atributo duas vezes!\n");
        exit(1);  // Termina o programa
    }


    switch (opcao1) {
                
      case 1:
        printf("\nPopulação:\n");
        printf("%s: %d habitantes\n", pais1, populacao1);
        printf("%s: %d habitantes\n", pais2, populacao2);
        valor1_a = populacao1;
        valor1_b = populacao2;
        printf("Vencedor: %s\n", (valor1_a > valor1_b) ? pais1 : (valor1_b > valor1_a) ? pais2 : "Empate");
      break;

      case 2:
        printf("\nÁrea:\n");
        printf("%s: %.2f km²\n", pais1, area1);
        printf("%s: %.2f km²\n", pais2, area2);
        valor1_a = area1;
        valor1_b = area2;
        printf("Vencedor: %s\n", (valor1_a > valor1_b) ? pais1 : (valor1_b > valor1_a) ? pais2 : "Empate");
      break;

      case 3:
        printf("\nPIB:\n");
        printf("%s: %.2f bilhões\n", pais1, pib1);
        printf("%s: %.2f bilhões\n", pais2, pib2);
        valor1_a = pib1;
        valor1_b = pib2;
        printf("Vencedor: %s\n", (valor1_a > valor1_b) ? pais1 : (valor1_b > valor1_a) ? pais2 : "Empate");
      break;
    
      case 4:
        printf("\nNúmero de Pontos Turísticos:\n");
        printf("%s: %d pontos\n", pais1, NumeroPontosTuristicos1);
        printf("%s: %d pontos\n", pais2, NumeroPontosTuristicos2);
        valor1_a = NumeroPontosTuristicos1;
        valor1_b = NumeroPontosTuristicos2;
        printf("Vencedor: %s\n", (valor1_a > valor1_b) ? pais1 : (valor1_b > valor1_a) ? pais2 : "Empate");
      break;
    
      case 5:
        printf("\nDensidade Demográfica:\n");
        printf("%s: %.2f hab/km²\n", pais1, densidadeDemografica1);
        printf("%s: %.2f hab/km²\n", pais2, densidadeDemografica2);
        valor1_a = densidadeDemografica1;
        valor1_b = densidadeDemografica2;
        printf("Vencedor: %s\n", (valor1_a < valor1_b) ? pais1 : (valor1_b < valor1_a) ? pais2 : "Empate");
      break;

      default:
        printf("\nOpção inválida! Tente novamente!\n");
      break;
      }

    switch (opcao2) {
                
      case 1:
        printf("\nPopulação:\n");
        printf("%s: %d habitantes\n", pais1, populacao1);
        printf("%s: %d habitantes\n", pais2, populacao2);
        valor2_a = populacao1;
        valor2_b = populacao2;
        printf("Vencedor: %s\n", (valor2_a > valor2_b) ? pais1 : (valor2_b > valor2_a) ? pais2 : "Empate");
      break;

      case 2:
        printf("\nÁrea:\n");
        printf("%s: %.2f km²\n", pais1, area1);
        printf("%s: %.2f km²\n", pais2, area2);
        valor2_a = area1;
        valor2_b = area2;
        printf("Vencedor: %s\n", (valor2_a > valor2_b) ? pais1 : (valor2_b > valor2_a) ? pais2 : "Empate");
      break;

      case 3:
        printf("\nPIB:\n");
        printf("%s: %.2f bilhões\n", pais1, pib1);
        printf("%s: %.2f bilhões\n", pais2, pib2);
        valor2_a = pib1;
        valor2_b = pib2;
        printf("Vencedor: %s\n", (valor2_a > valor2_b) ? pais1 : (valor2_b > valor2_a) ? pais2 : "Empate");

      break;
    
      case 4:
        printf("\nNúmero de Pontos Turísticos:\n");
        printf("%s: %d pontos\n", pais1, NumeroPontosTuristicos1);
        printf("%s: %d pontos\n", pais2, NumeroPontosTuristicos2);
        valor2_a = NumeroPontosTuristicos1;
        valor2_b = NumeroPontosTuristicos2;
        printf("Vencedor: %s\n", (valor2_a > valor2_b) ? pais1 : (valor2_b > valor2_a) ? pais2 : "Empate");
      break;
    
      case 5:
        printf("\nDensidade Demográfica:\n");
        printf("%s: %.2f hab/km²\n", pais1, densidadeDemografica1);
        printf("%s: %.2f hab/km²\n", pais2, densidadeDemografica2);
        valor2_a = densidadeDemografica1;
        valor2_b = densidadeDemografica2;
        printf("Vencedor: %s\n", (valor2_a < valor2_b) ? pais1 : (valor2_b < valor2_a) ? pais2 : "Empate");
      break;

      default:
        printf("\nOpção inválida! Tente novamente!\n");
      break;
      }

    // Lógica de comparação entre duas cartas:

    printf("\nComparando as cartas %s e %s:\n", pais1, pais2);

   // Soma dos atributos
    soma1 = valor1_a + valor2_a;
    soma2 = valor1_b + valor2_b;

  // Resultado Final
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    if (soma1 > soma2)
    {
        printf("\nResultado Final: %s venceu!\n", pais1);
    }
    else if (soma2 > soma1)
    {
        printf("\nResultado: %s venceu!\n", pais2);
    }
    else
    {
        printf("\nResultado: Empate!\n");
        }

    return 0;
}

