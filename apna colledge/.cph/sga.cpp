#include <iostream>
using namespace std;

bool check (int a , int b, int c) {
  int k =  a*100 + b*10 + c;
  int d = a*a*a + b*b*b + c*c*c;
  if (k==d)
  {
    cout<<"armstrong number"<<endl;
  }
  return 1;
}


int main(){
    int a;
    cin>>a;
   int b;
   cin>>b;
   int c;
   cin>>c;
   check(a,b,c);
}
   