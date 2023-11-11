#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, g, x, prevx, kingindex;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &g);
        int i = 0;
        while(g--)
        {
            scanf("%d", &x);
            if(i!=0 && x != prevx+1)
            {
                kingindex = i;
            }
            prevx = x;
            i++;
        }
        printf("%d\n", kingindex);
    }
}