#include <bits/stdc++.h>
using namespace std;
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if(X == 0 && Y == 1)
    {
        printf("ALL GOOD");
    }
    else if(Y == 1)
    {
        printf("IMPOSSIBLE");
    }
    else
    {
        double p = X/(1-double(Y));
        printf("%lf", p);
    }
    printf("\n");
    
}