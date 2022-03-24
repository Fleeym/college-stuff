#include <stdio.h>

int main(){
    int f0 = 0, f1 = 1;
    int fc;
    int n = 0;
    printf("Introduceti numarul de elemente: ");
    scanf_s("%d", &n);
    printf("%d, %d, ", f0, f1);

    for(int i = 0; i < n; i++){
        fc = f0 + f1;
        if (i != n-1)
            printf("%d, ", fc);
        else
            printf("%d", fc);
        f0 = f1;
        f1 = fc;
    }

    return 0;
}