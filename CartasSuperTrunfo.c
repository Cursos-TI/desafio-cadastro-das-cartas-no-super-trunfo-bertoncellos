// Nível 2 - Aventureiro

// Adições mo Programa

// Densidade Populacional: População dividida pela área da cidade.
// PIB per Capita: PIB total dividido pela população.

#include <stdio.h>

int main()
{
    
 int codigoCidade;
    char nomeCidade[50];
    int populacaoCidade;
    float areaCidade;
    float pibCidade;
    int pontosTuristicosCidade;

    // Leitura dos dados das cartas e gravação nas variáveis

    printf("Insira o Código da Cidade: \n");
    scanf("%d", &codigoCidade);

    printf("Insira o Nome da Cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Insira o Número de Habitantes da Cidade: \n");
    scanf("%d", &populacaoCidade);

    printf("Insira a Área da Cidade em km²: \n");
    scanf("%f", &areaCidade);

    printf("Insira o PIB da Cidade: \n");
    scanf("%f", &pibCidade);

    printf("Insira a quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &pontosTuristicosCidade);
    
    // Impressão das informações das cartas

    float densidadePopulacional = populacaoCidade / areaCidade;

    float pibPerCapita = pibCidade / populacaoCidade;

    printf("O Código da Cidade é: %d\n", codigoCidade);
    printf("O Nome da Cidade é: %s\n", nomeCidade);
    printf("A Cidade %s tem: %d habitantes\n", nomeCidade, populacaoCidade);
    printf("A Área da Cidade %s é de: %.2f km²\n", nomeCidade, areaCidade);
    printf("O PIB da Cidade %s é de: R$%.2f\n", nomeCidade, pibCidade);
    printf("A Cidade %s tem: %d Pontos Turísticos\n", nomeCidade, pontosTuristicosCidade);
    printf("A Densidade Populacional da Cidade %s é de aproximadamente %.1f habitantes/km²\n", nomeCidade, densidadePopulacional);
    printf("O PIB Per Capita da Cidade %s é de R$%.2f/habitante", nomeCidade, pibPerCapita);

    return 0;
}
