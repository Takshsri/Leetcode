#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data = val;
            left = right = NULL;
        }
};

static int idx =-1;
Node* PreOrder(vector<int> &a){
   

     idx++;
    if(a[idx] == -1) return NULL ;
    Node* root = new Node(a[idx]);
    root->left = PreOrder(a);
    root->right = PreOrder(a);
    return root;

}

void preOrderTraversal(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}
Node* LCA(Node* root,Node* p,Node* q){
    if(root == NULL ) return NULL;
    if(root ==p || root == q) return root;

    Node* leftLCA = LCA(root->left,p,q);
    Node* rightLCA = LCA(root->right,p,q);

    if(leftLCA && rightLCA){
        return root;
    }
    else if(leftLCA != NULL) return leftLCA;
    else return rightLCA;
}
int main(){
    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = PreOrder(preOrder);
  
    cout<<"PreOrder Traversal:";
    preOrderTraversal(root); 
    cout<<endl;

    root = LCA(root,root->right->left,root->right->right);
    cout<<root->data;

}