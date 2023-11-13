#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    char order[4];
    int index0, index1, index2;
    scanf("%d %d %d", a, a+1, a+2);
    sort(a, a+3);
    scanf("%s", order);
    index0 = abs(order[0]-65);
    index1 = abs(order[1]-65);
    index2 = abs(order[2]-65);
    printf("%d %d %d\n", a[index0], a[index1], a[index2]);

}