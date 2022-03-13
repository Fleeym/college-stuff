#include <iostream>
#include <cstring>

int main()
{
    char c[100], d[100];

    std::cout << "Introduceti numele colegului: ";
    std::cin.getline(c, 100);

    std::cout << "Numele colegului are " << strlen(c) << " caractere.\n";

    std::cout << "Ghiceste numele colegului: "; 
    std::cin.getline(d, 100);

    int i = 1;
    while(strcmp(c, d) != 0)
    {
        std::cout << "Ai gresit! Mai incearca!\n"; 
        std::cin.getline(d, 100);

        ++i;
    }

    std::cout << "Bravo, ai ghicit din " << i << " incercari!";
    return 0;
}