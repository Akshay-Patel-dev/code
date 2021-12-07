#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int arr[n];
    int m;
    for(int i = 0;i<n;i++){
       cin>>arr[i];
       
    }
     
    for (int  i = 0; i < n; i++)
    {  m = arr[i]/5;
        if (arr[i]>36){
            
            
            if ((m+1)*5-arr[i] <= 3) {
                     
                     if(((m+1)*5-arr[i]) == 3){
                     cout<<arr[i]<<endl;
                            }
                    
                  
                  else { cout<<(m+1)*5<<endl;}
        } 

        else{
            cout<<arr[i]<<endl;
        }
            
         }
        
        else{
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}