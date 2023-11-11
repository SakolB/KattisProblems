#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, temp, prev, total;
    scanf("%d", &t);
    while(t--)
    {
        temp = 1;
        total = 0;
        prev = 1;
        while(scanf("%d", &temp) && temp!=0)
        {
            if(temp > prev*2)
            {
                total+= temp-prev*2;
            }
            prev = temp;
        }
        printf("%d\n", total);
    }
}