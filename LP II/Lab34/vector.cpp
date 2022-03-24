#include <iostream>

int main()
{
    int a[100], n;

    std::cout << "Cate numere vom folosi? "; std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Introduceti un numar: "; std::cin >> a[i];
    }


    // sort
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    int query;
    bool gasit;
    int mijloc;
    int lim_i, lim_s;
    std::cout << "Introduceti numarul de cautat: "; std::cin >> query;

    for(lim_i = 0, lim_s = n-1, gasit = false; gasit && lim_i <= lim_s; )
    {
        mijloc = (lim_i + lim_s) / 2;
        std::cout << mijloc << '\n';
        if (a[mijloc] == query)
        {
            gasit = true;
            std::cout << "Numarul cautat este pe pozitia: " << mijloc << '\n';
        }
        else if(a[mijloc] > query)
            lim_s = mijloc - 1;
        else
            lim_i = mijloc + 1;
    }
    if (!gasit)
    {
        std::cout << "Nu am gasit numarul!";
    }
    return 0;
}