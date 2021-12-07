#include <iostream>
using namespace std;
void swap (int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp ;
}


int main(){
    // int a = 10;
    // int *apoin;
    // apoin= &a;
    // cout<<*apoin<<endl;
    // cout<<apoin<<endl;
    // *apoin= 119;
    // cout<<a;
    // apoin++;
    // cout<<apoin;

//    arrays concept;

    // int arr[]= {1,2,3,8,9};
    // cout<<*arr<<endl;
    // cout<<arr<<endl;
      
    //   int *poin= arr;
    //   for (int i = 0; i < 5 ; i++)
    //   {
    //      cout<<*poin<<endl;
    //      poin++;
    //   }
  
//    seccond method

    //     int arr[]= {1,2,3,8,9};
    // cout<<*arr<<endl;
    // cout<<arr<<endl;
      
    //   int *poin= arr;
    //     for (int i = 0; i < 5 ; i++)
    //   {
    //      cout<<*(arr+i)<<endl;
         
    //   }
    // pointers in pointers
    
    int a= 2;
    int b= 8;
    int *abk;
    abk=&a;
    int *bak;
    bak=&b;
    swap(*abk,*bak);

    cout<<a<<" "<<b<<endl;
    cout<<*abk<<endl;
    cout<<abk<<endl;

    return 0;
}