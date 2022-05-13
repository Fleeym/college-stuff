#include <iostream>

int i = 0;

// avem nevoie de prototipuri pt ca foo2 este chemat inainte de a fi definit
void foo1(int);
void foo2(int);

void foo1(int n) {
    if (i <= n) {
        std::cout << i << " ";
        i++;
        foo2(n);
    }
    else
        return;
}

void foo2(int n) {
    if (i <= n) {
        std::cout << i << " ";
        i++;
        foo1(n);
    }
    else
        return;
}

int main() {
    int n;
    std::cin >> n;
    foo1(n);
    return 0;
}