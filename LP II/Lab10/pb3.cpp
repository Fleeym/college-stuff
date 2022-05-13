#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

double cotan(double x) {
    return (1/tan(x));
}

int main() {
    double x;
    double (*func_trig[]) (double) = {sin, cos, tan, cotan};
    std::cout << "Nr\tSinus\t\tCosinus\t\tTan\t\tCotan\n";

    for(x = 0.01; x <= M_PI; x += 0.1) {
        std::cout << x << "\t";
        for(int i = 0; i < 4; i++)
            std::cout << func_trig[i](x) << "  \t";
        std::cout << "\n";
    }
    return 0;
}