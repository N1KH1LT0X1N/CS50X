#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc,string argv[])
{
    if(argc!=2)
    {
        printf("Usage : ./ceaser key\n");
        return 1;
    }
    else
    {
        int argvlen = strlen(argv[1]);
        for(int x = 0; x<argvlen; x++)
        {
            int check = isdigit(argv[1][x]);
            if(check == 0)
            {
                printf("Usage : ./ceaser key\n");
                return 2;
            }
        }
    }
    int k = atoi(argv[1]);
    int a = k%26;
    string inputtext = get_string("Plaintext : ");
    int sl = strlen(inputtext);
    printf("Ciphertext: ");
    for(int i = 0; i<sl; i++)
    {
        char temp = inputtext[i];
        if(isupper(temp))
        {
            if(((int)temp+a)>90)
            {
                int l = ((int)temp+a)-90;
                printf("%c",temp+l);
            }
            else
            {
                printf("%c",temp+a);
            }
        }
        else
        {
            if(((int)temp+a)>122)
            {
                int m = ((int)temp+a)-122;
                printf("%c",temp+m);
            }
            else
            {
                printf("%c",temp+a);
            }
        }
    }
    printf("\n");
    return 0;
}
