#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    scanf("%d %d %d", a, a+1, a+2);
    sort(a, a+3);
    if(a[1]-a[0] < a[2]-a[1])
    {
        printf("%d\n", a[2] - (a[1]-a[0]));
    }
    else if(a[2]-a[1] < a[1] - a[0])
    {
        printf("%d\n", a[1]-(a[2]-a[1]));
    }
    else
    {
        printf("%d\n", a[2]+(a[2]-a[1]));
    }
}