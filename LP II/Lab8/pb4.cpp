#include <iostream>

long long factorialIterativ(int n)
{
    long long fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

long long factorialRecursiv(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorialRecursiv(n - 1);
}

int main()
{
    int n;
    std::cout << "n = ";
    std::cin >> n;

    std::cout << "Factorial cu metoda iterativa: " << factorialIterativ(n) << "\n";
    std::cout << "Factorial cu metoda recursiva: " << factorialRecursiv(n) << "\n";
}