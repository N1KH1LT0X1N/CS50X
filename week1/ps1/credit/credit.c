#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter your card number\n");
    long n;
    do
    {
        n = get_long("Number:");
    }
    while(n<1);
    printf("%ln\n",n);
}
