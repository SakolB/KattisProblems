#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    if((a >= 1) && (b >= 1) && (c >= 1) && (n >=3) && (a+b+c >= n) )
    {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}