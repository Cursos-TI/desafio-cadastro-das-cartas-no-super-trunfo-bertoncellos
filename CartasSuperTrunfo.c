#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() 
    {
    // Declaração das Variáveis

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

    // printf single line (mais eficiente na execução. mas fica mais difícil para dar manutenção no código)
    //printf("O Código da Cidade é: %d \n O Nome da Cidade é: %s\n A Cidade %s tem: %d habitantes\n A Área da Cidade %s é de: %.2f km²\n O PIB da Cidade %s é de: R$%.2f\n A Cidade %s tem: %d Pontos Turísticos\n", codigoCidade, nomeCidade, nomeCidade, populacaoCidade, nomeCidade, areaCidade, nomeCidade, pibCidade, nomeCidade, pontosTuristicosCidade);

    // printf separado por cada output (menos eficiente)
    // mais fácil de dar manutenção no código (prefiro assim)
    printf("O Código da Cidade é: %d\n", codigoCidade);
    printf("O Nome da Cidade é: %s\n", nomeCidade);
    printf("A Cidade %s tem: %d habitantes\n", nomeCidade, populacaoCidade);
    printf("A Área da Cidade %s é de: %.2f km²\n", nomeCidade, areaCidade);
    printf("O PIB da Cidade %s é de: R$%.2f\n", nomeCidade, pibCidade);
    printf("A Cidade %s tem: %d Pontos Turísticos\n", nomeCidade, pontosTuristicosCidade);


    return 0;
    }
