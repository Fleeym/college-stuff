#include <stdio.h>
#include <conio.h>

// Laborator 3.pdf, ex2

int main()
{
    int n;
    int a[100][100];

    // citirea matricei
    printf("Numarul de linii / coloane (n) = ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf_s("%d", &a[i][j]);
        }
    
    // afisarea diagonalelor
    printf("Diagonala principala: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i][i]);
    printf("\nDiagonala secundara: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i][n - 1 - i]);
    printf("\n");

    // calcul minim, maxim
    int min = a[0][0], max = a[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (min > a[i][j])
                min = a[i][j];
            if (max < a[i][j])
                max = a[i][j];
        }
    printf("Maximul este: %d\n", max);
    printf("Minimul este: %d\n", min);

    // print matrice
    printf("\nMatrice: \n------------------------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
                printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("------------------------\n");
    return 0;
}