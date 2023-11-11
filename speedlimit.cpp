#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, time, prevtime, totalDistance;
    while(scanf("%d", &n) && n!=-1)
    {
        totalDistance = 0;
        prevtime = 0;
        while(n--)
        {
            scanf("%d %d", &s, &time);
            totalDistance+= s*(time-prevtime);
            prevtime = time;
        }
        printf("%d miles\n", totalDistance);
    }
}