#include <iostream>
// Laborator4.pdf, ex1

int* citeste_sir(int *nr)
{
    int *vect;
    std::cout << "Introduce numarul de caractere: ";
    std::cin >> *nr;

    vect = new int[*nr];

    if(!vect)
    {
        std::cout << "Alocare eronata!\n";
        return NULL;
    }
    else
    {
        for(int i = 0; i < *nr; i++)
        {
            std::cout << "a[" << i << "] = ";
            std::cin >> vect[i];
        }
        return vect;
    }
}
int min (int a, int b)
{
    return a < b ? a : b;
}

int max (int a, int b)
{
    return a > b ? a : b;
}

// func_min_max este o functie ca parametru, min() sau max()
int min_max (int x, int y, int (*func_min_max) (int, int))
{
    return func_min_max(x, y);
}

int main()
{
    int n;
    int *a;
    int MIN, MAX;
    int prod;
    int elem_neg;

    a = citeste_sir(&n);
    std::cout << "Sirul este: ";
    for(int i = 0; i < n; i++)
        std::cout << a[i] << ", ";
        
    std::cout << "\n";
    
    if (a)
    {
        MIN = a[0];
        for(int i = 0; i < n; i++)
            MIN = min_max(MIN, a[i], min);
        std::cout << "Minimul este: " << MIN << "\n";

        MAX = a[0];
        for(int i = 0; i < n; i++)
            MAX = min_max(MAX, a[i], max);
        std::cout << "Maximul este: " << MAX << "\n";

        //produsul numerelor pozitive
        prod = 1;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > 0)
                prod *= a[i];
        }
        std::cout << "Produsul numerelor pozitive este: " << prod << "\n";

        elem_neg = 0;
        for(int i = 0; i < n; i++)
            if(a[i] < 0)
                ++elem_neg;
        std::cout << "Numarul de elemente negative este: " << elem_neg << "\n";
    }
    return 0;
}