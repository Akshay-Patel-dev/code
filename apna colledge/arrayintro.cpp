// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"insert an number"<<endl;
//     int n;
//     cin>>n;

//     int array[n];
//     for(int i=0; i<n;i++){
//         cin>>array[i];
//     }
//     for(int i=0; i<n;i++){
//         cout<<array[i]<<"  ";
//     }
   

//     return 0;
// }

// taking input in array. find maximum no and minimum no in it.

// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"provide no for consideration"<<endl;
//     int n;
//     cin>>n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//        cin>>array[i];
//     }
//    int Max = INT16_MIN;
//    int Min = INT32_MAX;


//    for (int  i = 0; i < n; i++)
//    {
//        if (array[i]>Max)
//        {
//            Max = array[i];
           
//        }
//        if (array[i]<Min)
//        {
//            Min = array[i];

//        }
       
//    }
   
//    cout<<Max << " " <<Min<<endl;

   
    
//     return 0;
// }  


// BINARY SEARCH IN ARRAY

// #include <iostream>
// using namespace std;

//   int binarysearch (int array[],int n, int key){
//      int s,e;
//      s = 0;
//      e = n;
     
//      while (s<=e)
//      { int mid = (s+e)/2;
//         if (array[mid]==key)
//         {
//             return mid;
//         }
//         else if (array[mid]>key){
           
//             e = mid- 1;
//         }
//         else  {
           
//             s = mid + 1;
//         }
//      }
     
//  return -1;
//   }

// int main(){
//      cout<<"provide no for consideration"<<endl;
//     int n;
//     cin>>n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//        cin>>array[i];
//     }
//     cout<<"provide key for consideration"<<endl;
//     int key;
//     cin>>key;
//     cout<<binarysearch(array,n,key);
    
//     return -1;
// }
         
        // FOR SORTING OF ARRAY  USING SELECTION SORT

        // #include <iostream>
        // using namespace std;
        
        // int main(){
        //     int x ;
        //     cin>>x;
        //     int array [x];
        //     for (int i = 0; i < x; i++)
        //     {
        //         cin>>array[i];

        //     }

        //     for (int i = 0; i < x-1; i++)
        //     {
        //        for (int j = i+1; j <x ; j++)
        //        {
        //            if (array[j]<array[i])
        //            {
        //                int temp = array[j];
        //                array[j] = array[i];
        //                array [i] = temp;
        //            }
                   
        //        }
               
        //     }
            
        //     for (int  i = 0; i < x; i++)
        //     {
        //         cout<<array[i]<<endl;
        //     }
            

        //     return 0;
        // }


        //    FOR SORTING OF ARRAY USING AN INSERTIION SORT 

        //  #include <iostream>
        //  using namespace std;
         
        //  int main(){
        //          int n;
        //          cin>>n;
        //                  int current ;
        //          int arr[n];
        //          for (int i = 0; i < n; i++)
        //          {
        //                cin>>arr[i];
        //          }
                 
        //          for (int i= 1 ; i<n; i++){
        //                  int j= i-1;
        //                  int current = arr[i];
        //                  while (arr[j]>current && j>=0)
        //                  { 
        //                         arr[j+1]= arr[j];
        //                         j--;
        //                  }
                         
        //                  arr[j+1]=current;


        //          }

        //           for (int i = 0; i < n; i++)
        //          {
        //                cout<<arr[i]<<endl;
        //          }
                 
        //          return 0;
        //  }