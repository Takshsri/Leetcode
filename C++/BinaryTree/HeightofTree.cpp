#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data= val;
            left=right=NULL;
        }
};

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight,rightHeight) +1;
}
static int idx =-1;
Node* preOrder(vector<int> &a){
     idx++;
    if(a[idx] == -1) return NULL;
   
    Node* root = new Node(a[idx]);
    root->left = preOrder(a);
    root->right = preOrder(a);
    return root;



}

void preOrderTraversal(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
int main(){
    vector<int> a = {1, 2, -1, -1, 3, -1, -1};
    Node* root = preOrder(a);
    cout<<"Tree:"<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<height(root);


}