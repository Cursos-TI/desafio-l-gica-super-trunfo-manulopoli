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
    char primeiroatributo, segundoatributo;
    float valor1_a, valor1_b, valor2_a, valor2_b;


    printf("*** Desafio Super Trunfo - Países ***\n");
       
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

    //Início do jogo:
    //Escolha do primeiro atributo:
    printf("Escolha o primeiro atributo:\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Número de Pontos Turísticos\n");
    printf("E. Densidade Demográfica\n");
    
    printf("Escolha a comparação: ");
    scanf("%s", opcao1);
    

    switch (primeiroatributo) {
                
      case 'A':
      case 'a':
        printf("Você escolheu a opção População!\n");
        valor1_a = populacao1;
        valor1_b = populacao2;
      break;

      case 'B':
      case 'b':
        printf("Você escolheu a opção Área!\n");
        valor1_a = area1;
        valor1_b = area2;
      break;

      case 'C':
      case 'c':
        printf("Você escolheu a opção PIB!\n");
        valor1_a = pib1;
        valor1_b = pib2;
      break;
    
      case 'D':
      case 'd':
        printf("Você escolheu a opção Número de Pontos Turísticos!\n");
        valor1_a = NumeroPontosTuristicos1;
        valor1_b = NumeroPontosTuristicos2;
      break;
    
      case 'E':
      case 'e':
        printf("Você escolheu a opção Densidade Demográfica!\n");
        valor1_a = densidadeDemografica1;
        valor1_b = densidadeDemografica2;
      break;

      default:
        printf("Opção inválida! Tente novamente!\n");
      break;
      }

   //Escolha do segundo atributo:
    printf("Escolha o segundo atributo:\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Número de Pontos Turísticos\n");
    printf("E. Densidade Demográfica\n");
    
    printf("Escolha a comparação: \n");
    scanf("%s", opcao2);
        if (primeiroatributo == segundoatributo) {
            printf("Você escolheu o mesmo atributo!\n");
        } else {

            switch (segundoatributo) {
                
            case 'A':
            case 'a':
                printf("Você escolheu a opção População!\n");
                valor1_a = populacao1;
                valor1_b = populacao2;
            break;

            case 'B':
            case 'b':
                printf("Você escolheu a opção Área!\n");
                valor1_a = area1;
                valor1_b = area2;
            break;

            case 'C':
            case 'c':
                printf("Você escolheu a opção PIB!\n");
                valor1_a = pib1;
                valor1_b = pib2;
            break;
    
            case 'D':
            case 'd':
                printf("Você escolheu a opção Número de Pontos Turísticos!\n");
                valor1_a = NumeroPontosTuristicos1;
                valor1_b = NumeroPontosTuristicos2;
            break;
    
            case 'E':
            case 'e':
                printf("Você escolheu a opção Densidade Demográfica!\n");
                valor1_a = densidadeDemografica1;
                valor1_b = densidadeDemografica2;
            break;

            default:
                printf("Opção inválida! Tente novamente!\n");
            break;
            }

    // Lógica de comparação entre duas cartas:

            printf("\nComparando as cartas %s e %s:\n", pais1, pais2);

             float soma1 = 0, soma2 = 0;

             printf("\nAtributo 1:\n");
             printf("%s: %.2f\n", pais1, valor1_a);
             printf("%s: %.2f\n", pais2, valor2_a);
             soma1 += (opcao1 == 5) ? 1 / valor1_a : valor1_a;
             soma2 += (opcao1 == 5) ? 1 / valor2_a : valor2_a;

            printf("\nAtributo 2:\n");
             printf("%s: %.2f\n", pais1, valor1_b);
             printf("%s: %.2f\n", pais2, valor2_b);
             soma1 += (opcao2 == 5) ? 1 / valor1_b : valor1_b;
             soma2 += (opcao2 == 5) ? 1 / valor2_b : valor2_b;

            if (resultado1 > resultado2) {
              printf("*** A Carta 1 venceu!!! ***\n");
            } else if (resultado1 < resultado2) {
              printf("*** A Carta 2 venceu!!! ***\n");
            } else {
              printf("*** Empatou!!! ***\n");
            }

  // Resultado Final
  printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    if (soma1 > soma2)
    {
        printf("\nResultado: %s venceu!\n", pais1);
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


}
