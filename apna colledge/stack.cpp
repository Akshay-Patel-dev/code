#include <iostream>
using namespace std;
#include <stack>
// #define n  100

// class stack  {
//     int* arry;
//     int top;

//     public:
//     stack (){
//         arry = new int [n];
//         top = -1;
//     }
//       void push (int x){
//           if ( top == n-1){
//               cout<<"stack is overflow"<<endl;
//               return;
//           }
//            top++;
//            arry [top] = x;
//       }
//        void pop ( int x){
//            if (top == -1)
//            {
//                cout<<"no element to pop"<<endl;
//            }
//             top--;
            
//        }
//         bool searchempty (){
//              if (top == -1){
//                  return true;
//              }
//               else {
//                   return false;
//               }

//         }  


//      void Top () {
//          if (top==-1){
//              cout<<"stack is empty "<<endl;
//              return;
//          } 
//           cout<<arry[top]<<endl;
//         //   cout<<top<<endl;
//      }


// };

// int main(){
//     stack aks;
//     aks.push(1);
//     aks.push(2);
//     aks.push(3);
//     aks.Top();

//     aks.pop(3);
//     aks.pop(2);
//     aks.Top();
//     return 0;
// }
void reversestring (string tu) {
    stack<string>st;
    for (int  i = 0; i < tu.length(); i++)
    {
        string tup= "";
        while ( tu[i] != ' '  && i<tu.size())
        {
            tup = tup + tu[i];
            i++;
        } 
          st.push(tup);
        
    }
     while (!st.empty())
     {
        cout<<st.top()<<" ";
        st.pop();
     } cout<<endl;
     
}

int main(){
    stack <int> ts;
    string ps =  "hey, how are you doing?";
    cout<<ps.length()<<endl;
    reversestring( ps);
    return 0;
}