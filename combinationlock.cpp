#include <bits/stdc++.h>
using namespace std;
int counter(int start, int end)
{
    if(start > end)
    {
        return (start-end)*9;
    }
    return (40-end+start)*9;
}
int clock(int start, int end)
{
    if(start > end)
    {
        return (40-start+end)*9;
    }
    return (end-start)*9;
}
int main() 
{
    int initial, n1, n2, n3;
    
    while(scanf("%d %d %d %d", &initial, &n1, &n2, &n3) && !(initial ==0 && n1==0 && n2==0 && n3==0))
    {
        int totalDegree = 0;
        totalDegree += 720;
        if(initial!=n1) totalDegree += counter(initial, n1);
        totalDegree += 360;
        if(n1!=n2) totalDegree += clock(n1, n2);
        if(n2!=n3) totalDegree += counter(n2, n3);
        printf("%d\n", totalDegree);
    }
}