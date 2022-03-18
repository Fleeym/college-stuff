#include <iostream>
#include <string>

int main()
{
    std::string sir1, sir2;

    std::cout << "Primul sir: ";
    std::getline(std::cin, sir1);

    std::cout << "Al doilea sir: ";
    std::getline(std::cin, sir2);

    std::cout << "Lungimea primului sir este: " << sir1.size() << ".\n";
    std::cout << "Lungimea celui de-al doilea sir este: " << sir2.size() << ".\n";

    int pos = static_cast<int>(sir1.find(sir2));

    if (pos == -1)
        std::cout << "Sirul 2 nu este inclus in sirul 1.\n";
    else
        std::cout << "Sirul 2 este inclus in sirul 1.\n";
    
    std::string sir_nou = sir1.insert(3, "Limbaje de programare II");
    std::cout << "Sirul nou este: " << sir_nou << "\n";

    std::cout << "Sirurile concatenate: " << sir_nou.append(sir2);
    return 0;
}