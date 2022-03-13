#include <stdio.h>

int main()
{
    int nr1, nr2;
    int rezultat;
    char op;

    printf("Introduceti primul numar, operatia si al doilea numar: ");
    scanf ("%d%c%d", &nr1, &op, &nr2);

    if (nr1 > nr2)
        printf("Maximul este %d\n", nr1);
    else
        printf("Maximul este %d\n", nr2);

    switch (op){
    case '+':
        rezultat = nr1 + nr2;
        printf("%d %c %d = %d", nr1, op, nr2, rezultat);
        break;
    case '-':
        rezultat = nr1 - nr2;
        printf("%d %c %d = %d", nr1, op, nr2, rezultat);
        break;
    case '*':
        rezultat = nr1 * nr2;
        printf("%d %c %d = %d", nr1, op, nr2, rezultat);
        break;
    case '/':
        if (nr2 != 0){
            rezultat = nr1 / nr2;
            printf("%d %c %d = %d", nr1, op, nr2, rezultat);
        }
        break;
    case '%':
        if (nr2 != 0){
            rezultat = nr1 % nr2;
            printf("%d %c %d = %d", nr1, op, nr2, rezultat);
        }
        break;
    default:
        printf("Operator invalid!\n");
    }
    return 0;
}
