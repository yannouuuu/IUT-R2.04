#include <stdio.h>

int plus_petit(int a, int b, int c);

int main (void)
{
    plus_petit(8, 5, 4);
    plus_petit(3, 5, 4);
    plus_petit(8, 5, 9);
    plus_petit(3, 5, 9);
    return 0;
}

int plus_petit(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    printf("Le plus petit est : %d\n", min);
}