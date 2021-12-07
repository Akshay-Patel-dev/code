#include <iostream>
using namespace std;

class node {
    public:
    int data ;
    node* previ;
    node* next;

    node ( int val) {
        data = val;
        previ = NULL;
        next = NULL;
    }
};


 void insertathead ( node* &head, int val) {
     node* n = new node ( val );
     n->next = head;
     if (head!=NULL)
     {
         head->previ= n;
     }
     head = n;
 }   
   void deleteathead (node* &head){
      node* todelete = head;
      head = head->next;
      head->previ = NULL;
       delete todelete;


   }

   void deletenode (node* &head, int posti){
       if (posti== 1) {
           deleteathead(head);
           return;
       }
       int count = 1;
       node* temp = head;
       while (temp!=NULL && count!= posti){
           temp = temp->next;
           count++;
       }
         temp->previ ->next  = temp ->next;
           if (temp->next != NULL) {
           temp ->next ->previ = temp->previ;}
         delete temp;

   }
void  insert ( node* &head, int val) {
    node* n = new node ( val );
    if ( head == NULL) {
        insertathead( head, val);
        return;
    }
    node* temp = head;
    while (temp->next != NULL )
    {
       temp = temp->next;
    }
     temp->next = n;
     n->previ = temp;
}   

     int length ( node* head) {
         int l = 0;
         node* temp = head;
         while (temp!=NULL)
         {
            temp = temp->next;
            l++;
         }
         return l;
     }
    node* kappendlist ( node* &head, int k) {
        node* newhead;
        node* newtail;
        node* temp = head;
         
        int l =  length(head);
        int count = 1;
        k = k%l;

        while(temp!=NULL) {
            if (count == l-k)
            {
               newtail = temp  ;
            }
            if (count == l - k + 1)
            {
               newhead = temp  ;
            }
            
            temp = temp->next;
            count++;
        }
        newtail->next= NULL;
        temp->next = head;
        

       return newhead;
    }
  void display(node *&head){

  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
    cout << endl;  }

int main(){
    node* head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    display (head);
    // insertathead(head, 8);
    // display (head);
    // deletenode(head,1);
    // display (head);
    // KAPPEND LINKED LIST

     node* neewhead = kappendlist(head ,2);
     display(neewhead);


    

    return 0;
}