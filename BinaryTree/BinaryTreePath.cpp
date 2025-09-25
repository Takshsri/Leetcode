#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// Function to build tree from preorder array with -1 as NULL
Node* PreOrderBuild(vector<int> &a, int &idx){
    idx++;
    if(idx >= a.size() || a[idx] == -1) return NULL;

    Node* root = new Node(a[idx]);
    root->left = PreOrderBuild(a, idx);
    root->right = PreOrderBuild(a, idx);
    return root;
}

// Preorder Traversal
void PreOrderTraversal(Node* root){
    if(root == NULL) return;
    cout << root->data << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

// Solution for binary tree paths
class Solution{
public:
    void allPaths(Node* root, string path, vector<string> &ans){
        if(root->left == NULL && root->right == NULL) {
            ans.push_back(path);
            return;
        }

        if(root->left){
            allPaths(root->left, path + "->" + to_string(root->left->data), ans);
        }
        if(root->right){
            allPaths(root->right, path + "->" + to_string(root->right->data), ans);
        }
    }

    vector<string> binaryPath(Node* root){
        vector<string> res;
        if(root == NULL) return res;
        string path = to_string(root->data);
        allPaths(root, path, res);
        return res;
    }
};

int main(){
    vector<int> preorder = {1, 2, -1, 5, -1, -1, 3};
    int idx = -1;
    Node* root = PreOrderBuild(preorder, idx);

    cout << "Preorder: ";
    PreOrderTraversal(root);
    cout << endl;

    Solution sol;
    vector<string> res = sol.binaryPath(root);

    cout << "All Root-to-Leaf Paths: ";
    for(string &i : res){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
