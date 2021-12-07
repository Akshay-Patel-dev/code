// #include<iostream>
// using namespace std;
// int main ()
// {

// float x;
// float y;
// float z;
// float avg;
// cout<<"enter first subject marks"<<endl;
// cin>>x;
// cout<<"enter second subject marks"<<endl;
// cin>>y;
// cout<<"enter third subject marks"<<endl;
// cin>>z;
// avg=x+y+z/3;
// if (avg>=90)
// {
// cout<<"Result: grade is A"<<endl;
// }
// else if(avg>=70&&avg<90)
// {
// cout<<"Result: grade is B"<<endl;
// }
// else if(avg>=50&&avg<70)
// {
// cout<<"Result: grade is C"<<endl;
// }
// else
// {
// cout<<"Result: grade is F"<<endl;
// }
//  return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 300;
 int hsh[N];


int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n;i++){
        cin>>arr[i];

        hsh[arr[i]]++;

    }

     for(int i = 0; i<n;i++){
       if(arr[i] == 5 and  arr[i+1] == 6){
           cout<<"this is valid statement";
       }

    }
    cout<<hsh[5];
    return 0;
}

