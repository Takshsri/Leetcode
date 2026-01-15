#include<iostream>
#include<vector>
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

int count =0;
int result = -1;
void Inorder(Node* root,int k){
    if(root==NULL) return;
    Inorder(root->left,k);
    count++;
    if(count == k){
        result = root->data;
        return ;
    }
    Inorder(root->right,k);

}

int KthSmall(Node* root,int val){
    Inorder(root,val);
    return result;
}

int main(){
    vector<int> a = {34,2,457,7};
    Node* root = bstConstruct(a);
    inorder(root);
    cout<<endl<<KthSmall(root,2);
} 