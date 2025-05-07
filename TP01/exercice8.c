#include <stdio.h>

int diviseur (int n);

int main (void)
{
    int n = 36;
    diviseur(n);
}

int diviseur (int n) 
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
