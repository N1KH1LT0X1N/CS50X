#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How tall are the pyramids????\n");
    int n;
    do
    {
        n = get_int("Size:");
    }
    while(n<1);
    for(int i = 1;i<=n;i++)
    {
        for(int j = n;j>i;j--)
        {
            printf(" ");
        }
        for(int k = 1;k<=i;k++)
        {
            printf("#");
        }
        printf("  ");
        for(int l = 0;l<i;l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
