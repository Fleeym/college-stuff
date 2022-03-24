#include <iostream>

void temperatura(){
    float fahrenheit, celsius;

    std::cout << "Introduceti gradele in Fahrenheit: ";
    std::cin >> fahrenheit;
    std::cout << fahrenheit << "\n";

    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    std::cout << "Temperatura in celsius este: " << celsius;
}
