#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int number ;
    cin>>number;

    pair<int,int>parr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        parr[i].first = i;
        parr[i+1].second = i+1;
        count++;
        // if(parr[i].first == number || parr[i].second == number)
        // {cout<<count;}
    }
    
    for (int i = 0; i < n; i++)
    {
        // cout<<parr[i].first<<endl;
        // cout<<parr[i+1].first<<endl;
        if(parr[i].first == number || parr[i].second == number)
        {
            cout<<i-1;
        }
    }
    
    
}