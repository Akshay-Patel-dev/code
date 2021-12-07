#include <iostream>
using namespace std;

int perfect(int n){
    for (int j = 1; j<=n; j++){
      int sum = 0;
    for (int i = 1; i <= j; i++)
    {
       if (j%i==0)
       {
           sum = sum + i;
           if (sum==j)
        {
       cout<<j<<endl; }
       } 
         }
       
     
        
           }  
   
        return 0;
    }
    
    
  

int main(){
    int n;
  
    cin>>n;
    cout<<perfect(n)<<endl;
}