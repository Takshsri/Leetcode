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

Node* Lca(Node* root,Node* p,Node* q){
    if(root==NULL) return NULL;
    if(root->data > p->data && root->data >q->data){
        return Lca(root->left,p,q);
    }
    else if(root->data < p->data && root->data < q->data){
        return Lca(root->right,p,q);
    }
    else {
        return root;
    }
}

int main(){
    vector<int> a = {2,5,1,6,7};
   Node* root =  bstConstruct(a);
   inorder(root);
   Node* p = new Node(5);
   Node* q = new Node(7);
   Node* res = Lca(root,p,q);
   cout<<endl<<res->data;
}