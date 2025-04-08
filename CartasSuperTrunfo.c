#include <stdio.h>
//Trabalho da faculdade por Renato Chagas (KeniCode)
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

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Solicitação dos dados da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Estado (UF): ");
    scanf(" %c", &estado1);
    limparBuffer();
    
    printf("Codigo da Carta (ex: A1): ");
    scanf("%3s", codigo1);
    limparBuffer();
    
    printf("Nome da Cidade: ");
    scanf(" %50[^\n]", cidade1);
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

    // Exibição dos dados da primeira carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
