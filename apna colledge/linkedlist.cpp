#include <iostream>
using namespace std;

class node
{

public:
  int data;
  node *next;

  node(int val)
  {
    data = val;
    next = NULL;
  }
};
void insertattail(node *&head, int val)
 {
  node *n = new node(val);

  if (head == NULL)
  {
    head = n;
    return;
  }
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

void display(node *&head){

  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;  }

node *reverselinked(node *&head){
     
  node *previous = NULL;
  node *current = head;
  node *next;

    while (current != NULL)
    {
    next = current->next;
    current->next = previous;

    previous = current;
    current = next;
      }

  return previous;
}      
    node* reverseknodes (node* &head, int k ) {
       
       
       node* previous = NULL;
       node* current = head;
       node* nextptr ;

       int countter = 0;
        while ( current!= NULL && countter<k){
          nextptr = current ->next;
          current->next = previous;

            previous = current  ;
            current = nextptr;
            countter ++;
        }
        if(nextptr!=NULL){
        head->next = reverseknodes(nextptr , k);
        }
        return previous;

     }

void deleteatmiddel(node *&head, int val)
{
  node *temp = head;
  while (temp->next->data != val)
  {
    temp = temp->next;
  }
  node *todelete = temp->next;
  temp->next = temp->next->next;
  delete todelete;
}
int main()
{
  node *head = NULL;
  insertattail(head, 1);
  insertattail(head, 2);
  insertattail(head, 3);
  insertattail(head, 8);
  display(head);
  //  deleteatmiddel(head,2);

  
  // node* newhead = reverselinked(head);
  // display(newhead);
  int k = 2;
   node* ans = reverseknodes (head, k );
  display(ans);
  return 0;
}
