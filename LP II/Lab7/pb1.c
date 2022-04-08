#include <stdio.h>

typedef struct {
    int x;
    int y;
}Point;

typedef struct {
    Point topLeft;
    Point bottomRight;
}Rectangle;

int main()
{
    Point p1, p2;
    Rectangle rect;

    printf("p1.x = ");
    scanf("%d", &p1.x);

    printf("p1.y = ");
    scanf("%d", &p1.y);

    printf("p2.x = ");
    scanf("%d", &p2.x);

    printf("p2.y = ");
    scanf("%d", &p2.y);

    printf("p1 la ( %d, %d )\n", p1.x, p1.y);
    printf("p2 la ( %d, %d )\n", p2.x, p2.y);

    rect.topLeft = p1;
    rect.bottomRight = p2;

    printf("Stanga sus la ( %d, %d )\n", p1.x, p1.y);
    printf("Dreapta jos la ( %d, %d )\n", p2.x, p2.y);
    return 0;
}