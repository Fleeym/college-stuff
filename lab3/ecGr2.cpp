#include <iostream>
#include <cmath>

int main(){
    float a, b, c, delta;
    float x1, x2;
    std::cout << "O ecuatie de gradul 2 are forma ax^2 + bx + c = 0\n";
    std::cout << "Introduceti a: "; std::cin >> a;
    std::cout << "Introduceti b: "; std::cin >> b;
    std::cout << "Introduceti c: "; std::cin >> c;
    if (a == 0 && b != 0){
        std::cout << b << "x + " << c << " = 0\n";
        std::cout << "Solutia ecuatiei este: " << -c / b;
    }
    else if (b == 0){
        std::cout << "Nu exista solutii\n";
    }
    else{
        std::cout << a << "x^2 + " << b << "x + " << c << " = 0\n";
        delta = b*b - 4 * a * c;
        std::cout << "delta = " << delta << '\n';
        if (delta < 0)
           std::cout << "Ecuatia nu are solutii reale!\n";
        else if (delta == 0)
            std::cout << "Solutia ecuatiei este: " << -b / 2 * a;
        else {
            x1 = (b * -1 + sqrt(delta)) / 2 * a;
            x2 = (b * -1 - sqrt(delta)) / 2 * a;

            std::cout << "Solutiile ecuatiei sunt: " << x1 << ", " << x2;
        }
    }
    
    return 0;
}