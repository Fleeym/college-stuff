#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float *a;
    int n;

    printf("Introdu numarul de elemente: ");
    scanf("%d", &n);

    a = (float*) malloc (n * sizeof(float));
    if(a != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            printf("a[%d] = ", i);
            scanf("%f", &a[i]);
        }
        int x;
        printf("x = ");
        scanf("%d", &x);

        for(int i = 0; i < n; i++)
        {
            if (abs(x - a[i]) < 5)
            {
                printf("%f ", a[i]);
            }
        }
        free(a);
    }
    else
        printf("Alocarea dinamica a esuat!\n");
    return 0;
}