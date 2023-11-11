#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int c = pow(4,n);
    int point_on_each_side = sqrt(c) + 1;
    int total = point_on_each_side*point_on_each_side;
    printf("%d\n", total);

}