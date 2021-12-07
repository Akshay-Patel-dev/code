

// #include <iostream>
// using namespace std;
// struct node
// {
//     int data ;
//     struct node* left;
//     struct node* right;

//     node (int value) {
//         data= value;
//         left = NULL;
//         right = NULL;
//     }   
// };

// void display(node *root){
//       node* temp= root;
//       while(temp!=NULL){
//           cout<<temp->data<<endl;
//           temp=temp->right;
          

//       }

//       while(temp!=NULL){
//           cout<<temp->data<<endl;
//           temp=temp->left;
          

//       }
      


//       cout<<endl;
// }
// int main(){
//     struct node *root = new node(1);
//     root->left= new node (2);
//     root->right= new node (3);


    
//       root->right->left= new node (4);
//       root->right->left= new node (7);
//        display(root);

//     return 0;
// }    


// transversal in preorder binary tree

#include <iostream>
using namespace std;
 struct node {
    int data;
    struct node* right;
   struct  node* left;

    node (int val){
        data = val;
        right = NULL;
        left = NULL;
    }
 };
  void preorder ( struct node* root){
      if (root==NULL){
          return;  
      }
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);
  }  
   

  void inorder ( struct node* root){
      if (root == NULL){
        return;
      }
      inorder (root->left);
      cout<<root->data<<endl;
      inorder(root->right);
  }
   
   void postorder (struct node* root) {
       if (root == NULL) {
           return;
       }
        
        postorder (root->left);
        postorder (root->right);
        cout<<root->data<<endl;

int main(){
      struct node* root = new node(1);
      root->left= new node (2);
      root->right= new node (3);
      root->left->left= new node (4);
      root->left->right= new node (5);
      root->right->left= new node (6);
      root->right->right= new node (7);
    //   preorder(root);
    // inorder (root);
    postorder (root);
    return 0;
}