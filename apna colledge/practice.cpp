// #include <iostream>
// using namespace std;
// // // 180 degree inverted pyramid 
// int main(){
//     int a;
//     cin>>a;
//     for (int i = 1; i <= a; i++)
//     {
//         for(int j = 1; j<=a; j++){
//             if (j<=a-i){
//                 cout<< " ";
//             }
//             else {
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
    

//     return 0;
// }

// // // half pyramid using numbers

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//      cin>>n;
//      for(int i=1;i<=n;i++){
//          for(int j=1;j<=i;j++){
//             cout<< i <<" ";
//          }
//          cout<<endl;
//      }
//     return 0;
// }
    
// // // floyids triangle

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int count;
//     count=1;
//     for(int i=1;i<=n;i++){
//       for(int j=1; j<=i;j++){
//           cout<<count<<" ";
//           count++;

//        }
//         cout<<endl;
//           }
//     return 0;
// }

// // // butterfly button

// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     for( int i = 1; i<=a; i++){
//         for (int j=1;j<=i;j++){ 
//              cout<<"*";
//         }
//          int space= 2*a - 2*i;
//          for(int j=1;j<=space;j++){
//              cout<<" ";
//          } 
//          for(int j=1;j<=i;j++){
//              cout<<"*";
//          } 
           
//            cout<<endl;
            
//     }  
      
//     for( int i = a; i>=1; i--){
//         for (int j=1;j<=i;j++){ 
//              cout<<"*";
//         }
//          int space= 2*a - 2*i;
//          for(int j=1;j<=space;j++){
//              cout<<" ";
//          } 
//          for(int j=1;j<=i;j++){
//              cout<<"*";
//          } 
           
//            cout<<endl;
            
//     }
   

//     return 0;
// }

// // // Inverted pattern Question

// #include <iostream>
// using namespace std;

// int main(){
//      int n;
//      cin>>n;
//      for(int i=n;i>=1;i--){
//          for(int j=1;j<=i;j++){
//              cout<<j<<" ";
//          } 
//          cout<<endl;
//      }
//     return 0;
// }

// 0 - 1 pattern 

// #include <iostream>
// using namespace std;

// int main(){
//      int n;
//      cin>>n;
//      for(int i=n;i>=1;i--){
//          for(int j=1;j<=i;j++){
//              if((j+i)%2==0){
//                  cout<<"1"<<" ";
//              }
//              else{
//                  cout<<"0"<<" ";
//              }
//          } 
//          cout<<endl;
//      }
//     return 0;
// }

// // // Rhombhus Pattern

// #include <iostream>
// using namespace std;

// int main(){
//      int n;
//      cin>>n;
//      for(int i=n;i>=1;i--){
//          for(int j=1;j<=i;j++){
//              cout<<" ";
//          } 
//          for(int j=1;j<=n;j++){
//              cout<<"*";
//          } 
//          cout<<endl;
//      }
//     return 0;
// }

// // Number Pattern

// #include <iostream>
// using namespace std;

// int main(){
//      int n;
//      cin>>n;
//      for(int i=n;i>=0;i--){
//          for(int j=1;j<=i;j++){
//              cout<<" ";
//          } 
//          for(int j=1;j<=n-i;j++){
//              cout<<j<<" ";
//          } 
//          cout<<endl;
//      }
//     return 0;
// }  

// // Pallindromic Pattern

// #include <iostream>
// using namespace std;

// int main(){
//      int n;
    
//      cin>>n;
//      int s = 0;
//      for(int i=n-1;i>=0;i--){ 
//          s++;
         
         
//          for(int j=1;j<=i;j++){
//              cout<<" "<<" ";
//          }  
           
//          for(int j = n-i;j>=1;j--){
//              cout<<j<<" ";
             
//          } 

//          for(int j=2;j<=s;j++){
//              cout<<j<<" ";
//          }
//          cout<<endl;
//      }
//     return 0;
// }  

// // // Double the Numbwer

// #include <iostream>
// using namespace std;

// void fibnnoci (int n){
//     int temp1,temp2;
//     temp1 = 0;
//     temp2 = 0;
//     temp2++;
//     cout<<temp1<<endl;
//     for(int i = 1;i<=n;i++){
//          temp2 = temp1+temp2;
//          cout<<temp2<<endl;
//          temp1 = temp2;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//      fibnnoci(n);
//     return 0;
// }
  
// // //   Print Fibbnoci Sequence

// #include <iostream>
// using namespace std;

// void fibnnoci (int n){
//     int temp1,temp2,temp;
//     temp1 = 0;
//     temp2 = 1;
//     cout<<temp1<<endl;
    
//     for(int i = 1;i<n-1;i++){
//          temp2 = temp1+temp2;
//          cout<<temp2<<endl;
//          temp = temp1;
//          temp1 = temp2;
//          temp2 = temp;
        
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//      fibnnoci(n);
//     return 0;
// }  


// // Calculate nCr 

// #include <iostream>
// using namespace std;


// int factorial (int n){
//     int f =1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//     }
//      return f;
//        }

// int main(){
//     int n;
//     cin>>n;
//     int r ;
//     cin>>r;
//    int a = factorial(n);
//     cout<<a<<endl;
//     int b =factorial(r);
//     cout<<b<<endl;
//     int c = factorial(n-r);
//     cout<<c<<endl;
//     int s = a/(b*c);
//     cout<<s<<endl;
//     return 0;
// }

// // // Pascal Triangle

// #include <iostream>
// using namespace std;

// int main(){ 

//     do it own

//          return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int binarytodecimal(int n){

// }

// int main(){
//     int n;
//     cin>>n;

//     do it down
//     binarytodecimal(n);
//     return 0;
// }  


// // // find max number in array

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int aks [n];
//     for(int32_t  i = 0;i<n;i++){
//         cin>>aks[i];
//     }  

//     int min = INT32_MAX;
//     int max = INT32_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if(aks[i]<=min){
//             min = aks[i];
//         }

//         if (aks[i]>=max)
//         {
//             max = aks[i];
//         }
        
//     }
//       cout<<max<<endl;
//       cout<<min<<endl;


//     return 0;
// }


// // // Binary Search In Array

// #include <iostream>
// using namespace std;
  
// int binarysearch (int arr[],int n, int key){
//     int s =  0;
//     int e = n;
//     while (s <= e) {
//         int mid = s+e/2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         } 

//         else if(arr[mid]<key){
//             e = mid-1;
//         }
//         else{
//             s = s + 1;
//         }
//     }
//       return -1;
//    }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n;i++){
//         cin>>arr[i];
//     }  

//      int key = arr[1];
//      cout<<binarysearch(arr,n,key);
//     return 0;
// }

// // // Sorting Of Array


// // #include <bits/stdc++.h>
// // using namespace std;

// // int sortarray(int arr[],int n){
    
    
   
    
// //     for(int j= 0;j<n;j++){
// //         int min = INT32_MAX;
// //     for(int i = j;i<n;i++){
        
// //         if (arr[i]<=min)
// //         {
// //             min = arr[i];
// //             int temp = arr[j];
// //              arr[j] = min;
// //              arr[i] = temp;

// //             }
// //                 }
// //                 cout<<arr[j]<<endl;
                 
                   
// //                     }

// //     return 0;
// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i = 0; i<n;i++){
// //         cin>>arr[i];
// //     }  

// //      sortarray(arr,n);
// //     return 0;
// // }


// // // // // #include <iostream>
// // // // // using namespace std;
  

// // // // //  int insertionsort(int arr[],int n){
     
// // // // //         for(int i = 0; i<n;i++){
// // // // //             cout<<arr[i]<<endl;
// // // // //          if(arr[i]<=arr[i+1]){
// // // // //              int temp = arr[i];
// // // // //              arr[i] = arr[i+1];
// // // // //              arr[i+1] = temp;
             
// // // // //          }
     
       
// // // // //     } 
      
      
// // // // //       return 0;
// // // // //  }

// // // // //  int main(){
// // // // //     int n;
// // // // //     cin>>n;
// // // // //     int arr[n];
// // // // //     for(int i = 0; i<n;i++){
// // // // //         cin>>arr[i];
// // // // //     }  

// // // // //      insertionsort(arr,n);
// // // // //     return 0;
// // // // // }

// // // // // // // // Sum of all Subarray

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n;i++){
//         cin>>arr[i];
//     }  
          
//     for(int i = 0; i<n;i++){
//         int s = 0;
//         for(int j = i; j<n;j++){
//             cout<<arr[j]<<" ";
//             s+=arr[j];
            
//         }
//         cout<<s<< " ";
//     }

     
//     return 0;
// }


// // // Transpose of Matrix

// // #include <iostream>
// // using namespace std;

// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr [n][n];
// //     for (int i = 0;i<n;i++){
// //         for(int j = 0;j<n;j++){
// //             cin>>arr[i][j];
// //         }
// //     }
    
// //     for (int i = 0;i<n;i++){
        
// //         for(int j = i;j<n;j++){
// //             int temp = arr[i][j];
// //             arr[i][j] = arr[j][i];
// //             arr[j][i] = temp;
            
// //         }
        
// //     }

// //      for (int i = 0;i<n;i++){
// //         for(int j = 0;j<n;j++){
// //             cout<<arr[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     } 
// //     return 0;
// // }

// // // //  Pointers

// #include <iostream>
// using namespace std;

// int main(){
//     int a ; 
//     cin>>a;
//     int *ptr;
//     ptr = &a;
//     int **doublepointer;
//     doublepointer = &ptr;
//     cout<<*ptr<<endl;
//     cout<<*doublepointer;
//     return 0;
// }

// // Value  by Reference

// #include <iostream>
// using namespace std;

// int swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     return 0;
// }

// int main(){
//     int a, b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b;
//     return 0;
// }

// String fjossf

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main (){
    

// }

// // // Bit Manipulation
 
//  #include <iostream>
//  using namespace std;
 
//  int getbit(int n, int position){
//      return  ((n & (1 << position))!=0);
//  }
//  int setbit(int n, int position){
//      return  (n | (1 << position));
//  }

//  int clearbit (int n, int position){
//       int natik = ~(1<<position);
//       return (n & natik);
//  }
//  int updatebit(int n, int position, int value){
//      int   k = clearbit(5,1);
//      return (k | (value<<position));
     
//  }
//  int main(){
     
//     // cout<<getbit (5,2)<<endl;
//     // cout<<setbit (5,1)<<endl;
//     // cout<<clearbit(5,2)<<endl;
//     cout<<updatebit(5,1,1)<<endl;
//      return 0;
//  }

// // Sieve of Eristhieve

// #include <iostream>
// using namespace std;

// void primeseive(int n){
//     int prime [100] = {0};
//     for (int  i = 2; i <= n; i++)
//     {
//         if(prime[i] == 0) {
//             for (int j = i*i;j<=n ; j+= i)
//             {
//                 prime[j] = 1;
//             }
            
//         }
//     }

//     for (int i = 2; i <= n; i++)
//     {
//         if(prime[i]== 0){
//             cout<<i<<" ";
//         }
//     } cout<<endl;
    
    
// }

// int main(){
//     int n;
//     cin>>n;

//     primeseive(n);
//     return 0;
// }

// // // Recurrsion

// Sum of n Numbers;

// #include <iostream>
// using namespace std;

// int sum (int n) {
//     if(n == 0){
//         return 0;
//     }
//     int previous = sum (n-1);
//     return n + previous;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<sum (n);
//     return 0;
// }

// // Find Power of Number

// #include <iostream>
// using namespace std;

// int powercal(int n, int power){
//     if(power == 0 ) {
//         return 1;
//     }
//      int previouscal = powercal(n,power-1);
//      return n * previouscal;
// }
// int main(){
//      int n;
//      cin >> n;
//      int power;
//      cout<< " Enter the power  ";
//      cin>> power;
    
//     cout<<powercal(n,power);
//     return 0;
// }

// // Print the Nth Fibnocci Number

// #include <iostream>
// using namespace std;

// int fibnocci(int n){
//     if (n == 0 || n == 1)
//     {
//         return n;
//     } 
    
       
//  return (fibnocci (n-1) + fibnocci(n-2));
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fibnocci(n);
//     return 0;
// }


// // passing of Array
// #include <iostream>
// using namespace std;

// int  passarraery( int arr[10]){
//     arr[] = 3;
//     cout<<arr[0];
//     return 0;
// }

// int main(){
//     int n;
//     cin >>n;
//     int arr [n];
//     passarraery(arr);
//     return 0;
// }

// // Find First and Last Occurances

// // // #include <iostream>
// // // using namespace std;

// // // int firstoccur (int arr[], int n ,int i , int key){
    
// // //     if (i==n){
// // //         return -1;
// // //     }
// // //     if(arr[i] == key){
        
// // //         return i;
// // //     }
// // //       cout<<arr[i]<<endl;
// // //       i++;
// // //      return (arr,n,i,key);
// // // }

// // // int main(){
// // //     int arr [5] = {4,2,5,2,1};
  
    
// // //     cout<<firstoccur(arr, 5, 0,8);
// // //     // cout<<lastoccur(arr, key);
// // //     return 0;
// }

// // Reverse a String using Recurrsion

// #include <iostream>
// #include <string>
// using namespace std;

// int  reversestring(string s, int i){
//     if (i == 0){
//         return 0;
//     }
//     i--;
//     cout<<s[i];
//     reversestring(s,i);
    
//     return 0;
// }

// int main(){
//     string s  = "binod";
//      reversestring(s,5);
   
    
//     return 0;
// }

// // Tower of Hanowi

// #include <iostream>
// using namespace std;
 
// void towerhanoi(int n, char src, char des, char help){
//     if(n == 0 ){
//         return;
//     }
//     towerhanoi(n-1,src, help,des);
//     cout<< "move from "<<src<<" "<<"to "<<des<<" "<<endl;
//     towerhanoi(n-1,help, des, src);
   
// }

// int main(){
//     towerhanoi(3,'A','B','C');
//     return 0;
// }

// // Remove all Duplicate from String

// #include <iostream>
// using namespace std;

// string removeduplicate(string s){
    
//     if(s.length() == 0){
//         return"";
//     }
     
//      char ch = s[0];
//      string ans = removeduplicate(s.substr(1));
      

//       if(ch == ans[0]){
//           return ans;
//       }

//       return (ch+ans);
      
// }

// int main(){
//     string s = "aaabbbjkndkjfhjksdnkhfihsxmbvhifkfikfd,nkhhwironkkfkhfkfnkshfhsd";
//     cout<<removeduplicate(s);
//     return 0;
// }

// // // Move all X to last

// #include <iostream>
// using namespace std;

// string removeallX( string s){
//      if(s.length() == 0){
//          return"";
//      }
    
//     char does = s[0];
//     string ans = removeallX(s.substr(1));
//     if(does == 'x'){
//         return ans+does;
//     }

//     return does + ans;
// }

// int main(){
//     string s = "xlcmmlcmxjjoemccjczxxzfdxczfd";
//     cout<<removeallX(s);
//     return 0;
// }

// // // Print all substring of String

// #include <iostream>
// using namespace std;

// void print_substring (string s, string ans){
//     if(s.length() == 0 ){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch = s[0];
//     string ro = s.substr(1);
//     print_substring(ro,ans);
//     print_substring(ro,ans+ch);
// }

// int main(){
//     string z = "abc";
//     print_substring(z,"");
//     return 0;
// }


// // Merge Sort of Array

// #include <iostream>
// using namespace std;

// void merge(int arr[],int l, int mid, int r){
//     int n1 = mid-l+1;
//     int n2 = r - mid;
//     int a[n1];
//     int b[n2];
//     for (int  i = 0; i <n1; i++)
//     {
//         a[i] = arr[l+i];
//     }
//     for (int  i = 0; i <n2; i++)
//     {
//         b[i] = arr[mid + 1 + i];
//     }

//     int j =0,k = l,i = 0;
//     while (i<n1 && j<n2)
//     {
//         if (a[i]<b[j])
//         {
//             arr[k] = a[i];
//             k++;i++;
//         }
//         else{
//             arr[k] = b[j];
//             k++;j++;
//         }
        
//     }
//     while (i<n1)
//     {
    
//             arr[k] = a[i];
//             k++;i++;  
//                }
//     while (j<n2)
//     {
    
//             arr[k] = a[i];
//             k++;i++;  
//                }
// }

// void mergesort(int arr[],int l, int r){
//     if(r<l){
//         int mid = (r+l)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);

//         merge(arr,l, mid, r);
//     }

// }

// int main(){
//     int array [6] = {3,9,0,1,4,5};
//     mergesort(array,0,5);
//     for (int  i = 0; i < 6; i++)
//     {
//         cout<<array[i];
//     }
//     cout<<endl;

    
//     return 0;
// }

// // USING OF CLASS

// #include <iostream>
// using namespace std;

// class student {
//     public:
//     string name;
//     int age;
//     string gender;

//     // student (string s , int aa , string ge){
//     //     name = s;
//     //     age = aa;
//     //     gender = ge;
//     // }

//     void PrintInfo(){
//         cout<<"Name = ";
//         cout<<name<<endl;
//         cout<<"Age = ";
//         cout<<age<<endl;
//         cout<<"Gender = ";
//         cout<<gender<<endl;
//     }
// };

// int main(){
//     // student arr[3];

//     // for(int i = 0;i<3;i++){
//     //     cout<<"Name :- ";
//     //     cin>>arr[i].name;
//     //     cout<<"age :- ";
//     //     cin>>arr[i].age;
//     //     cout<<"gender :- ";
//     //     cin>>arr[i].gender;
//     // }

//     //  for (int i = 0; i < 3; i++)
//     //  {
//     //     arr[i].PrintInfo();
//     //  }

//     // student a("shail",89,"male");
//     //  a.PrintInfo();
     
//     return 0;
// }


// // FINALLY LINKED LIST

// #include <iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next ;
   
//    node(int value){
//         data = value;
//         next = NULL;
//    }
// };

// void InsertatTail(node* &head, int val){
//     node* n = new node(val);
//     node* temp = head;
//     if(head == NULL){
//         head = n;
//         return;
//     }
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = n;

// }

// void InsertatHead(node* &head,int val){
//     node* temp = head;
//     node* n = new node(val);
//     head = n;
//     head->next = temp;
// }

// void display (node* head){
//     node* temp = head;
//     while(temp->next != NULL){
//        cout<< temp->data<<endl;
//        temp = temp->next;
//     }
//     cout<<temp->data<<endl;
// }

// // node* Reverselinklist(node* &head){
// //     // node* currptr = head;
// //     // node* prevptr = NULL;
// //     // node* nextptr = NULL;

// //     // while(currptr != NULL){
// //     //     nextptr = currptr->next;
// //     //     currptr->next = prevptr;
// //     //     prevptr = currptr;
// //     //     currptr = nextptr;
// //     // }

// //     // head = prevptr;

// //     //  USING Recurrsion
    
// //     if(head->next == NULL){
// //         return head;
// //     }
// //      node* newhead = Reverselinklist(head->next);
// //     head->next->next = head;
// //     head->next = NULL;

// //     return newhead;
// // }

// node* Reverseknodes(node* &head,int k){

//     node* currptr = head;
//     node* prevptr = NULL;
//     node* nextptr = NULL;
//     int count = 0;

//     while(currptr != NULL && count<k){
//         nextptr = currptr->next;
//         currptr->next = prevptr;
//         prevptr = currptr;
//         currptr = nextptr;
//         count++;
//     }
//    if(nextptr != NULL){
//        head->next = Reverseknodes(nextptr,k);
//    }

//    return prevptr;
// }


// int main(){
//     node* head = NULL;
//     InsertatTail(head,1);
//     InsertatTail(head,2);
//     InsertatTail(head,3);
//     InsertatTail(head,6);
//     InsertatHead(head,9);
//     // display(head);
//     //  node* aksa = Reverselinklist(head);
//     // node* aksa = Reverseknodes(head,2);

//     display(aksa);
//     return 0;
// }

// // // Stacks

// #include <iostream>
// using namespace std;
// #define n 100 

// class stack{
//     int* arr ;
//     int top;

//     public:

//    stack(){
//        arr = new int[n];
//        top = -1;
//    }
//    void push (int x){
//        if (top == n -1){
//            cout<<"stack is overflow"<<endl;
//            return;
//        }
//        top++; 
//        arr[top] = x;
//    }

//    void pop (){
//        if (top == -1){
//            cout<<"no element to pop"<<endl;
//            return;
//        } 
//        top--;
//    }
     
//     void Top (){
//          if (top == -1){
//            cout<<"stack is empty"<<endl;
//            return;
           
//        } cout<<arr[top]<<endl;

//     }
//      bool searchempty (){
//              if (top == -1){
//                  return true;
//              }
//               else {
//                   return false;
//               }

//         }  

// };


// int main(){
//     stack st;
//     st.push(5);
//     st.push(4);
//     st.push(9);
//     st.Top ();
//    cout<< st.searchempty();
//    st.pop();
//    cout<<endl;
//    st.Top();
//     return 0;
// }

// // Reverse String Using Stacks

// #include <iostream>
// #include <stack>
// using namespace std;

//  void ReverseString(string s){
//     stack<string>st;
// for (int i = 0; i <s.size(); i++)
// {
//     string tup = "";
//     while ( s[i] != ' '  && i<s.size())
//         {
//             tup = tup + s[i];
//             i++;
//         } 
//           st.push(tup);

// }    
//   while (!st.empty())
//      {
//         cout<<st.top()<<" ";
//         st.pop();
//      } cout<<endl;

// }

// int main(){
    
//     string st = "this is wonderful palace";
//     ReverseString(st);
//     return 0;
// }

// // Prefix Postfix and Infix

// #include <iostream>
// #include <stack>
// #include <math.h>
// using namespace std;

// int prifixevaluation (string s){
//     stack<int>st;
//     for(int i = s.length()-1; i>=0;i--){
//         if(s[i]>='0' && s[i]<='9'){
//            st.push(s[i]-'0');
//         }

//         else{
//             int oper1 = st.top();
//             st.pop();
//             int oper2 = st.top();
//             st.pop();

//             switch (s[i])
//             {
//             case '+': 
//                  st.push(oper1 + oper2);
//                 break;
//             case '-': 
//                  st.push(oper1 - oper2);
//                 break;
//             case '*': 
//                  st.push(oper1 * oper2);
//                 break;
//             case '/': 
//                  st.push(oper1 / oper2);
//                 break;
//             }

//         }
//     }

//     return st.top();
// }

// int main(){
//     string s = "-+7*45+20";
//      cout<<prifixevaluation(s);
//     return 0;
// }
  
    // Binary Tree 

// #include <iostream>
// using namespace std;

// struct node{
    
//     int data;
//     struct node* left;
//    struct node* right;
  
//   node (int val){
//       data = val;
//       left = NULL;
//       right = NULL;
//   }

// };



// int main(){
    
//     struct node* root = new node(1);
//     return 0;
// }
  

  // #include <iostream>
  // using namespace std;
  
  // int main(){
       
  //     int m = 0;
  //     int sum = 0;
  //     int n = 3;
  //     int s = 1;
  //     int d = 2;
      
  //     for(int i = 1;i<=n;i++){
  //         float a = i; float z = 1;
  //         for(int j = 1; j<=s-1; j++){
  //             a = a*i;  
  //         }
  //         s = s + 2;
          
  //         for(int i = 1; i<=d;i++){
  //              z *= i;
  //         }
               
  //             d = d*2;
  //             m = a/z;
  //             cout<< a <<"/"<< z <<endl;
  //           //   sum = sum + m;
  //     }

  //   //   cout<<sum<<endl;
  //     return 0;
  // }


  



