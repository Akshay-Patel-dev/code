#include <iostream>
using namespace std;

class node {
    public:
     int data;
     node* next ;

     node (int x) {
         data = x ;
        next = NULL;
     }
};

class queue {
    public:
    
    node* front;
    node* back ;

    queue () {
        front = NULL;
        back  = NULL;
    } 

     void push (int x) {
          node* n = new node ( x) ;

         if (front == NULL)
         {
            front = n;
            back = n;
            return ;
         }
          
        
         back->next = n;
         back = n;

     }


     void pop () {
         if (front== NULL || front > back)
         {
            cout<<"no queue is present to pop"<<endl;
         }
         node* todelete = front;
         cout<<front->data<<endl;
         front = front->next;
         delete todelete;
     }
};

int main(){
     queue q;
     q.push(1);
     q.push(2);
     q.push(3);

     q.pop();
     q.pop();
     q.pop();



    return 0;
}