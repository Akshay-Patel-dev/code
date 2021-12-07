#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"please gives the sides of an triangle"<<endl;
    cin>>a>>b>>c;
    if (a==b && b==c)
    {
        cout<<"this is an equilateral triangle";
    } else if (a==b ||a==c || b==c)
    { cout<<"this is an isocles  triangle";
       
    } else
    {
        cout<<"this is an scanle  triangle";
    }
    
    
    
    

}