#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    int sum = 0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    
    sum -= arr[k];
    
    
    int b;
    cin>>b;
    if( b == sum/2 ){
    cout<<"Bon Appetit";
    }
    else {int overcharged = b - (sum/2);
    cout<<overcharged;}
    
    return 0;
}