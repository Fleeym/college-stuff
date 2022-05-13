#include <iostream>
#include <fstream>

int main()
{
    std::ifstream f("note.txt");
    std::ofstream g("media.txt");

    float note[4];
    float teza;
    float mediaLaborator, mediaFinala;

    for(int i = 0; i < 4; i++)
    {
        f >> note[i];
        std::cout << "Nota " << i + 1 << " = " << note[i] << "\n";
    }
    f >> teza;
    std::cout << "Nota teza este: " << teza << "\n";

    float suma = 0;
    for(int i = 0; i < 4; i++)
    {
        suma += note[i];
    }
    mediaLaborator = suma / 4;
    std::cout << "Media notelor este: " << mediaLaborator << "\n";
    mediaFinala = (mediaLaborator * 3 + teza) / 4;
    g << "Media finala este: " << mediaFinala << "\n";
    f.close();
    g.close();
    return 0;
}