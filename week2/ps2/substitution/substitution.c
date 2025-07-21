#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc,string argv[])
{
    if(argc!=2)
    {
        printf("Usage : ./substitution key\n");
        return 1;
    }
    else
    {
        int j=0;
        int argvlen = strlen(argv[1]);
        for(int x = 0; x<argvlen; x++)
        {
            int check = isdigit(argv[1][x]);
            j=j+1;
            if(check != 0)
            {
                printf("Usage : ./substitution key\n");
                return 2;
            }
        }
        if(j!=26)
        {
            printf("Key must contain 26 characters\n");
            return 3;
        }
    }
    char arkey[26];
    for(int i = 0; i<26; i++)
    {
        arkey[i]=toupper(argv[1][i]);
    }
    string pt = get_string("Plaintext: ");
    char l1[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    printf("Ciphertext: ");
    for(int l = 0; l<26; l++)
    {
        char tempc = toupper(pt[l]);
        for(int k = 0; k<26; k++)
        {
            char templ1 = l1[k];
            if(templ1==tempc)
            {
                printf("%c",arkey[k]);
            }
        }
    }
    printf("\n");
    return 0;
}
