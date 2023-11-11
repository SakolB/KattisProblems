#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, dm, di, i = 0, k = -1;
    scanf("%d %d", &n, &dm);
    while(n--)
    {
        scanf("%d", &di);
        if(di <= dm)
        {
            k = i;
            break;
        }
        i++;
    }
    if(k < 0)
    {
        printf("It had never snowed this early!\n");
    }
    else
    {
        printf("It hadn't snowed this early in %d years!\n", k);
    }

}