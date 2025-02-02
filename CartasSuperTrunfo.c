// Nível 3 - Mestre

// Adições no Programa

// Comparação de Cartas:
// O sistema permitirá ao usuário comparar duas cartas com base nas propriedades inseridas e calculadas.
// Cada carta terá um "Super Poder", que é a soma de todas as propriedades.

#include <stdio.h>
#include <string.h>

typedef struct
{
     // criação das variáveis que montam as cartas

    int codigoCidade;
    char nomeCidade[50];
    int populacaoCidade;
    float areaCidade;
    float pibCidade;
    int pontosTuristicosCidade;

    // propriedades derivadas de duas variáveis

    float densidadePopulacional;
    float pibPerCapita;
} Carta;

 int main()
 {
    // declaração da array das cartas

    Carta cartas[2];
    int i;

    for ( i = 0; i < 2; i++)
    {
        printf("Insira os dados da Carta %d\n", i + 1);
        // Leitura dos dados das cartas e gravação nas variáveis

        printf("Insira o Código da Cidade: \n");
        scanf("%d", &cartas[i].codigoCidade);

        // Consumir o '\n' deixado pelo scanf
        getchar();

        printf("Insira o Nome da Cidade: \n");
        // Lê o nome da cidade (permitindo espaços)
        fgets(cartas[i].nomeCidade, sizeof(cartas[i].nomeCidade), stdin);
        // Remove o '\n' (quebra de linha) se presente
        cartas[i].nomeCidade[strcspn(cartas[i].nomeCidade, "\n")] = '\0';

        printf("Insira o Número de Habitantes da Cidade: \n");
        scanf("%d", &cartas[i].populacaoCidade);

        printf("Insira a Área da Cidade em km²: \n");
        scanf("%f", &cartas[i].areaCidade);

        printf("Insira o PIB da Cidade: \n");
        scanf("%f", &cartas[i].pibCidade);

        printf("Insira a quantidade de Pontos Turísticos da Cidade: \n");
        scanf("%d", &cartas[i].pontosTuristicosCidade);

        // cálculo das variáveis derivadas

        cartas[i].densidadePopulacional = cartas[i].populacaoCidade / cartas[i].areaCidade;
        cartas[i].pibPerCapita = cartas[i].pibCidade / cartas[i].populacaoCidade;
    
    }
    
    // Comparação dos PONTOS de cada Carta
    // P/ cada propriedade, a Carta com o valor maior recebe 1 ponto

    int pontosCarta[2] = {0, 0};

    // Comparação da População

    if (cartas[0].populacaoCidade > cartas[1].populacaoCidade)
    {
        pontosCarta[0]++;
    }

    else if (cartas[0].populacaoCidade < cartas[1].populacaoCidade)
    {
        pontosCarta[1]++;
    }
    
    // Comparação da Área
    
    if (cartas[0].areaCidade > cartas[1].areaCidade)
    {
        pontosCarta[0]++;
    }

    else if (cartas[0].areaCidade < cartas[1].areaCidade)
    {
        pontosCarta[1]++;
    }
    
    // Comparação do PIB
    
    if (cartas[0].pibCidade > cartas[1].pibCidade)
    {
        pontosCarta[0]++;
    }

    else if (cartas[0].pibCidade < cartas[1].pibCidade)
    {
        pontosCarta[1]++;
    }
    
    // Comparação dos Pontos Turísticos
    
    if (cartas[0].pontosTuristicosCidade > cartas[1].pontosTuristicosCidade)
    {
        pontosCarta[0]++;
    }

    else if (cartas[0].pontosTuristicosCidade < cartas[1].pontosTuristicosCidade)
    {
        pontosCarta[1]++;
    }

    // Comparação da Densidade Populacional
    
    if (cartas[0].densidadePopulacional > cartas[1].densidadePopulacional)
    {
        pontosCarta[0]++;
    }

    else if (cartas[0].densidadePopulacional < cartas[1].densidadePopulacional)
    {
        pontosCarta[1]++;
    }

    // Comparação do PIB Per Capita
    
    if (cartas[0].pibPerCapita > cartas[1].pibPerCapita)
    {
        pontosCarta[0]++;
    }

    else if (cartas[0].pibPerCapita < cartas[1].pibPerCapita)
    {
        pontosCarta[1]++;
    }


    // Exibindo o resultado das comparações

    printf("Resultado das Comparações entre as Cartas\n");
    printf("Carta 1 (%s): %d pontos\n", cartas[0].nomeCidade, pontosCarta[0]);
    printf("Carta 2 (%s): %d pontos\n", cartas[1].nomeCidade, pontosCarta[1]);

    // Decidindo a Carta Vencedora

    if (pontosCarta[0] > pontosCarta[1])
    {
        printf("A Carta 1 - (%s) é a VENCEDORA!\n", cartas[0].nomeCidade);
    }

    else if (pontosCarta[0] < pontosCarta[1])
    {
        printf("A Carta 2 - (%s) é a VENCEDORA!\n", cartas[1].nomeCidade);
    }

    else
    {
        printf("Empate!\n");
    }
    
    

    return 0;
 };
