#include <iostream>
using namespace std;

int main(){
    int s,t;
    cin>>s;
    cin>>t;
    int a,b;
    cin>>a;
    cin>>b;
    int m,n;
    cin>>m;
    cin>>n;
    int arr[m];
    int array[n];
    int count_a =0;
    int count_b =0;
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    for(int i =0; i<m; i++){
        cin >> array[i];
    }
    for(int i =0; i<n; i++){
        if((a - arr[i])>=s && (a - arr[i])<=t){
             count_a++;
        }
    }    
    for(int i =0; i<m; i++){
        if((a - array[i])>=s && (a - array[i])<=t){
             count_b++;
        }
    }
   
   cout<<count_a<<endl;
   cout<<count_b<<endl;

    
    
    
    return 0;
}