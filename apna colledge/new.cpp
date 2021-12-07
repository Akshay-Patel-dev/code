// #include <iostream>
// using namespace std;

// int catalan(int n){
//     if(n<=1){
//         return 1;
//     }
//     int res = 0;
//      for(int i = 1;i<=n-1;i++){
//      res += catalan(i) * catalan(n-i-1);
//      }
//      return res;
// }

// int main(){
//     int n; 
//     cin>>n;
//     for(int i = 0; i<n;i++){
//     cout<<catalan(i);
//     cout<<endl;
//     }
//     return 0;
// }

// Find the Possible Binary Search tree
#include <iostream>
#include<vector>
using namespace std;


struct node {
   public:
   int data;
   struct  node* right;
   struct  node* left;

   node (int val){
       data = val;
       right = NULL;
       left = nullptr;
   }
};

vector<node*>constructTrees(int start, int end){
    vector<node*>trees;
    if(start>end){
        trees.push_back(NULL);
    }
    for(int i = start; i<=end;i++){
        vector<node*>leftSubtree = constructTrees(start,i-1);
        vector<node*>rightSubtree = constructTrees(i+1,end);
        for(int j = 0;j<leftSubtree.size();j++){
            node* left = leftSubtree[j];
            for(int k=0;k<rightSubtree.size();k++){
                  node* right = rightSubtree[k];
                  node* Node = new node(i);
                   Node->left = left;
                   Node->right = right;
                   trees.push_back(Node);
            }
        }
    }
     
     return trees;
}

void preoOrder(node* root){
    if(root == NULL){
        return;
    }
        cout<< root->data<<" ";
        preoOrder(root->left);
        preoOrder(root->right);
}

int main(){
    vector<node*> totalTrees = constructTrees(1,3);
    for(int i = 0; i< totalTrees.size();i++){
    cout<<(i+1)<<" : ";
    preoOrder(totalTrees[i]);
    cout<<endl;}
    return 0;
}