#include <iostream>

void dreptunghi(){
    float lungime, latime;
    float arie, perimetru;

    std::cout << "Introduceti lungimea: ";
    std::cin >> lungime;

    std::cout << "Indroduceti latimea: ";
    std::cin >> latime;

    arie = lungime * latime;
    perimetru = 2 * lungime + 2 * latime;

    std::cout << "Aria este: " << arie << ", iar perimetrul este: " << perimetru << ".";
}
