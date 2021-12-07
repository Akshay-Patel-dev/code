// #include <iostream>
// using namespace std;

// int linearsearch(int ar[],int n,int key){
//     for (int i = 0; i < n; i++)
//     {
//        if (ar[i]==key)
//        {
//           return i;
//        }
       
//     }
//     return -1;
// }




// int main(){
//     cout<<"input an number"<<endl;
//     int n;
//     cin>>n;
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>ar[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<ar [i];
//     }
    
//     int key;
//     cin>>key;

//     cout<<linearsearch(ar,n,key)<<endl;
//     return 0;
// }
// for binary searhing
// #include <iostream>
// using namespace std;

// int binarysearch(int ar[],int n,int key){
//     int s=0;
//     int e=n;
//     while (s<=e)
//     {
//        int mid=(s+e/2);
//        if (ar[mid]==key)
//        {
//            return mid;
//        } else if(ar[mid]>key){
//            e=mid-1;
//        }
//        else  {
//            e=mid+1;
//        }
//     }
    
//     return -1;
// }




// int main(){
//     cout<<"input an number"<<endl;
//     int n;
//     cin>>n;
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>ar[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<ar [i];
//     }
    
//     int key;
//     cin>>key;

//     cout<<binarysearch(ar,n,key)<<endl;
//     return 0;
// }