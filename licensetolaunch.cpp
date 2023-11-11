#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 0, imin;
    long x, min = LONG_MAX; 
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        if(x<min)
        {
            min = x;
            imin = i;
        }
        i++;
    }
    printf("%d", imin);
}