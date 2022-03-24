#include <stdio.h>

int main(){
    float lungime, latime;
    float arie, perimetru;

    printf("Introduceti lungimea: ");
    scanf("%f", &lungime);

    printf("Indroduceti latimea: ");
    scanf("%f", &latime);

    arie = lungime * latime;
    perimetru = 2 * lungime + 2 * latime;

    printf("Aria este: %0.2f, iar perimetrul este: %0.2f.", arie, perimetru);

    return 0;
}