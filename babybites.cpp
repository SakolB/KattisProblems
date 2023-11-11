#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a = 0, skipped = 0;
    bool fishy= false;
    char c[6];
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", &c);
        if(c[0] != 'm')
        {
            if(a+skipped+1 != atoi(c))
            {
                fishy = true;
            }
            a = atoi(c);
            skipped = 0;
        }
        else
        {
            skipped+=1;
        }
    }
    if(fishy)
    {
        printf("something is fishy\n");
    }
    else
    {
        printf("makes sense\n");
    }
}