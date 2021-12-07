#include <iostream>
using namespace std;
class node {
	public:
	int val;
	node* next ;
	

	node (int n) {
		val = n;
		next = NULL;
	}
};

   
           
 void insert (node* &head, int val) {
	  node* n = new node (val);
	if (head == NULL) {
		 head = n;
		  return;
	  }
	 
	      
	   node* temp = head;
	   while (temp->next!=NULL)
	   {
		   temp = temp->next;
	   }
	   
	 temp->next = n;
	
	 }


	 bool checkcycle (node* &head){
		 node* slow = head;
		 node* fast = head;
		 while (fast!= NULL && fast->next!=NULL){
			 slow = slow->next;
			 fast = fast->next->next;
			 if ( slow == fast){
				 return true;
			 }
		 } return false;
		 
	 }  
       void makecycle ( node* &head , int posi){
		   node* temp = head;
		   node* starnode;
		   int count = 1;
		   while (temp->next!= NULL)
		   {  if ( count == posi){
			   starnode= temp;
		   }
			   temp= temp->next;
			   count++;
		   }

		   temp->next= starnode;
		   
	   }  
	    void removecycle (node* &head) {
			 node* slow = head;
		 node* fast = head;
		  do{
			 slow = slow->next;
			 fast = fast->next->next;
		}while (fast != slow);
		 fast = head;
		while (fast->next!=slow->next)
		{
			fast = fast->next;
			slow = slow->next;
		} 
		slow->next = NULL;
		}
		

	  
     void display(node *&head){

  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;  }

int main(){
    node* head = NULL;
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	
	display(head);
	makecycle(head, 2);
	// cout<<checkcycle(head)<<endl;
	// display(head);
	removecycle(head);
	display( head);
	return 0;
}