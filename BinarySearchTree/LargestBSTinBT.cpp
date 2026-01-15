#include <iostream>
#include <algorithm> // for std::min, std::max
#include <climits>   // for INT_MIN, INT_MAX
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

struct Info {
    int mn, mx, sz;         // mn = min, mx = max, sz = size of largest BST in this subtree
    Info(int mn, int mx, int sz) : mn(mn), mx(mx), sz(sz) {}
};

Info helper(Node* root) {
    if (!root) return Info(INT_MAX, INT_MIN, 0);  // empty tree: BST with mn=+inf, mx=-inf, size=0

    Info L = helper(root->left);
    Info R = helper(root->right);

    // If current node can be root of a BST (left.max < root < right.min)
    if (root->data > L.mx && root->data < R.mn) {
        int currMn = std::min(root->data, L.mn);
        int currMx = std::max(root->data, R.mx);
        int currSz = L.sz + R.sz + 1;
        return Info(currMn, currMx, currSz);
    }

    // Not a BST here; propagate sentinels so parents can't use this as BST
    return Info(INT_MIN, INT_MAX, std::max(L.sz, R.sz));
}

int largestBST(Node* root) {
    return helper(root).sz;
}

int main() {
    // Example: largest BST is the left subtree (5,1,8) with size 3
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(7);

    cout << largestBST(root) << endl;  // prints 3
}
