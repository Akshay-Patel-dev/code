// #include <iostream>
// using namespace std;

// form an rectangle
// int main(){
//     int row,column;
//     cout<<"please enter a number"<<endl;
//     cin>>row>>column;
//         for (int i = 1; i <= row; i++){
//         for (int j =1 ; j <= column; j++){
//            cout<<"*";
//         }
//          cout<<endl;
//     }  
    
//     return 0;
// }

// form an hole rectangle
// #include <iostream>
// using namespace std;

// int main(){
//     int row,column;
//     cout<<"please enter a number"<<endl;
//     cin>>row>>column;
//         for (int i = 1; i <= row; i++){
//         for (int j =1 ; j <= column; j++){
//             if (i==1 || i==row || j==1 || j==column)
//             {
//                cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
            
            
           
           
//         }
//          cout<<endl;
//     }  
    
    
//     return 0;
// }

// inverted rectangle by using two inputs
// #include <iostream>
// using namespace std;

// int main(){
//     int row,column;
//     cout<<"please enter a number"<<endl;
//     cin>>row>>column;
//         for (int i = 1; i <= row; i++){
//         for (int j =column; i <= j ; j--){
//            cout<<"*";
//         }
//          cout<<endl;
//     }  
    
//     return 0;
// }

// form inverted rectangle by using one input
// #include <iostream>

//  using namespace std;

// int main(){
//     int a;
//     cout<<"enter a no"<<endl;
//     cin>>a;
//     for (int i = 0; i <=a; i++)
//     {
//         for (int j = a;i<=j; j--)
//         {
//               cout<<"*";
//         }
//          cout<<endl;
//     }
    
//     return 0;
// }

// half 180 degree pyramid

// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     for (int i = 1; i <= a; i++)
//     {
//        for (int j =1; j <= a;j++)
//        {
//            if (j<= a-i)
//            {
//               cout<<" ";
//            }
//            else
//        {
//            cout<<"*";
//        }
//        } 
       
//        cout<<endl;
//     }
    
//     return 0;
// }



// half pyramid using nubers
// #include <iostream>
// using namespace std;

// int main(){
//     int n; 
//     cin>>n;
//     for ( int i = 1; i <=n; i++)
//     {
//        for ( int j = 1; j<=i; j++)
//        {
//            cout<<i<<" ";
//        } cout<<endl;
       
//     } 
    
//     return 0;
// }

// floyids triangle

// #include <iostream>
// using namespace std;

// int main(){
//     int n; 
//     cin>>n;
//     int count =1;
//     for ( int i = 1; i <=n; i++)
//     {
//        for ( int j = 1; j<=i; j++)
//        {
//            cout<<count<<" ";
//            count++;
//        } cout<<endl;
       
//     } 
    
//     return 0;
// }
//  butterfly question

// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     for (int i = 1; i <=a; i++)
//     {
//         for (int j =1; j<=i; j++)
//         {
//             cout<<"*";
//         }
//           int space= 2*a - 2*i;
//         for (int j = 1; j<= space; j++)
//         {
//             cout<<" ";
//         }
//         for (int j =1; j<=i; j++)
//         {
//             cout<<"*";
//         }
        
//          cout<<endl;
//     } 
    
//     for (int i = a; i >=1; i--)
//     {
//         for (int j =1; j<=i; j++)
//         {
//             cout<<"*";
//         }
//           int space= 2*a - 2*i;
//         for (int j = 1; j<= space; j++)
//         {
//             cout<<" ";
//         }
//         for (int j =1; j<=i; j++)
//         {
//             cout<<"*";
//         }
        
//          cout<<endl;
//     } 
//     return 0;
// }