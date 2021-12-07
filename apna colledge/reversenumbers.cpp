// to check prime no
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     bool flag= 0;
//     for (int i = 2; i < sqrt(a); i++)
//     {
//         if (a%i==0)
//         {
//            cout<<"this is not a prime number"<<endl;
//             flag= 1;
//         }
//         if (flag==0)
//         {
//             cout<<"prime no"<<endl;
//         }

//     }
    
//     return 0;
// }



// to reverse a  number
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverse=0;

    while (n>0)
    {
        int lastdigit=n%10;
        reverse= 10*reverse + lastdigit;
        n=n/10;
    } cout<<reverse<<endl;
    
    return 0;
}


// to check armstrong number

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     int originaln=n;

//     while (n>0)
//     {
//         int lastdigit= n%10;
//         sum+= pow(lastdigit,3);
//         n=n/10;
//     } 
//         if (sum==originaln)
//         {
//             cout<<"yah it is an armstrong number"<<endl;
//         }
//          else
//          {
//               cout<<"yah it is not an armstrong number"<<endl;
//          }
         
//     return 0;
// }