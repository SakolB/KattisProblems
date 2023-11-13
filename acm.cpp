#include <bits/stdc++.h>
using namespace std;

int main() {
    int min;
    int minutes[100] = {-1};
    bool solved[100] = {false};
    int missAttemp[100] = {0};
    char right[6];
    char p_id;
    int problemAttempted = 0;
    while(true)
    {
        scanf("%d", &min);
        if(min == -1)
        {
            break;
        }
        scanf(" %c %s", &p_id, right);
        if(right[0] == 'r')
        {
            if(!solved[abs(65-p_id)])
            {
                solved[abs(65-p_id)] = true;
                minutes[abs(65-p_id)] = min;
                if(missAttemp[abs(65-p_id)] == 0)
                {
                    problemAttempted++;
                }
            }
        }
        else
        {
            if(missAttemp[abs(65-p_id)] == 0)
            {
                problemAttempted++;
            }
            missAttemp[abs(65-p_id)]++;
        }
    }
    int totalTime = 0;
    int p_solved = 0;
    for(int i = 0; i < 26; i++)
    {
        if(solved[i])
        {
            totalTime += minutes[i] + 20*missAttemp[i];
            p_solved++;
        }
    }
    printf("%d %d\n", p_solved, totalTime);

}