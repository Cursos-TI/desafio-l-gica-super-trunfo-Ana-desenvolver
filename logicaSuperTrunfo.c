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
    int opcao; // Declaração da variável para armazenar a escolha do jogador

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua opção: ");

// Lê a opção escolhida pelo jogador
    scanf("%d", &opcao);

// Exibe quais cidades estão sendo compardas
    printf("\nComparando %s e %s...\n", nomeCidade, nomeCidade2);

// Estrutura switch, realiza a ação de acordo com a opção escolhida
    switch (opcao) {
        
        case 1: // Caso o jogador escolha comparar População
            printf("Atributo: População\n");
            printf("%s: %d | %s: %d\n", nomeCidade, populacao, nomeCidade2, populacao2);
            // Compara os valores usando o if-else
            if (populacao > populacao2) {
                printf("Vencedor: %s\n", nomeCidade); // Vence quem tiver a maior população
            } else if (populacao < populacao2) {
                printf("Vencedor: %s\n", nomeCidade2);
            } 
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f | %s: %.2f\n", nomeCidade, area, nomeCidade2, area2);
            if (area > area2) {
                printf("Vencedor: %s\n", nomeCidade);
            } else if (area < area2) {
                printf("Vencedor: %s\n", nomeCidade2);
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f | %s: %.2f\n", nomeCidade, pib, nomeCidade2, pib2);
            if (pib > pib2) {
                printf("Vencedor: %s\n", nomeCidade);
            } else if (pib < pib2) {
                printf("Vencedor: %s\n", nomeCidade2);
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d | %s: %d\n", nomeCidade, pontosTuristicos, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos > pontosTuristicos2) {
                printf("Vencedor: %s\n", nomeCidade);
            } else if (pontosTuristicos < pontosTuristicos2) {
                printf("Vencedor: %s\n", nomeCidade2);
            }
            break;

        case 5: // Densidade populacional, regra invertida. Vence quem tiver a menor densidade
            printf("Atributo: Densidade Populacional (quanto menor, melhor)\n");
            
            if (densidadepopulacional < densidadepopulacional2) {
                printf("Vencedor: %s\n", nomeCidade);
            } else if (densidadepopulacional > densidadepopulacional2) {
                printf("Vencedor: %s\n", nomeCidade2);
            }
            break;

        default:
        // Caso o jogador digite uma opção inválida
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

