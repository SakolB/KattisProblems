#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, leftover = 0;
    scanf("%d\n%d", &x, &n);
    leftover = x;
    while(n--)
    {
        int p;
        scanf("%d", &p);
        leftover += x-p; 
    }
    printf("%d\n", leftover);
}