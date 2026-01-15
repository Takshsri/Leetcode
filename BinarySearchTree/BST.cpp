#include <iostream>
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

bool SearchBST(Node* root, int val) {
    if (root == NULL) return false;
    if (val == root->data) return true;
    else if (val < root->data) return SearchBST(root->left, val);
    else return SearchBST(root->right, val);
}

Node* getInorderSuccessor(Node* root) {
    Node* curr = root;
    while (curr != NULL && curr->left != NULL)
        curr = curr->left;
    return curr;
}

Node* delNode(Node* root, int key) {
    if (root == NULL) return NULL;

    if (key < root->data)
        root->left = delNode(root->left, key);
    else if (key > root->data)
        root->right = delNode(root->right, key);
    else {
        // Node found
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            // Two children
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right, IS->data);
        }
    }
    return root;
}

int main() {
    vector<int> a = {3, 2, 1, 5, 6, 4};
    Node* root = bstConstruct(a);

    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;

    cout << "Search 7: " << SearchBST(root, 7) << endl;

    root = delNode(root, 5);
    cout << "Inorder after deletion: ";
    inorder(root);
}
