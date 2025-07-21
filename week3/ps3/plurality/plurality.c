#import <cs50.h>
#import <string.h>
#import <stdio.h>
#define MAX 9

bool vote(string name);
void print_winner(void);

typedef struct
{
    string name;
    int votes;
}
candidate;

int candidate_count;
candidate candidates[MAX];

int main(int argc,string argv[])
{
    if((argc-1)>=2 & (argc-1)<=9)
    {
        candidate_count = argc-1;
        printf("Numbers of Candidates: %i\n",argc-1);
        for(int i=0; i<argc-1; i++)
        {
            candidates[i].name = argv[i+1];
            candidates[i].votes = 0;
        }
        int vn = get_int("Number of Voters are: ");
        string voted[vn];
        for(int i = 0; i<vn; i++)
        {
            voted[i] = get_string("Vote: ");
            if(vote(voted[i])==true)
            {
                return 0;
            }
            else
            {
                printf("Candidate does not exist!!\n");
                return 3;
            }
        }
        print_winner();
    }
    else if(argc-1>9)
    {
        printf("Maximum number of candidates are: %i\n",MAX);
        return 1;
    }
    else
    {
        printf("There need to be 2 or more candidates!!!\n");
        return 2;
    }
}

bool vote(string nametemp)
{
    for(int j = 0; j<candidate_count; j++)
    {
        if(strcmp(candidates[j].name,nametemp)==0)
        {
            candidates[j].votes++;
            return true;
        }
    }
    return false;
}

void print_winner(void)
{
    int winnum = 0;
    int winorder;
    for(int k = 0; k<candidate_count; k++)
    {
        if(candidates[k].votes>winnum)
        {
            winnum = candidates[k].votes;
            winorder = k;
        }
    }
    printf("Candidate with the highest votes is: %s\n",candidates[winorder].name);
    return 0;
}
