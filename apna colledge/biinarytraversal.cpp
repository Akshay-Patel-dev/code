// #include <iostream>
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
//        int search (int inorder[],int current , int start,int end){
//            for (int i = start; i <= end; i++)
//            {
//               if (inorder[i] == current )
//               {
//                  return i;
//               }
              
//            }
//            return -1;
//        }
//      node* buildtree (int preorder[], int inorder[], int start , int end) {
//          static int idx = 0;
//          if (start>end)
//          {
//             return NULL;
//          }
         
//          int current = preorder[idx];
//          idx++;
//          node* n = new node(current);
//          if (start == end)
//          {
//              return n;
//          }
         
//          int position = search (inorder,current, start , end);
//          n->left = buildtree (preorder,inorder, start , position - 1);
//          n->right = buildtree (preorder,inorder, position + 1 , end);
//          return n;
//      }  
//         void inorderprint ( node* root ) {
//             if (root==NULL)
//             {
//                 return;
//             }
            
//             inorderprint(root->left);
//               cout<<root->data<<endl;
//             inorderprint(root->right);  }

//  int main(){
//       int preorder[] = {1,2,4,3,5};
//       int inorder[] = {1,2,4,3,5};

//       node* root = buildtree (preorder,inorder, 0 , 4);
//       inorderprint(root);

//      return 0;
//  }  

// BUILD TREE FROM POSTEORDER TRAVAERSAL

#include <iostream>
using namespace std;

class node {
    public:
    int data ;
    node* right;
    node* left;
   
   node (int val) {
       data = val;
       right = NULL;
       left = NULL;
   }


};  
    int search (int inorder[],int current , int start,int end){
           for (int i = start; i <= end; i++)
           {
              if (inorder[i] == current )
              {
                 return i;
              }
              
           }
           return -1;
       }

  node* buildtreepostorder (int postorder[], int inorder[], int start , int end){
         static int idx = 4;
         if (start>end)
         {
            return NULL;
         }
         
         int current = postorder[idx];
         idx--;
         node* n = new node(current);
         if (start == end)
         {
             return n;
         }
         
         int position = search (inorder,current, start , end);
         n->right = buildtreepostorder (postorder,inorder, position+1 , end);
         n->left = buildtreepostorder (postorder,inorder, start , position-1);
         return n;

  }   
      void inorderprint ( node* root ) {
            if (root==NULL)
            {
                return;
            }
            
            inorderprint(root->left);
                cout<<root->data<<endl; 
            inorderprint(root->right);  }

int main(){ 

    int postorder[] = { 4,2,5,3,1};
    int inorder [] = {4,2,1,5,3};
     
      node* root =buildtreepostorder( postorder,inorder, 0 , 4 );
      inorderprint(root);
      cout<<"\n"<<endl;
    return 0;
}