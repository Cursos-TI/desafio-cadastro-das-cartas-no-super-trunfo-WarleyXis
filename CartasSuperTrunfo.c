#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigoCarta1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Entrada dos dados da primeira carta
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado1);  // %c com espaço antes para consumir quebras de linha

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%3s", codigoCarta1);  // limita a 3 caracteres para segurança

    printf("O nome da cidade:\n");
    scanf(" %[^\n]", nomecidade1);  // lê com espaços

    printf("O número de habitantes da cidade:\n");
    scanf("%d", &populacao1);

    printf("A área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);

    printf("O Produto Interno Bruto da cidade (PIB):\n");
    scanf("%f", &pib1);

    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontosturisticos1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigoCarta2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Entrada dos dados da segunda carta
    printf("\nUma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado2);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%3s", codigoCarta2);

    printf("O nome da cidade:\n");
    scanf(" %[^\n]", nomecidade2);  // lê com espaços

    printf("O número de habitantes da cidade:\n");
    scanf("%d", &populacao2);

    printf("A área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);

    printf("O Produto Interno Bruto da cidade (PIB):\n");
    scanf("%f", &pib2);

    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}

