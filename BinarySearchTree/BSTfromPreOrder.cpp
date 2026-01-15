#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            this->data = val;
            left = right = NULL;
        }

};

Node* helper(vector<int>& preorder,int& i,int bound){
    if(i>=preorder.size() || preorder[i]>=bound)
       { return NULL;}
    Node* root = new Node(preorder[i++]);
    root->left = helper(preorder,i,root->data);
    root->right = helper(preorder,i,bound);
    return root;
    

}
Node* bst(vector<int>& preorder){
    int i=0;;
    return helper(preorder,i,INT_MAX);
}

void inorder(Node* root){
    if(root == NULL) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    vector<int> a = {6,3,1,4,8,9};
    Node* root = bst(a);
    inorder(root);
}