#include <iostream>

int main(){
    int n, copie, numCifre = 0;

    std::cout << "Introduceti un numar: ";
    std::cin >> n;

    copie = n;
    while (copie){
        copie /= 10;
        numCifre++;
    }
    std::cout << "Numarul de cifre este: " << numCifre << '\n';
}
