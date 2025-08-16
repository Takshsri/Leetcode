#include<iostream>
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

Node* preOrder(vector<int>& a) {
    idx++;
    if (idx >= a.size() || a[idx] == -1) return NULL;

    Node* root = new Node(a[idx]);
    root->left = preOrder(a);
    root->right = preOrder(a);
    return root;
}

void preOrderTraversal(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

bool SameTree(Node* root1, Node* root2) {
    if (root1 == NULL && root2 == NULL) return true;
    if (root1 == NULL || root2 == NULL) return false;
    if (root1->data != root2->data) return false;
    return SameTree(root1->left, root2->left) && SameTree(root1->right, root2->right);
}

int main() {
    vector<int> a = {1, 2, -1, -1, 3, -1, -1}; // tree: 1 -> 2 (left), 3 (right)
    vector<int> b = {1, 2, -1, -1, 3, -1, -1};

    idx = -1;
    Node* root1 = preOrder(a);
    idx = -1;  // Reset before building second tree
    Node* root2 = preOrder(b);

    cout << "Tree 1: ";
    preOrderTraversal(root1);
    cout << "\nTree 2: ";
    preOrderTraversal(root2);

    cout << "\nAre trees the same? " << (SameTree(root1, root2) ? "Yes" : "No") << endl;

    return 0;
}
