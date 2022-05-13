#include <stdio.h>

int fsizeof(char *filename)
{
    // rt = read text
    FILE *file = fopen(filename, "rt");

    if(file == NULL)
        return -1;
    
    // pozitioneaza la sfarsitul fisierului
    fseek (file, 0, SEEK_END);

    // afla pozitia ultimului caracter
    int bytesCount = ftell(file);

    fclose(file);
    return bytesCount;
}

void afisareContinut(char *filename)
{
    FILE *file = fopen(filename, "rt");
    char s[101];

    if(file == NULL)
        return;
    
    while(fgets(s, 100, file) != NULL)
        printf("%s", s);
    
    fclose(file);
}

int main()
{
    char filename[] = "DATA2.txt";

    int size = fsizeof(filename);
    if (size < 0) {
        // eroare, nu s-a putut deschide fisierul
        fprintf(stderr, "ERROR: Fisierul nu a putut fi deschis.");
        return -1;
    }

    printf("Afisare continut: ");
    afisareContinut(filename);
    printf("\nFisierul %s are %d bytes.\n", filename, size);

    fprintf(stdout, "Fisierul %s are %d bytes.\n", filename, size);
    return 0;
}