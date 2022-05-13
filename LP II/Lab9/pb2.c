#include <stdio.h>

int main()
{
    FILE *fp;
    float a;
    int m, n;

    // citire matrice
    if ((fp = fopen("DATA.txt", "w")) == NULL)
        printf("Eroare la deschiderea fisierului\n");
    else
    {
        printf("Introduceti numarul de linii: ");
        scanf("%d", &n);
        printf("Introduceti numarul de coloane: ");
        scanf("%d", &m);

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                printf("a[%d][%d] = ", i, j);
                scanf("%f", &a);
                fprintf(fp, "%.2f ", a);
            }
        fprintf(fp, "\n");
        }
        fputs("Matricea a fost scrisa cu succes!", fp);
        fclose(fp);
    }

    if ((fp = fopen("DATA.txt", "r")) == NULL)
        printf("Eroare la deschiderea fisierului pentru citire.\n");
    else
    {
        printf("Elementele matricei sunt: \n");
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                fscanf(fp, "%f", &a);
                printf("%.2f\t", a);
            }
            printf("\n");
        }
        printf("Matricea a fost printata cu succes!\n");
        fclose(fp);
    }
    return 0;
}