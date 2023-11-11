#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t, total = 0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &t);
        if(t<0)
        {
            total++;
        }
    }
    printf("%d\n", total);
}