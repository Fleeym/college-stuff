#include <iostream>
#include <cstring>

struct Student {
    char nume[50];
    int notaLab1, notaLab2;
    double notaExamen;
    double medie;
};

int main()
{
    int n;
    Student *studenti;
    bool ok;

    std::cout << "Introduceti numarul de studenti: ";
    std::cin >> n;

    studenti = new Student[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "Introduceti numele studentului: ";
        std::cin >> studenti[i].nume;
        std::cout << "Introduceti nota 1: ";
        std::cin >> studenti[i].notaLab1;
        std::cout << "Introduceti nota 2: ";
        std::cin >> studenti[i].notaLab2;
        std::cout << "Introduceti nota examen: ";
        std::cin >> studenti[i].notaExamen;
        studenti[i].medie = ((studenti[i].notaLab1 + studenti[i].notaLab2) / 2 * 0.4) + studenti[i].notaExamen * 0.6;
    }

    std::cout << "\nSortare alfabetica: \n";
    do {
        ok = true;
        for(int i = 0; i < n-1; i++)
            if(strcmp(studenti[i].nume, studenti[i+1].nume) > 0) {
                Student temp = studenti[i];
                studenti[i] = studenti[i+1];
                studenti[i+1] = temp;
                ok = false;
            }
    } while (ok == false);

    for (int i = 0; i < n; i++)
        std::cout << studenti[i].nume << ", " << studenti[i].medie << "\n";

    std::cout <<"\nSortare dupa medie: \n";

    do {
        ok = true;
        for(int i = 0; i < n-1; i++)
            if(studenti[i].medie < studenti[i+1].medie) {
                Student temp = studenti[i];
                studenti[i] = studenti[i+1];
                studenti[i+1] = temp;
                ok = false;
            }
    } while(ok == false);

    for(int i = 0; i < n; i++)
        std::cout << studenti[i].nume << ", " << studenti[i].medie << "\n";

    delete[] studenti;
}