#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
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

void preTraversal(Node* root){
    if(root == NULL) return ;

    cout<<root->data<<" ";
    preTraversal(root->left);
    preTraversal(root->right);
}
class Solution{
    public:
        vector<double> AvgLevel(Node* root){
            vector<double> ans;
            if(root == NULL) {return ans;}

        

        queue<Node *> q;
        q.push(root);
        
        while(q.size()>0){
            double n = q.size();
            double sum =0.00000;
            
           
            for(int i=0;i<n;i++){
                 Node* curr = q.front();
                 q.pop();
                 sum+=curr->data;
               
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);

            }

            double avg = sum / n;
            avg = avg * 1e5 / 1e5;  
            ans.push_back(avg);

        }
        return ans;
    }

};
int main(){
    vector<int> a = {3,9,-1,-1,20,15,-1,-1,7,-1,-1};
    Node* root = PreOrder(a);
    cout<<endl;
    cout<<"Binary tree is "<<endl;
    preTraversal(root);
    Solution sol;
    vector<double> res = sol.AvgLevel(root);
    cout<<endl;
    for(double i : res){
        cout<<i<<" ";
    }

}