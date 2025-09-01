#include <stdio.h>

int main() {
    // --- Dados das Cartas Pre-definidos no codigo ---
    char nome1[] = "Sao Paulo";
    unsigned long int populacao1 = 12396372;
    int pontosturisticos1 = 60;
    float area1 = 1521.1f;
    float pib1 = 699.4f;

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
    
    int opcao1, opcao2;
    
    // --- Menu Interativo para o Primeiro Atributo ---
    printf("--- Super Trunfo: Batalha Final ---\n");
    printf("Escolha o PRIMEIRO atributo para a comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("----------------------------------\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao1);
    
    // Variavel para controlar o fluxo
    int primeira_opcao_valida = 1;

    if (opcao1 < 1 || opcao1 > 6) {
        printf("Opcao invalida. Reinicie o programa e tente novamente.\n");
        primeira_opcao_valida = 0;
    }

    // --- Menu Interativo para o Segundo Atributo ---
    if (primeira_opcao_valida) {
        printf("\nEscolha o SEGUNDO atributo para a comparacao:\n");
        printf("Observacao: Nao e possivel escolher o mesmo atributo novamente.\n");
        
        if (opcao1 != 1) printf("1 - Populacao\n");
        if (opcao1 != 2) printf("2 - Area\n");
        if (opcao1 != 3) printf("3 - PIB\n");
        if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
        if (opcao1 != 5) printf("5 - Densidade Demografica\n");
        if (opcao1 != 6) printf("6 - PIB per Capita\n");

        printf("----------------------------------\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao2);
        
        if (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) {
            printf("Opcao invalida. Reinicie o programa e tente novamente.\n");
        } else {
            int pontos1 = 0;
            int pontos2 = 0;

            // --- Logica de Comparacao (usando switch e if-else aninhado) ---
            printf("\n--- Detalhes da Batalha ---\n");

            // Comparacao do primeiro atributo
            switch (opcao1) {
                case 1:
                    printf("Atributo 1: Populacao\n");
                    if (populacao1 > populacao2) {
                        printf("Carta 1 (%s) venceu Populacao.\n", nome1);
                        pontos1++;
                    } else if (populacao2 > populacao1) {
                        printf("Carta 2 (%s) venceu Populacao.\n", nome2);
                        pontos2++;
                    } else {
                        printf("Populacao: Empate!\n");
                    }
                    break;
                case 2:
                    printf("Atributo 1: Area\n");
                    if (area1 > area2) {
                        printf("Carta 1 (%s) venceu Area.\n", nome1);
                        pontos1++;
                    } else if (area2 > area1) {
                        printf("Carta 2 (%s) venceu Area.\n", nome2);
                        pontos2++;
                    } else {
                        printf("Area: Empate!\n");
                    }
                    break;
                case 3:
                    printf("Atributo 1: PIB\n");
                    if (pib1 > pib2) {
                        printf("Carta 1 (%s) venceu PIB.\n", nome1);
                        pontos1++;
                    } else if (pib2 > pib1) {
                        printf("Carta 2 (%s) venceu PIB.\n", nome2);
                        pontos2++;
                    } else {
                        printf("PIB: Empate!\n");
                    }
                    break;
                case 4:
                    printf("Atributo 1: Pontos Turisticos\n");
                    if (pontosturisticos1 > pontosturisticos2) {
                        printf("Carta 1 (%s) venceu Pontos Turisticos.\n", nome1);
                        pontos1++;
                    } else if (pontosturisticos2 > pontosturisticos1) {
                        printf("Carta 2 (%s) venceu Pontos Turisticos.\n", nome2);
                        pontos2++;
                    } else {
                        printf("Pontos Turisticos: Empate!\n");
                    }
                    break;
                case 5:
                    printf("Atributo 1: Densidade Demografica (menor vence)\n");
                    if (densidade1 < densidade2) {
                        printf("Carta 1 (%s) venceu Densidade Demografica.\n", nome1);
                        pontos1++;
                    } else if (densidade2 < densidade1) {
                        printf("Carta 2 (%s) venceu Densidade Demografica.\n", nome2);
                        pontos2++;
                    } else {
                        printf("Densidade Demografica: Empate!\n");
                    }
                    break;
                case 6:
                    printf("Atributo 1: PIB per Capita\n");
                    if (pibpercapita1 > pibpercapita2) {
                        printf("Carta 1 (%s) venceu PIB per Capita.\n", nome1);
                        pontos1++;
                    } else if (pibpercapita2 > pibpercapita1) {
                        printf("Carta 2 (%s) venceu PIB per Capita.\n", nome2);
                        pontos2++;
                    } else {
                        printf("PIB per Capita: Empate!\n");
                    }
                    break;
            }

            // Comparacao do segundo atributo
            switch (opcao2) {
                case 1:
                    printf("Atributo 2: Populacao\n");
                    if (populacao1 > populacao2) {
                        printf("Carta 1 (%s) venceu Populacao.\n", nome1);
                        pontos1++;
                    } else if (populacao2 > populacao1) {
                        printf("Carta 2 (%s) venceu Populacao.\n", nome2);
                        pontos2++;
                    } else {
                        printf("Populacao: Empate!\n");
                    }
                    break;
                case 2:
                    printf("Atributo 2: Area\n");
                    if (area1 > area2) {
                        printf("Carta 1 (%s) venceu Area.\n", nome1);
                        pontos1++;
                    } else if (area2 > area1) {
                        printf("Carta 2 (%s) venceu Area.\n", nome2);
                        pontos2++;
                    } else {
                        printf("Area: Empate!\n");
                    }
                    break;
                case 3:
                    printf("Atributo 2: PIB\n");
                    if (pib1 > pib2) {
                        printf("Carta 1 (%s) venceu PIB.\n", nome1);
                        pontos1++;
                    } else if (pib2 > pib1) {
                        printf("Carta 2 (%s) venceu PIB.\n", nome2);
                        pontos2++;
                    } else {
                        printf("PIB: Empate!\n");
                    }
                    break;
                case 4:
                    printf("Atributo 2: Pontos Turisticos\n");
                    if (pontosturisticos1 > pontosturisticos2) {
                        printf("Carta 1 (%s) venceu Pontos Turisticos.\n", nome1);
                        pontos1++;
                    } else if (pontosturisticos2 > pontosturisticos1) {
                        printf("Carta 2 (%s) venceu Pontos Turisticos.\n", nome2);
                        pontos2++;
                    } else {
                        printf("Pontos Turisticos: Empate!\n");
                    }
                    break;
                case 5:
                    printf("Atributo 2: Densidade Demografica (menor vence)\n");
                    if (densidade1 < densidade2) {
                        printf("Carta 1 (%s) venceu Densidade Demografica.\n", nome1);
                        pontos1++;
                    } else if (densidade2 < densidade1) {
                        printf("Carta 2 (%s) venceu Densidade Demografica.\n", nome2);
                        pontos2++;
                    } else {
                        printf("Densidade Demografica: Empate!\n");
                    }
                    break;
                case 6:
                    printf("Atributo 2: PIB per Capita\n");
                    if (pibpercapita1 > pibpercapita2) {
                        printf("Carta 1 (%s) venceu PIB per Capita.\n", nome1);
                        pontos1++;
                    } else if (pibpercapita2 > pibpercapita1) {
                        printf("Carta 2 (%s) venceu PIB per Capita.\n", nome2);
                        pontos2++;
                    } else {
                        printf("PIB per Capita: Empate!\n");
                    }
                    break;
            }

            printf("\n--- Resultado Final ---\n");
            printf("Pontuacao de %s: %d\n", nome1, pontos1);
            printf("Pontuacao de %s: %d\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("Resultado: Carta 1 (%s) venceu a rodada!\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: Carta 2 (%s) venceu a rodada!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
        }
    }
    
    return 0;
}