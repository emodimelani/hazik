#include <math.h>
#include <stdio.h>

typedef struct
{
    int x;
    int y;
}
Pont;

double distance(Pont p1, Pont p2)
{
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;

    return sqrt((dx * dx) + (dy * dy));
}

int main(void)
{
    Pont a = {1, 2};
    Pont b = {6, 5};

    printf("A két pont közti távolság: %lf\n", distance(a, b));

    return 0;
}