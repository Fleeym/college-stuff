#include <iostream>
#include <cmath>

int main()
{
    float a, b;
    std::cout << "Introduceti a: "; std::cin >> a;
    std::cout << "Introduceti b: "; std::cin >> b;

    // minim
    if(a <= b)
        std::cout << "Minimul este: " << a << '\n';
    else
        std::cout << "Minimul este: " << b << '\n';

    // media aritmetica
    std::cout << "Media aritmetica este: " << (a + b) / 2 << '\n';

    // media geometrica
    std::cout << "Media geometrica este: " << sqrt(a * b) << '\n';
    
    return 0;
}