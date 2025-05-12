#include <stdio.h>

#define TOTAL_ESTADOS 8
#define CIDADES_POR_ESTADO 4
#define TOTAL_CIDADES (TOTAL_ESTADOS * CIDADES_POR_ESTADO)

int main() {
    char codigos[TOTAL_CIDADES][4];
    int populacoes[TOTAL_CIDADES];
    float areas[TOTAL_CIDADES];
    float pibs[TOTAL_CIDADES];
    int pontosTuristicos[TOTAL_CIDADES];

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

        printf("\n");
    }

    printf("\n=== CIDADES CADASTRADAS ===\n");
    for (int i = 0; i < TOTAL_CIDADES; i++) {
        printf("Cidade %s:\n", codigos[i]);
        printf("  População: %d\n", populacoes[i]);
        printf("  Área: %.2f km²\n", areas[i]);
        printf("  PIB: %.2f milhões\n", pibs[i]);
        printf("  Pontos turísticos: %d\n\n", pontosTuristicos[i]);
    }

    return 0;
}
