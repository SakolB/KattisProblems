#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    scanf("%lf", &x);
    double y = 1000*(5280/4854.0)*x;
    int result = round(y);
    printf("%d\n", result);
}