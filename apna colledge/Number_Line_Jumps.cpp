#include <iostream>
using namespace std;

int main(){
    int x,v1;
    cin>>x;
    cin>>v1;
    int x2,v2;
    cin>>x2;
    cin>>v2;
    long long int sum1 = 0;
    long long int sum2 = 0;
   long long  int z1,z2;
   for(int i=0;i<=v1*x2;i++){
       z1 = i*v1;
       z2 = i*v2;
       sum1 = x + z1;
       sum2 = x2 + z2;
       if(sum1 == sum2){
           cout<< "YES"<<endl;
           break;
       }

   }

   if(sum1 != sum2){
       cout<<"NO"<<endl;
   }

   


    
    
    return 0;
}