#include<iostream>
#include<queue>
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
class Solution{
    public:
        vector<int> KthLevel(Node* root,int k){
            vector<int> ans;
            if(root == NULL) return ans;
            if(k==1){
                ans.push_back(root->data);
                return ans;
            }
          vector<int> left =   KthLevel(root->left,k-1);
          vector<int> right =   KthLevel(root->right,k-1);
          ans.insert(ans.end(),left.begin(),left.end());
          ans.insert(ans.end(),right.begin(),right.end());
            return ans;

        }
        
};
static int idx = -1;

Node* PreOrder(vector<int> &a){
    idx++;
    if(a[idx]==-1)return NULL;
    Node* root = new Node(a[idx]);
    root->left = PreOrder(a);
    root->right = PreOrder(a);
    return root;

}
void PreOrderTraversal(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

int main(){
    vector<int> a = {1, 2, -1, -1, 3, -1, -1};
    Node* root = PreOrder(a);
    cout<<"Tree:"<<endl;
    PreOrderTraversal(root);
    cout<<endl;
    Solution sol;
    vector<int> res = sol.KthLevel(root,2);
    cout<<"For Kth Level The Tree Elements are:"<< endl;
    for(int i :res){
        cout<<i<<" ";
    }


}