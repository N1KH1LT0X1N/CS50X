#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("How much change do you owe?\n");
    int n;
    do
    {
        n = get_int("Change:");
    }
    while (n < 1);
    int t = n, i = 0, j = 0, k = 0, l = 0;
    while (t >= 25)
    {
        t = t - 25;
        i++;
    }
    while (t >= 10)
    {
        t = t - 10;
        j++;
    }
    while (t >= 5)
    {
        t = t - 5;
        k++;
    }
    while (t >= 1)
    {
        t = t - 1;
        l++;
    }
    int s = i + j + k + l;
    printf("%i\n", s);
}
