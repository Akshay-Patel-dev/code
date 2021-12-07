#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>arr[i][j];
        }
    } 
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i == j){
                sum +=arr[i][j];
            }
        }
    }
      
     int sum2 = 0;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i+j == n-1){
                sum2 +=arr[i][j];
            }
        }
    } 
      
    int total_sum = sum - sum2;
    cout<< abs(total_sum);

    return 0;
}