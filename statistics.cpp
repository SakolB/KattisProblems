#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, min, max, range, i = 0;
    while(scanf("%d", &n) != EOF)
    {
        min = INT_MAX;
        max = INT_MIN;
        while(n--)
        {
            scanf("%d", &x);
            if(x < min) min = x;
            if(x > max) max = x;
        }
        range = max - min;
        printf("Case %d: %d %d %d\n",++i ,min, max, range);
    }
}