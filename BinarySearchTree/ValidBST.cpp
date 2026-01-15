#include<iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

Node* bstConstruct(vector<int>& a) {
    Node* root = NULL;
    for (int i : a) {
        root = insert(root, i);
    }
    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
bool helper(Node* root,Node* min,Node* max){
    if(root == NULL) return true;
    if(min!=NULL && root->data <= min->data) return false;
    if(max!=NULL && root->data >= max->data) return false;
    return helper(root->left,min,root) && helper(root->right,root,max);
}
bool validate(Node* root){
    return helper(root,NULL,NULL);
}
int main(){
    vector<int> a = {2,3,4,51,5};
    Node* root = bstConstruct(a);
    inorder(root);
    cout<<endl<<validate(root);
}