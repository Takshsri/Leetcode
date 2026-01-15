#include<iostream>
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
Node* helper(vector<int>& nums,int st,int end){
    if(st>end) return NULL;
    int mid = st+(end-st)/2;
    Node* root = new Node(nums[mid]);
    root->left = helper(nums,st,mid-1);
    root->right = helper(nums,mid+1,end);
    return root;

}
Node* sortedBST(vector<int>& nums){
    return helper(nums,0,nums.size()-1);
}
int main(){
    vector<int> a= {2,4,5,6,8};
    Node* root = bstConstruct(a);
    inorder(root);
    Node* root2 = sortedBST(a);
    cout<<endl;
    inorder(root2);


}