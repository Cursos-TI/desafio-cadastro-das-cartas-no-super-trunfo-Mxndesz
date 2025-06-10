#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas

int main() {
    // Variáveis para armazenar os dados das duas cidades
    char cidade1[20], cidade2[20]; 
    int populacao1, populacao2;
    float area1, area2; 
    float PIB1, PIB2;

    // Cadastro da primeira cidade
    printf("Cadastro da primeira cidade:\n");
    printf("Nome da cidade: ");
    scanf("%s", cidade1); // lê apenas uma palavra (sem espaços)

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &PIB1);

    // Cadastro da segunda cidade
    printf("\nCadastro da segunda cidade:\n");
    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &PIB2);

    // Exibição dos dados das cartas
    printf("\n---- CARTAS CADASTRADAS ----\n");

    printf("Cidade 1: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);

    printf("\nCidade 2: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);

    return 0;
}
