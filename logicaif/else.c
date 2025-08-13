#include <stdio.h>
#include <string.h>

int main() {
    struct Carta {
        char estado[3];
        char codigo[4];
        char cidade[30];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulacional;
        float pibPerCapita;
    };

    struct Carta carta1 = {"SP", "A01", "São Paulo", 12300000, 1521.11, 699000000000.0, 25};
    struct Carta carta2 = {"RJ", "A02", "Rio de Janeiro", 6748000, 1200.27, 410000000000.0, 15};

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    int atributoEscolhido = 1;

    printf("Comparacao de cartas (Atributo: ");
    switch (atributoEscolhido) {
        case 1: printf("Populacao)\n\n"); break;
        case 2: printf("Area)\n\n"); break;
        case 3: printf("PIB)\n\n"); break;
        case 4: printf("Densidade Populacional)\n\n"); break;
        case 5: printf("PIB per Capita)\n\n"); break;
    }

    if (atributoEscolhido == 1) {
        printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);

        if (carta1.populacao > carta2.populacao)
            printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else if (carta2.populacao > carta1.populacao)
            printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        else
            printf("\nResultado: Empate!\n");
    }
    else if (atributoEscolhido == 2) {
        printf("Carta 1 - %s (%s): %.2f km²\n", carta1.cidade, carta1.estado, carta1.area);
        printf("Carta 2 - %s (%s): %.2f km²\n", carta2.cidade, carta2.estado, carta2.area);

        if (carta1.area > carta2.area)
            printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else if (carta2.area > carta1.area)
            printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        else
            printf("\nResultado: Empate!\n");
    }
    else if (atributoEscolhido == 3) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.cidade, carta1.estado, carta1.pib);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.cidade, carta2.estado, carta2.pib);

        if (carta1.pib > carta2.pib)
            printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else if (carta2.pib > carta1.pib)
            printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        else
            printf("\nResultado: Empate!\n");
    }
    else if (atributoEscolhido == 4) {
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", carta1.cidade, carta1.estado, carta1.densidadePopulacional);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", carta2.cidade, carta2.estado, carta2.densidadePopulacional);

        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else if (carta2.densidadePopulacional < carta1.densidadePopulacional)
            printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        else
            printf("\nResultado: Empate!\n");
    }
    else if (atributoEscolhido == 5) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.cidade, carta1.estado, carta1.pibPerCapita);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.cidade, carta2.estado, carta2.pibPerCapita);

        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else if (carta2.pibPerCapita > carta1.pibPerCapita)
            printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        else
            printf("\nResultado: Empate!\n");
    }

    return 0;
}