#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int count = 0;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
        if(j>i && (arr[i]+arr[j])%k == 0){
            count++;
        }
    }
    }
    cout<<count; 
    return 0;
}