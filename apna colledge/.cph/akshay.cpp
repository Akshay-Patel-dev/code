#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    
    int k;
    
      int a = 0;
    for (int i = 1; i <= x; i++)
    {
    
       if (x%i==0 )
       {  
          a++;
           

       } k = a;
          }  
      
    if (k<=2)
    {                                                                                    
      cout<<"prime number is "<<x<<endl;
    }
    else
    {
       cout<<"not prime number"<<endl;
    }
    
    
    

    return 0;
}