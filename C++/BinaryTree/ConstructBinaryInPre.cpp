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

class Solution{
    public:
        int search(vector<int>& inorder,int left,int right,int val){
            for(int i=left;i<=right;i++){
                if(inorder[i]==val) return i;
            }
            return -1;
        }
        Node* helper(vector<int>& preorder,vector<int>& inorder,int& preIdx,int left,int right){
            if(left>right) return NULL;
            Node* root = new Node(preorder[preIdx]);
            int idx = search(inorder,left,right,preorder[preIdx]);
            preIdx++;
            root->left = helper(preorder,inorder,preIdx,left,idx-1);
            root->right = helper(preorder,inorder,preIdx,idx+1,right);
            return root;

        }
        Node* buildTree(vector<int>& preorder,vector<int>& inorder){
            int preIdx =0;
            return helper(preorder,inorder,preIdx,0,inorder.size()-1);
        }

};

void PreOrderTraversal(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}
int main(){
    Solution sol;
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    Node* root = sol.buildTree(preorder,inorder);

    PreOrderTraversal(root);


}