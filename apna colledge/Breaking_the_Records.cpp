#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
    
    int max = INT32_MIN;
    int min = INT32_MAX;
    int count = 0;
    int count2 = 0;
    for (int  i = 1; i < a; i++)
    {
        cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
            count++;
        }
        if(arr[i]<min){
            min = arr[i];
            count2++;
        }
    }
    cout<<count<<" ";
    cout<<count2<<endl;
    
    return 0;
}