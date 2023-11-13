#include <bits/stdc++.h>
using namespace std;

int main() {
    char record[201];
    scanf("%s", record);
    int score[2] = {0};
    int i = 0;
    bool tie_ten = false;
    for(char c: record)
    {
        if(c == 'A')
        {
            i = 0;
        }
        else if( c == 'B')
        {
            i = 1;
        }
        else
        {
            score[i] += (c - '0');
        }
        if(score[0] == 10 && score[1] == 10)
        {
            tie_ten = true;
        }
        if(tie_ten)
        {
            if(score[0] - score[1] >= 2)
            {
                printf("A\n");
                return 0;
            }
            else if(score[1] - score[0] >=2)
            {
                printf("B\n");
                return 0;
            }
        }
        else
        {
            if(score[0] >= 11)
            {
                printf("A\n");
                return 0;
            }
            else if(score[1] >= 11)
            {
                printf("B\n");
                return 0;
            }
        }
    }
    
}