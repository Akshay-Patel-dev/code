#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;

    int  day;
    int box;
    int arr[n];
    
    
    int count =0;
    for(int i= 0;i< n; i++){
        cin>>arr[i];
        
    }
    cin>>day>>box;
     
    for(int i = 0; i<n;i++){
       int s = 0;
        for(int j = i; j<(i+box);j++){
            
            s += arr[j];  
        }
        if (s == day )
            {
                count++;
            }

        
    }
    
     cout<<count<<endl;
    return 0;
}