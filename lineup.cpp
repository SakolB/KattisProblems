#include <bits/stdc++.h>
using namespace std;

bool comp(vector<string> arr1, vector<string> arr2)
{
    for(int i = 0; i < arr1.size(); i++)
    {
        if(arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    vector<string> k;
    vector<string> sorted;
    string input;
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++)
    {
        cin >> input;
        k.push_back(input);
    }
    copy(k.begin(), k.end(), sorted.begin());
    sort(sorted.begin(), sorted.end());
    bool flag = true;
    if(comp(k, sorted))
    {
        cout << "INCREASING\n";
        flag = false;
    }
    reverse(sorted.begin(), sorted.end());
    if(comp(k, sorted))
    {
        cout << "DECREASING\n";
        flag = false;
    }
    if(flag)
    {
        cout << "NEITHER\n";
    }

}