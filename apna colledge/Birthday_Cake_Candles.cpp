#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int arr[n];
    int max = INT32_MIN;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    }
     int count =0;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i] == max){
            count++;
        }
    }
    
    cout<<count;

    return 0;
}