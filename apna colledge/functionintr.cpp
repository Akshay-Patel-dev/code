


// #include <iostream>
// using namespace std;
// void print(int num){
//   cout<<num<<endl;
//   return;
// }


// int akshat(int num1, int num2) {

//     print(num1);
//     print(num2);
//     int sum = num1+num2;
//     return sum;

// }

// int main(){
//     int a= 2;
//     cin>>a;
//     int b= 2;
//     cin>>b;
//     cout<<akshat(a,b)<<endl;
//     return 0;
// }


// prime number using function between two numbers

// #include <iostream>
// #include <math.h>
// using namespace std;

// bool isprime (int num) {
//     for (int i =2; i <=sqrt(num); i++)
//     {
//         if (num%i==0)
//         {
//              return false;
//         }
        
      
//     }
//       return true;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;

//     cout<<endl;

//     for (int i = a; i <=b; i++)
//     {
//        if (isprime(i))
//        {
//           cout<<i<<endl;
//        }
       
//     }
    

//     return 0;
// }

// fibonnaci sequence

// #include <iostream>
// using namespace std;

// void aksha(int num) {
//    int t1=0;
//     int t2=1;
//     int nextterm;
//      for (int i = 1; i <=num ; i++)
//      {
//        cout<<t1<<endl;
//        cout<<endl;
//        nextterm=t1+t2;
//        t1=t2;
//        t2=nextterm;

//      }

//      return;
     


// }


// int main(){

//     int n;
//     cin>>n;

//     aksha(n);
//     return 0;
// }

// factorial of n numbers

// #include <iostream>
// using namespace std;

// void aksha(int n){
//     int factorial;
// factorial= 1;
// for (int i = 1; i <=n ; i++)
// {
//     factorial*=i;
//    cout<<factorial<<endl;
// }
//     return;

// }

// int main(){
//      int n;
//     cin>>n;
//     int factorial;

//     aksha(n);
//     return 0;
// }

// factorial of two number

//  #include <iostream>
// using namespace std;
 
// int aksha(int n){
//     int factorial;
// factorial= 1;
// for (int i = 2; i <=n ; i++)
// {
//     factorial*=i;
   
// }
//     return factorial;

// }

// int main(){
//      int n,r;
//     cin>>n>>r;
  

//     int mohit= aksha(n)/(aksha(r)*aksha(n-r));
//     cout<<mohit<<endl;
//     return 0;
// }
 
// pascals factorial triangle 

// aksha= factorial function
//  #include <iostream>
// using namespace std;
 
// int aksha(int n){
//     int factorial;
// factorial= 1;
// for (int i = 2; i <=n ; i++)
// {
//     factorial*=i;
   
// }
//     return factorial;

// }

// int main(){
//      int n;
//     cin>>n;
//     for (int i = 0; i <n; i++)
//     {
//        for (int j =0; j<=i;j++)
//        {
//            cout<<aksha(i)/(aksha(j)*aksha(i-j))<<" ";
           
//        }
//         cout<<endl;
//     }  

//     return 0;
// }
 
// add naturL number


// #include <iostream>
// using namespace std;

// int sum(int n){


//     int add;

//     add=0;
//     for (int i = 0; i <= n; i++)
//     {
//        add+=i;
//     }

//     return add;
    


// }

// int main(){
//     int a;
//     cin>>a;
//     cout<<sum(a)<<endl;
//     return 0;
// }

// check for pyhthagorian triplepet

// #include <bits/stdc++.h>
// using namespace std;

// #include <iostream>
// using namespace std;

// bool bhokum(int x,int y, int z){

//     int a= max(x,max(y,z));
//     int b,c;

//     if (a==x)
//     {
//         b=y;
//         c=z;
//     }  else if (a==y)
//     {
//        b=x;
//        c=z;

//     } else
//     {
//         b=x;
//         c=y;

//     }

//     if (a*a== b*b + c*c)
//     {
//         return true;

//     }
//     else
//     {
//         return false;
//     }
    
    
    
    





// }
// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;
//     if (bhokum(x,y,z))
//     {
//        cout<<"phthagorian tripplet"<<endl;
//     } else
//     {
//          cout<<" not phthagorian tripplet"<<endl;
//     }
    
    
//     return 0;
// }

// finding sum of natural number
#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a = 0;
    for (int i =0; i <=n; i++)
    {
        
       a = a+i;
        
   
    }
    cout<<a;
    return 0;
}
