#include <iostream>
#include <vector>
#include <queue>
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

// Build tree from preorder array (-1 means NULL)
Node* PreOrder(vector<int> &a, int &idx) {
    idx++;
    if (idx >= (int)a.size() || a[idx] == -1) return NULL;

    Node* root = new Node(a[idx]);
    root->left = PreOrder(a, idx);
    root->right = PreOrder(a, idx);
    return root;
}

// Preorder Traversal: Root -> Left -> Right
void PreOrderTraversal(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

// Find Maximum Width of Binary Tree
int MaxWidth(Node* root) {
    if (!root) return 0;

    queue<pair<Node*, unsigned long long>> q;
    q.push({root, 0});
    int maxWidth = 0;

    while (!q.empty()) {
        int currSize = q.size();
        unsigned long long stIdx = q.front().second; 
        unsigned long long edIdx = q.back().second;  
        maxWidth = max(maxWidth, (int)(edIdx - stIdx + 1));

        for (int i = 0; i < currSize; i++) {
            auto currNode = q.front();
            q.pop();

            unsigned long long currIdx = currNode.second - stIdx;  

            if (currNode.first->left) {
                q.push({currNode.first->left, currIdx * 2 + 1});
            }
            if (currNode.first->right) {
                q.push({currNode.first->right, currIdx * 2 + 2});
            }
        }
    }
    return maxWidth;
}

int main() {
    vector<int> preOrder = {1, 2, 4, 5, -1, -1, -1, -1, 3, -1, 7};
    int idx = -1; // local index
    Node* root = PreOrder(preOrder, idx);

    cout << "Preorder Traversal: ";
    PreOrderTraversal(root);
    cout << "\nMaximum Width: " << MaxWidth(root) << "\n";

    return 0;
}
