#include <bits/stdc++.h>
using namespace std;

int main(){
    int y, d =0, c = 256;
    cin>>y;
    vector<int>v;
    v = {31,28,31,30,31,30,31,31};
    if(y % 4 == 0){
        v[1] = 29;
    }
    
    for(auto element: v){
        d += element;
    }
    d = 256 - d;
    cout<<d<<"."<<"09"<<"."<<y;

    return 0;
}