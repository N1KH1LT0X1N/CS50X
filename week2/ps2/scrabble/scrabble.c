#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char l1[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char l2[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int score[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");
    int scorep1,scorep2;
    int lenp1 = strlen(p1);
    int lenp2 = strlen(p2);
    for(int i = 0; i<lenp1; i++)
    {
        char temp = p1[i];
        for(int j = 0; j<26; j++)
        {
            if(temp==l1[j] || temp==l2[j])
            {
                scorep1 = scorep1 + score[j];
            }
        }
    }
    for(int k = 0; k<lenp2; k++)
    {
        char temp = p2[k];
        for(int l = 0; l<26; l++)
        {
            if(temp==l1[l] || temp==l2[l])
            {
                scorep2 = scorep2 + score[l];
            }
        }
    }
    printf("Score P1: %i",scorep1);printf("\n");
    printf("Score P2: %i",scorep2);printf("\n");
    if(scorep1>scorep2)
    {
        printf("Player 1 Wins!!!\n");
    }
    else if(scorep2>scorep1)
    {
        printf("Player 2 Wins!!!\n");
    }
    else
    {
        printf("Its a Tie!!!\n");
    }
}
