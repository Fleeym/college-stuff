#include <iostream>
#include <cstdlib>

struct Matrice
{
    int nrLinii;
    int nrColoane;
    int** elem;
};

Matrice alocareMatrice(bool& alocat)
{
    Matrice a;
    std::cout << "Introduceti numarul de linii: ";
    std::cin >> a.nrLinii;
    std::cout << "Introduceti numarul de coloane: ";
    std::cin >> a.nrColoane;

    a.elem = (int**)calloc(a.nrLinii, sizeof(int*));

    if (!a.elem)
    {
        std::cout << "Nu s-a putut aloca memorie pentru linii.\n";
        alocat = false;
    }
    else
    {
        for(int i = 0; i < a.nrLinii; i++)
        {
            a.elem[i] = (int*)calloc(a.nrColoane, sizeof(int));
            if (!a.elem[i])
            {
                std::cout << "Nu s-a putut aloca memorie pentru coloane.\n";
                alocat = false;
            }
        }
    }

    if (alocat)
    {
        for(int i = 0; i < a.nrLinii; i++)
            for(int j = 0; j < a.nrColoane; j++)
            {
                std::cout << "matrice[" << i << "][" << j << "] = ";
                std::cin >> a.elem[i][j];
            }
        return a;
    }
    return a;
}

int main()
{
    Matrice A, B, C;
    bool alocatA = true, alocatB = true, alocatC = true;

    A = alocareMatrice(alocatA);
    B = alocareMatrice(alocatB);

    if (alocatA && alocatB && (A.nrColoane - B.nrLinii) == 0)
    {
        C.nrLinii = A.nrLinii;
        C.nrColoane = B.nrColoane;
        C.elem = (int**)calloc(C.nrLinii, sizeof(int*));
        if(!C.elem)
        {
            std::cout << "Nu s-a putut aloca memorie pentru linii.\n";
            alocatC = false;
        }
        else
        {
            for(int i = 0; i < C.nrLinii; i++)
            {
                C.elem[i] = (int*)calloc(C.nrColoane, sizeof(int));
                if(!C.elem[i])
                {
                    std::cout << "Nu s-a putut aloca memorie pentru coloane.\n";
                    alocatC = false;
                }
            }
        }

        if (alocatC)
        {
            for(int i = 0; i < C.nrLinii; i++)
                for(int j = 0; j < C.nrColoane; j++)
                {
                    C.elem[i][j] = 0;
                    for(int k = 0; k < A.nrColoane; k++)
                        C.elem[i][j] += A.elem[i][k] * B.elem[k][j];
                }
            
            std::cout << "\nAfisare matrice: \n";

            for(int i = 0; i < C.nrLinii; i++)
            {
                for(int j = 0; j < C.nrColoane; j++)
                    std::cout << C.elem[i][j] << " ";
                std::cout << "\n";
            }
            for(int i = 0; i < A.nrLinii; i++)
                free (A.elem[i]);
            free (A.elem);

            for(int i = 0; i < B.nrLinii; i++)
                free (B.elem[i]);
            free (B.elem);
            
            for(int i = 0; i < C.nrLinii; i++)
                free(C.elem[i]);
            free (C.elem);
        }
    }
    return 0;
}