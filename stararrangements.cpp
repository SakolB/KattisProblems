#include <bits/stdc++.h>
using namespace std;

int main() {
    int S;
    scanf("%d", &S);
    printf("%d:\n", S);
    for(int i = 2; i < S; i++)
    {
        for(int j = i-1; j <= i; j++)
        {
            if(S%(i+j) == 0)
            {
                printf("%d,%d\n", i, j);
            }
            else if((S+j)%(i+j) == 0)
            {
                printf("%d,%d\n", i, j);
            }
        }
    }
}