#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    float j = n;
    float posi = 0;
    float neg = 0;
   float equal =0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i]>0){
            posi++;
        }
        if(arr[i]<0){
            neg++;
        }

        if (arr[i] == 0){
            equal++;
        }
    } 
    
    float c = posi/j;
    float d = neg/j;
    float e = equal/j;

    cout<<c<<d<<e;

    return 0;
}