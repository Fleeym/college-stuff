#include <iostream>
#include <cstring>

int main() 
{
    char fraza[101];
    int num = 0;
    int temp;

    std::cout << "Introduceti sirul de caractere: ";
    std::cin.get(fraza, 100);

    for (int i = 0; i < strlen(fraza); i++)
    {
        if (fraza[i] == 'a' || fraza[i] == 'A')
        {
            num++;
            for (int j = i; j < strlen(fraza); j++)
            {
                temp = j;
                if (fraza[j] == ' ')
                    j = strlen(fraza);
                i = temp;
            }
        }
    }

    std::cout << "Litera \"a\" apare in " << num << " cuvinte ale frazei: " << fraza;

    return 0;
}