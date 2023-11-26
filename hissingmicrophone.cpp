#include <bits/stdc++.h>
using namespace std;

int main() {
    char input[31];
    scanf("%s", input);
    bool flag = true;
    char prev = '\0';
    int i = 0;
    while(i < 30)
    {
        if(input[i] == 's' && prev == input[i])
        {
            printf("hiss\n");
            flag = false;
            return 0;
        }
        else
        {
            prev = input[i];
        }
        i++;
    }
    printf("no hiss\n");
}