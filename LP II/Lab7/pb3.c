#include <stdio.h>
#include <string.h>

typedef enum {
    NEGRU,
    BEJ,
    ALB,
    VERDE,
    ALBASTRU,
    ROSU
} Culoare;

typedef struct {
    char marca[100];
    char model[50];
    unsigned short anFabricatie;
    char numarInmatriculare[10];
    Culoare color;
} Masina;

Masina citesteMasina() {
    Masina masina;
    printf("Care este marca masinii? ");
    fgets(masina.marca, 100, stdin);

    printf("Care este modelul masinii? ");
    fgets(masina.model, 50, stdin);

    printf("Care este numarul de inmatriculare al masinii? ");
    fgets(masina.numarInmatriculare, 10, stdin);

    masina.color = ROSU;

    printf("Care este anul de fabricatie al masinii? ");
    scanf("%hu", &masina.anFabricatie);

    return masina;
}

void afiseazaMasina (Masina masina) {
    printf ("Masina marca: %sModelul: %sAre numarul de inmatriculare: %sCuloarea: %d si a fost fabricata in anul: %hu.\n",
            masina.marca, masina.model, masina.numarInmatriculare, masina.color, masina.anFabricatie);
}

int main() {
    Masina parcAuto[10];
    parcAuto[0] = citesteMasina();

    afiseazaMasina(parcAuto[0]);

    return 0;
}