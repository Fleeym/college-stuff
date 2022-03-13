#include <iostream>

void temperatura(){
    float fahrenheit, celsius;

    std::cout << "Introduceti gradele in Fahrenheit: ";
    std::cin >> fahrenheit;

    celsius = (5 / 9) * (fahrenheit - 32);
    std::cout << "Temperatura in celsius este: " << celsius;
}
