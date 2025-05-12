#include <stdio.h>
#include <string.h>

#define TOTAL_ESTADOS 2
#define CIDADES_POR_ESTADO 2
#define TOTAL_CIDADES (TOTAL_ESTADOS * CIDADES_POR_ESTADO)

int main() {
    char codigos[TOTAL_CIDADES][4];
    int populacoes[TOTAL_CIDADES];
    float areas[TOTAL_CIDADES];
    float pibs[TOTAL_CIDADES];
    int pontosTuristicos[TOTAL_CIDADES];
    float densidade[TOTAL_CIDADES];
    float pibPerCapita[TOTAL_CIDADES];
    float superPoder[TOTAL_CIDADES];

    for (int i = 0; i < TOTAL_CIDADES; i++) {
        printf("Cadastro da cidade %d/%d\n", i + 1, TOTAL_CIDADES);

        printf("Código da cidade (ex: A01): ");
        scanf("%s", codigos[i]);

        printf("População: ");
        scanf("%d", &populacoes[i]);

        printf("Área (km²): ");
        scanf("%f", &areas[i]);

        printf("PIB (em milhões): ");
        scanf("%f", &pibs[i]);

        printf("Número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos[i]);

        if (areas[i] > 0)
            densidade[i] = populacoes[i] / areas[i];
        else
            densidade[i] = 0;

        if (populacoes[i] > 0)
            pibPerCapita[i] = pibs[i] * 1000000 / populacoes[i];
        else
            pibPerCapita[i] = 0;

        superPoder[i] = populacoes[i] + areas[i] + pibs[i] + pontosTuristicos[i] + pibPerCapita[i] - densidade[i];

        printf("\n");
    }

    printf("\n=== CIDADES CADASTRADAS ===\n");
    for (int i = 0; i < TOTAL_CIDADES; i++) {
        printf("Cidade %s:\n", codigos[i]);
        printf("  População: %d\n", populacoes[i]);
        printf("  Área: %.2f km²\n", areas[i]);
        printf("  PIB: %.2f milhões\n", pibs[i]);
        printf("  Pontos turísticos: %d\n", pontosTuristicos[i]);
        printf("  Densidade populacional: %.2f hab/km²\n", densidade[i]);
        printf("  PIB per capita: %.2f\n", pibPerCapita[i]);
        printf("  Super Poder: %.2f\n", superPoder[i]);
        printf("\n");
    }

    // Comparação
    int indice1, indice2;

    printf("Digite o índice da primeira cidade (0 a %d): ", TOTAL_CIDADES - 1);
    scanf("%d", &indice1);
    printf("Digite o índice da segunda cidade (0 a %d): ", TOTAL_CIDADES - 1);
    scanf("%d", &indice2);

    printf("\n=== COMPARAÇÃO ENTRE %s E %s ===\n", codigos[indice1], codigos[indice2]);

    printf("População: %s\n", (populacoes[indice1] > populacoes[indice2]) ? codigos[indice1] : codigos[indice2]);
    printf("Área: %s\n", (areas[indice1] > areas[indice2]) ? codigos[indice1] : codigos[indice2]);
    printf("PIB: %s\n", (pibs[indice1] > pibs[indice2]) ? codigos[indice1] : codigos[indice2]);
    printf("Pontos turísticos: %s\n", (pontosTuristicos[indice1] > pontosTuristicos[indice2]) ? codigos[indice1] : codigos[indice2]);
    printf("Densidade populacional (menor vence): %s\n", (densidade[indice1] < densidade[indice2]) ? codigos[indice1] : codigos[indice2]);
    printf("PIB per capita: %s\n", (pibPerCapita[indice1] > pibPerCapita[indice2]) ? codigos[indice1] : codigos[indice2]);
    printf("Super Poder: %s\n", (superPoder[indice1] > superPoder[indice2]) ? codigos[indice1] : codigos[indice2]);

    return 0;
}
