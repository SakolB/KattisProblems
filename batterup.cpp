#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k,count = 0, total = 0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &k);
        if(k >= 0)
        {
            total+=k;
            count++;
        }
    }
    double average = double(total)/double(count);
    printf("%lf\n", average);
}