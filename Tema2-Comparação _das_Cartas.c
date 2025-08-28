#include <stdio.h>

int main() {
    // --- Dados das Cartas Pre-definidos no codigo ---
    
    // Dados da primeira carta (exemplo: São Paulo)
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char nome1[] = "Sao Paulo";
    unsigned long int populacao1 = 12396372;
    int pontosturisticos1 = 60;
    float area1 = 1521.1f;
    float pib1 = 699.4f;

    // Dados da segunda carta (exemplo: Rio de Janeiro)
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char nome2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6775561;
    int pontosturisticos2 = 50;
    float area2 = 1200.3f;
    float pib2 = 354.3f;
    
    // --- Calculos dos atributos derivados (Densidade Populacional e PIB per Capita) ---
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibpercapita1 = pib1 / populacao1;
    float pibpercapita2 = pib2 / populacao2;
    
    // --- Exibicao dos dados (Opcional, mas recomendado para conferir os valores) ---
    printf("=== Dados da Carta 1 ===\n");
    printf("Cidade: %s (%s)\n", nome1, estado1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);

    printf("=== Dados da Carta 2 ===\n");
    printf("Cidade: %s (%s)\n", nome2, estado2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita2);

    // --- Comparacao de um unico atributo (pre-definido no codigo) ---
    // Atributo escolhido para comparacao: População
    printf("--- Comparacao de Cartas (Atributo: Populacao) ---\n");
    printf("Carta 1 - %s (%s): %lu\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nome2, estado2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}