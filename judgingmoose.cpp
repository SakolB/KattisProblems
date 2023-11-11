#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    scanf("%d %d", &l, &r);
    int total = 2*(max(l, r));
    if(l== 0 && r == 0) printf("Not a moose\n");
    else
    {
        if(l == r) printf("Even ");
        else if(l != r) printf("Odd ");
        printf("%d\n", total);
    }

}