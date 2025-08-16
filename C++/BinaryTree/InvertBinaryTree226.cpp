#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int idx = -1;
Node* PreOrder(vector<int>& a) {
    idx++;
    if (idx >= a.size() || a[idx] == -1) return NULL;

    Node* root = new Node(a[idx]);
    root->left = PreOrder(a);
    root->right = PreOrder(a);
    return root;
}

Node* Invert(Node* root) {
    if (root == NULL) return NULL;

    Node* left = Invert(root->left);
    Node* right = Invert(root->right);

    root->left = right;
    root->right = left;

    return root;
}

void PreOrderTraversal(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

int main() {
    vector<int> a = {4,2,1,-1,-1,3,-1,-1,7,6,-1,-1,9,-1,-1};
    idx = -1;
    Node* root = PreOrder(a);

    cout << "Original Tree (Preorder): ";
    PreOrderTraversal(root);

    Node* root1 = Invert(root);

    cout << "\nInverted Tree (Preorder): ";
    PreOrderTraversal(root1);

    return 0;
}
