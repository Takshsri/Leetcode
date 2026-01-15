#include<iostream>
#include<vector>
#include<queue>
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

static int idx = -1; 

Node* PreOrder(vector<int> &a){
    idx++;
    if(a[idx] == -1) return NULL;
    Node* root = new Node(a[idx]);
    root->left = PreOrder(a);
    root->right = PreOrder(a);
    return root;
}

void preOrderTraversal(Node* root){
    if(root == NULL) return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int sumTree(Node* root){
    if(root == NULL) return 0;
    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);
    root->data += leftSum + rightSum; // transform to sum tree
    return root->data; // return total sum for parent
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = PreOrder(preorder);

    cout << "Original Preorder: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Total sum of tree: " << sumTree(root) << endl;

    cout << "Preorder after sum tree transformation: ";
    preOrderTraversal(root);
    cout << endl;
}
