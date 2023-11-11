#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, e, c, n;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d %d", &r, &e, &c);
        if(e-r > c)
        {
            printf("advertise");
        }
        else if(e-r < c)
        {
            printf("do not advertise");
        }
        else
        {
            printf("does not matter");
        }
        printf("\n");
    }
}