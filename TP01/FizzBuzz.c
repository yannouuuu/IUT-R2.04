#include <stdio.h>

void fizzbuzz(int n);

int main (void) 
{
    int i;
    for (i = 1; i <= 30; i++)
    {
        fizzbuzz(i);
    }
    return 0;
}

void fizzbuzz(int n) 
{
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("fizzbuzz\n");
    }
    else if (n % 3 == 0)
    {
        printf("fizz\n");
    }
    else if (n % 5 == 0)
    {
        printf("buzz\n");
    }
    else
    {
        printf("%d\n", n);
    }
}
