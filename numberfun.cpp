#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a+b == c || a-b == c || b-a == c || a*b == c || a/double(b) == c || b/double(a) == c)
        {
            printf("Possible");
        }
        else
        {
            printf("Impossible");
        }
        printf("\n");
    }
}