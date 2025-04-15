#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis para a Carta 1
    char Estado1[50], Codigo1[50], cidade1[50];
    int Populacao1;
    float Area1, PIB1, Pontos_Turisticos1;

    // Variáveis para a Carta 2
    char Estado2[50], Codigo2[50], cidade2[50];
    int Populacao2;
    float Area2, PIB2, Pontos_Turisticos2;

    // Entrada de dados para a Carta 1
    printf("Carta 1: \n");

    printf("Sigla do estado: ");
    scanf("%s", Estado1);

    printf("Digite o codigo do estado: ");
    scanf("%s", Codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &Populacao1); 

    printf("Área (em km²): ");
    scanf("%f", &Area1); 

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: ");
    scanf("%f", &Pontos_Turisticos1);

    // Entrada de dados para a Carta 2
    printf("\nCarta 2: \n");

    printf("Sigla do estado: ");
    scanf("%s", Estado2);

    printf("Digite o codigo do estado: ");
    scanf("%s", Codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &Populacao2); 

    printf("Área (em km²): ");
    scanf("%f", &Area2); 

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos: ");
    scanf("%f", &Pontos_Turisticos2);

    // Saída de dados para a Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s \nCódigo do estado: %s \nNome da cidade: %s\n", Estado1, Codigo1, cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área (em km²): %.2f \nPIB: %.2f \nNúmero de Pontos Turísticos: %.2f\n", Area1, PIB1, Pontos_Turisticos1);

    // Saída de dados para a Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s \nCódigo do estado: %s \nNome da cidade: %s\n", Estado2, Codigo2, cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área (em km²): %.2f \nPIB: %.2f \nNúmero de Pontos Turísticos: %.2f\n", Area2, PIB2, Pontos_Turisticos2);

    return 0;
}
