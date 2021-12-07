// Template class uses Opp

#include <iostream>
using namespace std;

template<class T>
T add( T a , T b){
    return a + b;
}



int add ( int a, int b){
    return a + b;
}



int main(){
    float a = 5; float  b = 3.4;
    float c ;
    c = add(a,b);
    cout<<c;
    return 0;
}
