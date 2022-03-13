#include <iostream>
#include "dreptunghi.cpp"
#include "nume.cpp"
#include "temperatura.cpp"

int main()
{
    int problema{};
    std::cout << "Alegeti problema (1/2/3): ";
    std::cin >> problema;

    switch (problema){
    case 1:
        nume();
        break;
    case 2:
        dreptunghi();
        break;
    case 3:
        temperatura();
        break;
    default:
        std::cout << "Numar invalid!";
        break;
    }


    return 0;
}
