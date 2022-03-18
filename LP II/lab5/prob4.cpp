#include <iostream>

// transpusa unei matrice, afisati suma numereleor de pe liniile impare, inversati liniile cu elementul maxim si minim

int main()
{
    int a[50][50], b[50][50];
    int auxiliar;
    int min, max;
    int lin_min = 0, lin_max = 0;
    int n, m;

    int suma_linii_impare = 0;

    std::cout << "Numarul de linii: ";
    std::cin >> n;

    std::cout << "Numarul de coloane: ";
    std::cin >> m;

    // citire
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            std::cout << "a[" << i << "][" << j << "] = ";
            std::cin >> a[i][j];
        }
    std::cout << "\nMatricea citita: \n";
    min = a[0][0];
    max = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 != 0)
                suma_linii_impare += a[i][j];
            
            if (a[i][j] < min)
            {
                min = a[i][j];
                lin_min = i;
            }
            if (a[i][j] > max)
            {
                max = a[i][j];
                lin_max = i;
            }
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\nMatricea transpusa: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
            std::cout << b[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "Suma elementelor de pe liniile impare este: " << suma_linii_impare << ".\n";

    // interschimbare linia cu element minim, linia cu element maxim
    for (int i = 0; i < m; i++)
    {
        auxiliar = a[lin_min][i];
        a[lin_min][i] = a[lin_max][i];
        a[lin_max][i] = auxiliar;
    }

    std::cout << "\nInterschimbarea liniilor cu elementul minim si maxim: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }

}