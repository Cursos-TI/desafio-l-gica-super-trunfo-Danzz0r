#include <stdio.h>

int main() {
    // --- Dados das Cartas Pre-definidos no codigo ---
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char nome1[] = "Sao Paulo";
    unsigned long int populacao1 = 12396372;
    int pontosturisticos1 = 60;
    float area1 = 1521.1f;
    float pib1 = 699.4f;

    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char nome2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6775561;
    int pontosturisticos2 = 50;
    float area2 = 1200.3f;
    float pib2 = 354.3f;
    
    // --- Calculos dos atributos derivados ---
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibpercapita1 = pib1 / populacao1;
    float pibpercapita2 = pib2 / populacao2;
    
    // --- Menu Interativo e Variaveis de Controle ---
    int opcao;
    
    printf("--- Super Trunfo de Cidades ---\n");
    printf("Escolha o atributo para a comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("-------------------------------\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    
    // --- Logica de Comparacao (usando switch) ---
    switch (opcao) {
        case 1:
            printf("\n--- Comparacao: Populacao ---\n");
            printf("Carta 1 (%s): %lu habitantes\n", nome1, populacao1);
            printf("Carta 2 (%s): %lu habitantes\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("\n--- Comparacao: Area ---\n");
            printf("Carta 1 (%s): %.2f km²\n", nome1, area1);
            printf("Carta 2 (%s): %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("\n--- Comparacao: PIB ---\n");
            printf("Carta 1 (%s): %.2f\n", nome1, pib1);
            printf("Carta 2 (%s): %.2f\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 4:
            printf("\n--- Comparacao: Pontos Turisticos ---\n");
            printf("Carta 1 (%s): %d\n", nome1, pontosturisticos1);
            printf("Carta 2 (%s): %d\n", nome2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            // Regra especial: menor valor vence
            printf("\n--- Comparacao: Densidade Demografica ---\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", nome1, densidade1);
            printf("Carta 2 (%s): %.2f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) { // < para densidade
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (densidade2 < densidade1) { // < para densidade
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            printf("\n--- Comparacao: PIB per Capita ---\n");
            printf("Carta 1 (%s): %.2f reais\n", nome1, pibpercapita1);
            printf("Carta 2 (%s): %.2f reais\n", nome2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pibpercapita2 > pibpercapita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Por favor, escolha uma opcao de 1 a 6.\n");
            break;
    }

    return 0;
}