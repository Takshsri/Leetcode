#include<iostream>
#include<vector>
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

Node* PreOrder(vector<int> &a, int &idx) {
    idx++;
    if (idx >= (int)a.size() || a[idx] == -1) return NULL;

    Node* root = new Node(a[idx]);
    root->left = PreOrder(a, idx);
    root->right = PreOrder(a, idx);
    return root;
}
vector<int> Morris(Node* root){
    vector<int> res;

    if(root == NULL) return res;
    
    Node* curr = root;
    while(curr != NULL){
        if(curr->left == NULL){
            res.push_back(curr->data);
            curr = curr->right;
        }
        else{
            Node* prev = curr->left;
            while(prev->right!=nullptr && prev->right!=curr){
                prev = prev->right;
            }
            if(prev->right == NULL){
                prev->right = curr;
                curr = curr->left;
            }
            else{
                prev->right = NULL;
                res.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    return res;
}
void InorderTraversal(Node* root){
    if(root == NULL) return;
    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right);
}
int main() {
    vector<int> preOrder = {1, 2, 4, 5, -1, -1, -1, -1, 3, -1, 7};
    int idx = -1; // local index
    Node* root = PreOrder(preOrder, idx);
    vector<int> res = Morris(root);
    for(int i : res){
        cout<<i<<" ";
    }
    cout<<endl;
    InorderTraversal(root);

}