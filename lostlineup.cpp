#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int d[100];
    scanf("%d", &n);
    for(int i = 1 ; i < n; i++)
    {
        int k;
        scanf("%d", &k);
        d[k] = i+1;
    }
    printf("1 ");
    for(int i = 0; i < n-1; i++)
    {
        printf("%d ", d[i]);
    }
    printf("\n");



}