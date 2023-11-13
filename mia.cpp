#include <bits/stdc++.h>
using namespace std;
int mia(char roll[]);
int main() 
{
    int s0, s1, r0, r1;
    char p1[3];
    char p2[3];
    p1[2] = '\0';
    p2[2] = '\0';
    while(scanf("%d %d %d %d", &s0, &s1, &r0, &r1) && s0!=0 && s1!=0 && r0!=0 && r1!=0)
    {
        p1[0] = '0' + s0;
        p1[1] = '0' + s1;
        p2[0] = '0' + r0;
        p2[1] = '0' + r1;
        if(mia(p1) > mia(p2))
        {
            // printf("mia p1 = %d\n", mia(p1));
            // printf("mia p2 = %d\n", mia(p2));
            printf("Player 1 wins.\n");
        }
        else if(mia(p2) > mia(p1))
        {
            // printf("mia p1 = %d\n", mia(p1));
            // printf("mia p2 = %d\n", mia(p2));
            printf("Player 2 wins.\n");
        }
        else
        {
            // printf("mia p1 = %d\n", mia(p1));
            // printf("mia p2 = %d\n", mia(p2));
            printf("Tie.\n");
        }
    }
}

int mia(char roll[])
{
    char temp[3];
    temp[0] = roll[0];
    temp[1] = roll[1];
    temp[2] = roll[2];
    if(temp[0] < temp[1])
    {
        swap(temp[0], temp[1]);
    }
    int a = atoi(temp);
    if(a == 12 || a == 21)
    {
        return 7+66;
    }
    if(a%11 == 0)
    {
        return (a/11)+66;
    }
    else
    {
        return a;
    }
    return 0;
}