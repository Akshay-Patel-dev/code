#include <iostream>
using namespace std;

class A {
    public:
    int a;
    void funcA (){
        cout<<"akshay"<<endl;
    }
    private:
    int b;
    void funcB (){
        cout<<"akshay"<<endl;
    }
    protected:
    int c;
    void funC (){
        cout<<"akshay"<<endl;
    }
};

int main(){
    A sks;
    sks.funcA();
    return 0;
}