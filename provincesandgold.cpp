#include <bits/stdc++.h>
using namespace std;

int main() {
    int G, S, C;
    scanf("%d %d %d", &G, &S, &C);
    int totalbuyingPower = 3 * G + 2 * S + 1 * C;

    if(totalbuyingPower >= 8)
    {
        printf("Province or Gold");
    }
    else if(totalbuyingPower >= 6)
    {
        printf("Duchy or Gold");
    }
    else if(totalbuyingPower >= 5)
    {
        printf("Duchy or Silver");
    }
    else if(totalbuyingPower >=3)
    {
        printf("Estate or Silver");
    }
    else if(totalbuyingPower >=2)
    {
        printf("Estate or Copper");
    }
    else
    {
        printf("Copper");
    }
    printf("\n");
}