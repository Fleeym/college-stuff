#include <stdio.h>
#include <string.h>

int main()
{
    char sir[101];
    char *separator;
    int k = 0;
    printf("Introduceti sirul: ");
    gets(sir); // cin.get(sir)

    printf("%s\n", sir);

    // avem numere in sir?
    char numere[] = "0123456789";
    int test = 0;

    for (int i = 0; i < strlen(sir); i++)
    {
        if (strchr(numere, sir[i]) != 0)
        {
            test = 1;
            i = (int)strlen(sir);
        }
    }

    if (test == 1)
        printf("Exista numere in sir.\n");
    else
        printf("Nu exista numere in sir.\n");
    
    // print string to upper

    for(int i = 0; i < strlen(sir); i++)
    {
        printf("%c", toupper(sir[i]));
    }

    // numarul de cuvinte

    separator = strtok(sir, " ");
    while (separator != NULL)
    {
        separator = strtok(NULL, " ");
        k++;
    }
    printf("\nSirul are %d cuvinte.\n", k);

    return 0;
}