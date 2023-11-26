#include <bits/stdc++.h>
using namespace std;

int main() {
    char card[3];
    int frequency[14] = {0};
    int index;
    char c[14] = {'A', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    for(int i = 0; i < 5; i++)
    {
        scanf("%s", card);
        for(int i = 0 ; i < 14; i++)
        {
            if(card[0] == c[i])
            {
                frequency[i]++;
                i = 14;
            }
        }
    }
    sort(frequency, frequency+14);
    printf("%d\n", frequency[13]);
}