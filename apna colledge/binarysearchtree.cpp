// #include <iostream>
// using namespace std;

// class node {
//     public:
//     int data;

//     node* left;
//     node* right ;

//     node ( int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     } 
// };
//     node* insertbstnode( node* root , int val) {
//         if (root == NULL)
//         {
//             return new node(val);
//         }
         
//          if (val<root->data)
//          {
//              root->left = insertbstnode (root->left , val);
//          }
         
//          if (val>root->data)
//          {
//              root->right = insertbstnode (root->right , val);
//          }
//           return  root ;
//     }   
//       void inorder( node* root) {
//           if (root == NULL) {
//               return;
//           }
//            inorder (root->left);
//            cout<<root->data<<endl;
//            inorder (root->right) ;
//       }

// int main(){
//      node* root = NULL;
//      root = insertbstnode(root, 5);
//      insertbstnode (root,1);
//      insertbstnode (root,3);
//      insertbstnode (root,4);
//      insertbstnode (root,2);
//      insertbstnode (root,7);
//       inorder(root);
//     return 0;
// }

//    SEARCHING IN BINARY SEARCH TREE;;


//  #include <iostream>
// using namespace std;
//  struct node {
//     int data;
//     struct node* right;
//    struct  node* left;

//     node (int val){
//         data = val;
//         right = NULL;
//         left = NULL;
//     }
//  }; 
  
//   node* searchinbst (node* root , int key) {
//       if (root == NULL)
//       {
//           return NULL;
//       }  
//        if (root->data == key) {
//             return root;
//         }
       
//        if (root->data > key)
//        {
//            return searchinbst (root->left,key);
//        }
        
        
//       return searchinbst (root->right,key);
//   }    



// int main(){
//       struct node* root = new node(5);
//       root->left= new node (1);
//       root->right= new node (3);
//       root->left->left= new node (4);
//       root->left->right= new node (2);
     
      
//       root->right->right= new node (7);
//     //   preorder(root);
//     // inorder (root);
//     if (searchinbst(root,7) == NULL) {
//         cout<<"key is not exist "<<endl;
//     }  
//       else {
//           cout<< "key is exist"<<endl;
//       }
    
//     return 0;
// }  
   
// //    DELETION IN BINARY SEARCH TREE;

//      #include <iostream>
// using namespace std;
//  struct node {
//     int data;
//     struct node* right;
//    struct  node* left;

//     node (int val){
//         data = val;
//         right = NULL;
//         left = NULL;
//     }
//  };  
           
//            node* inordersucess (node* root ) {
//                node *curr = root;
//                while (curr && curr->left != NULL)
//                {
//                    curr = curr->left;
//                } 

//                return curr;
               
//            }


//      node* deletenode (node* root , int val) {

//            if (val < root->data)
//            {
//               root->left=  deletenode (root->left, val);
//            } 

//           else  if(val> root->data) {
//               root->right =  deletenode(root->right, val) ;
//            } 

//            else {
//                if (root->left == NULL)
//                {
//                    node* temp = root->right;
//                     free(root);
//                     return temp;
//                }
//                if (root->right == NULL)
//                {
//                    node* temp = root->left;
//                     free(root);
//                     return temp;
//                }  

//                node* temp = inordersucess(root->right);
//                root->data = temp->data;
//                root->right = deletenode(root->right, temp->data);
               
//            }
           
//            return root;
//      }   
//         void inorder (node* root) {
//             if (root == NULL)
//             {
//                return ;
//             }
            
//             inorder(root->left);
//             cout<<root->data<<endl;
//             inorder(root->right);
//         }

//   int main () {

  
  
//        struct node* root = new node(4);
//       root->left= new node (2);
//       root->right= new node (5);
//       root->left->left= new node (1);
//       root->left->right= new node (3);
     
      
//       root->right->right= new node (6);

//         inorder (root);
//       root = deletenode( root, 5) ;
//       inorder(root);

//       return 0;
//   }

#include <iostream>
using namespace std;

 class node {
    public:
    int data;

    node* left;
    node* right ;

    node  ( int key) {
        data = key;
        left = NULL;
        right = NULL;
    }  

 };

node* constructBST (int preorder[], int* preorderindex, int key , int min , int max, int n){
    node *root = NULL ;
    
    if (*preorderindex >= n){
        return NULL;
    }
     if (key>min && key<max){
         root= new node(key);
         *preorderindex = *preorderindex + 1;

         if (*preorderindex < n){
             root->left = constructBST(preorder, preorderindex, preorder[*preorderindex], min , key, n);

             }
         if (*preorderindex < n){
             root->right = constructBST(preorder, preorderindex, preorder[*preorderindex], key , max ,n);
             }
         }

         return root;
     }


void printpreorder ( struct node* root){
      if (root==NULL){
          return;  
      }
      cout<<root->data<<" ";
      printpreorder(root->left);
       printpreorder(root->right);
  }  

int main(){
    
    int preorder[] = {10, 2 , 1, 13, 11};
    int n = 5;
     int preorderindex = 0;
      node* root =  constructBST (preorder, &preorderindex, preorder[0], INT16_MIN, INT16_MAX, n);
      printpreorder(root);


    return 0;
}