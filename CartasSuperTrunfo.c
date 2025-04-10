#include <stdio.h>

// Função para limpar o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    // Solicitação dos dados da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Estado (UF): ");
    scanf(" %c", &estado1);
    limparBuffer();
    
    printf("Codigo da Carta (ex: A1): ");
    scanf("%3s", codigo1);
    limparBuffer();
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);
    limparBuffer();
    
    printf("Populacao: ");
    scanf("%d", &populacao1);
    limparBuffer();
    
    printf("Area (em km2): ");
    scanf("%f", &area1);
    limparBuffer();
    
    printf("PIB (em reais): ");
    scanf("%f", &pib1);
    limparBuffer();
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    limparBuffer();

    // Cálculos para a primeira carta
    // Densidade populacional
    if (area1 > 0) {
        densidade1 = (float)populacao1 / area1;
    } else {
        densidade1 = 0.0;
    }
    printf("Densidade populacional: %.2f habitantes por km2\n", densidade1);
    
    // PIB per capita
    if (populacao1 > 0) {
        pib_per_capita1 = pib1 / populacao1;
    } else {
        pib_per_capita1 = 0.0;
    }
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    // Solicitação dos dados da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Estado (UF): ");
    scanf(" %c", &estado2);
    limparBuffer();
    
    printf("Codigo da Carta (ex: B2): ");
    scanf("%3s", codigo2);
    limparBuffer();
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);
    limparBuffer();
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    limparBuffer();
    
    printf("Area (em km2): ");
    scanf("%f", &area2);
    limparBuffer();
    
    printf("PIB (em reais): ");
    scanf("%f", &pib2);
    limparBuffer();
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    limparBuffer();

    // Cálculos para a segunda carta
    // Densidade populacional
    if (area2 > 0) {
        densidade2 = (float)populacao2 / area2;
    } else {
        densidade2 = 0.0;
    }
    printf("Densidade populacional: %.2f habitantes por km2\n", densidade2);
    
    // PIB per capita
    if (populacao2 > 0) {
        pib_per_capita2 = pib2 / populacao2;
    } else {
        pib_per_capita2 = 0.0;
    }
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f habitantes por km2\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km2\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    // Comparação entre as cartas
    printf("\nComparacao entre as cartas:\n");
    
    if(area1 > area2) {
        printf("Area: carta 1 venceu\n");
    } else if(area2 > area1) {
        printf("Area: carta 2 venceu\n");
    } else {
        printf("Area: empate\n");
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos turisticos: carta 1 venceu\n");
    } else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("Pontos turisticos: carta 2 venceu\n");
    } else {
        printf("Pontos turisticos: empate\n");
    }
    
    if (pib1 > pib2) {
        printf("PIB: carta 1 venceu\n");
    } else if (pib2 > pib1) {
        printf("PIB: carta 2 venceu\n");
    } else {
        printf("PIB: empate\n");
    }

    if (populacao1 > populacao2) {
        printf("Populacao: carta 1 venceu\n");
    } else if (populacao2 > populacao1) {
        printf("Populacao: carta 2 venceu\n");
    } else {
        printf("Populacao: empate\n");
    }

    if (densidade1 > densidade2) {
        printf("Densidade populacional: carta 1 venceu\n");
    } else if (densidade2 > densidade1) {
        printf("Densidade populacional: carta 2 venceu\n");
    } else {
        printf("Densidade populacional: empate\n");
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per capita: carta 1 venceu\n");
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("PIB per capita: carta 2 venceu\n");
    } else {
        printf("PIB per capita: empate\n");
    }

    float superpoder1, superpoder2;
    superpoder1 = (pontos_turisticos1 * 0.5) + (pib_per_capita1 * 0.3) + (densidade1 * 0.2);
    superpoder2 = (pontos_turisticos2 * 0.5) + (pib_per_capita2 * 0.3) + (densidade2 * 0.2);

    if (superpoder1 > superpoder2) {
        printf("Superpoder: carta 1 venceu\n");
    } else if (superpoder2 > superpoder1) {
        printf("Superpoder: carta 2 venceu\n");
    } else {
        printf("Superpoder: empate\n");
    }

    

    return 0;
}
