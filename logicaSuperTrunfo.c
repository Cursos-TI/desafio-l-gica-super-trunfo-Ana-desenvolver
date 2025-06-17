#include <stdio.h>

int main() {
    printf("Bem vindo ao Desafio Lógica Super Trunfo\n");

    // Declaração das Variáveis da primeira carta
    char estado[50], nomeCidade[50], codigoCarta[10];
    int populacao, pontosTuristicos;
    float area, pib, densidadepopulacional, pibpercapita;

    printf("carta 1:\n");

    printf("Digite a letra do primeiro estado:\n");
    scanf("%s", estado);

    printf("Digite o nome da primeira cidade do primeiro estado:\n");
    scanf("%s", nomeCidade);

    printf("Digite o código da carta:\n");
    scanf("%s", codigoCarta);
    printf("codigoCarta %s - Cadastrada!\n", codigoCarta);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;

    printf("\nInformações da cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Nome: %s\n", nomeCidade);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("População: %d habitantes\n", populacao);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidadepopulacional);
    printf("PIB per capita: %.2f\n", pibpercapita);

    printf("\n");

    // Declaração das Variáveis da segunda carta
    char estado2[50], nomeCidade2[50], codigoCarta2[10];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadepopulacional2, pibpercapita2;

    printf("carta 2:\n");

    printf("Digite a letra do segundo estado:\n");
    scanf("%s", estado2);

    printf("Digite o nome da cidade do segundo estado:\n");
    scanf("%s", nomeCidade2);

    printf("Digite o código da carta:\n");
    scanf("%s", codigoCarta2);
    printf("codigoCarta %s - Cadastrada!\n", codigoCarta2);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("\nInformações da cidade:\n");
    printf("Estado: %s\n", estado2);
    printf("Nome: %s\n", nomeCidade2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("População: %d habitantes\n", populacao2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    // Menu de escolha do usuário
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s...\n", nomeCidade, nomeCidade2);

    
    

    return 0;
}
