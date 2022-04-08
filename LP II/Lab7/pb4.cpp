#include <iostream>

int x = 100;

int cmmdc1(int a, int b) {
    int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    std::cout << "x = " << x << "\n";
    return b;
}

int cmmdc2(int a, int b, int c) {
    int r;
    a = cmmdc1 (a, b);
    r = a % c;
    while(r != 0) {
        a = c;
        c = r;
        r = a % c;
    }
    x = 50;
    std::cout << "x = " << x << "\n";
    return c;
}

int main() {
    int a, b, c;
    int r;
    
    std::cout << "Dati valoare lui a: "; std::cin >> a;
    std::cout << "Dati valoare lui b: "; std::cin >> b;
    std::cout << "Dati valoare lui c: "; std::cin >> c;

    std::cout << "x = " << x << "\n";

    r = cmmdc2 (a, b, c);
    if (r > 1)
        std::cout << "cmmdc = " << r;
    else
        std::cout << "Numerele sunt prime intre ele.";
}