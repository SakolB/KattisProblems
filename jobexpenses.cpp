#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, total = 0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &k);
        if(k<0) total+=k;
    }
    printf("%d\n", abs(total));
}