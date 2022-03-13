#include <iostream>
#include <string>

void nume(){
    std::string nume;
    std::string prenume;

    std::cout << "Introduceti numele: ";
    std::cin >> nume;

    std::cout << "Introduceti prenumele: ";
    std::cin >> prenume;

    std::cout << "Salut, " << nume << " " << prenume << "!";
}
