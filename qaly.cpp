#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double qual, quant;
    double sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &qual, &quant);
        sum += qual*quant;
    }
    printf("%lf\n", sum);
}