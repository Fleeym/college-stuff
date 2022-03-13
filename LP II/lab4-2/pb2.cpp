#include <iostream>

int **citeste_matricea(int &n)
{
    int **matrice;
    bool aloc = false;

    std::cout << "Citeste numarul de linii si coloane: ";
    std::cin >> n;
    matrice = new int *[n];     // alocam memorie pt nr de linii

    if(!matrice)
    {
        std::cout << "Alocare esuata!\n";
        return (NULL);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            matrice[i] = new int[n];    // alocam memorie pentru un rand
            if (!matrice[i])
            {
                std::cout << "Alocare esuata!\n";
                aloc = true;
            }
            else
            {
                aloc = false;
            }
        }
    }

    if (!aloc)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                std::cout << "a[" << i << "][" << j << "] = ";
                std::cin >> matrice[i][j];
            }
        return matrice;
    }
    else
    {
        return (NULL);
    }
}

int main()
{
    int **matrice;
    int n;

    matrice = citeste_matricea(n);

    std::cout << "Afisare matrice:\n";
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            std::cout << matrice[i][j] << " ";
        std::cout << "\n";
    }

    std::cout << "Elemente impare: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (matrice[i][j] % 2 != 0)
                std::cout << matrice[i][j] << ", ";
        }
    
    std::cout << "\nElemente divizibile cu 5: ";
    int div5 = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (matrice[i][j] % 5 == 0)
            {
                std::cout << matrice[i][j] << ", ";
                ++div5;
            }
        }    
    std::cout << "\nAvem " << div5 << " elemente divizibile cu 5.";
    return 0;
}