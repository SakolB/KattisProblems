#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int x;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        if(x%2 == 0)
        {
            printf("%d is even\n", x);
        }
        else
        {
            printf("%d is odd\n", x);
        }
    }
}