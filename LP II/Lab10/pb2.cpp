#include <iostream>

int *citeste_sir(int &nr) {
    int *vect;
    std::cout << "Citeste nr de elemente: ";
    std::cin >> nr;
    vect = new int[nr];
    if(!vect) {
        std::cout << "Alocare esuata!";
        return NULL;
    }
    else {
        for(int i = 0; i < nr; i++) {
            std::cout << "a[" << i << "] = ";
            std::cin >> vect[i];
        }
        return vect;
    }
}

int min_max(int x, int y, int (*func_min_max) (int, int))
{
    return (func_min_max(x, y));
}
int min (int a, int b) {
    return (a < b ? a : b);
}
int max (int a, int b) {
    return (a > b ? a : b);
}


int main() {
    int n;
    int *a;
    int minim, maxim;
    a = citeste_sir(n);
    if (a) {
        std::cout << "Sirul este: ";
        for(int i = 0; i < n; i++)
            std::cout << a[i] << " ";
        std::cout << "\n";

        minim = a[0];
        for(int i = 0; i < n; i++)
            minim = min_max(minim, a[i], min);
        std::cout << "Minimul este: " << minim << "\n";
        maxim = a[0];
        for(int i = 0; i < n; i++)
            maxim = min_max(maxim, a[i], max);
        std::cout << "Maximul este: " << maxim << "\n";
    }
    return 0;
}