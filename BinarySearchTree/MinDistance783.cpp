#include<iostream>
#include<vector>
#include<algorithm>
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

Node* prev = new Node(NULL);
int minDiffInBST(Node* root) {
        if(root == NULL) return INT_MAX;

        int ans = INT_MAX;
        if(root->left !=NULL){
            int leftMin = minDiffInBST(root->left);
            ans = min(ans,leftMin);
        }
        if(prev!=NULL){
            ans= min(ans,root->data-prev->data);
        }
        prev = root;
        if(root->right !=NULL){
            int rightMin = minDiffInBST(root->right);
            ans = min(ans,rightMin);
        }
        return ans;
        
    }