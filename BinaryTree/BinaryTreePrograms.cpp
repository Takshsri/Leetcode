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
static int idx =-1;
Node* PreOrder(vector<int> &a){
   

     idx++;
    if(a[idx] == -1) return NULL ;
    Node* root = new Node(a[idx]);
    root->left = PreOrder(a);
    root->right = PreOrder(a);
    return root;

}

void preOrderTraversal(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}
void levelSum(Node* root){
    queue<Node *>q;
    q.push(root);
    
    while(q.size()>0){
        int sum =0;
        int levelSize= q.size();
        
        
       for(int i=0;i<levelSize;i++){
            Node* curr = q.front();
            q.pop();
            sum+=curr->data;
       
       
        if(curr->left!=NULL){
            q.push(curr->left);

        }
       if(curr->right!=NULL){
        q.push(curr->right);
       }
    }
    cout<<sum<<endl;
    }
}

class Solution{
    public:
        vector<vector<int>>levelOrder(Node* root){
            vector<vector<int>> ans;
            if(root == NULL) return ans;
            queue<Node *> q;
            q.push(root);
            while(q.size()>0){
                int level =q.size();
                vector<int> res;
                for(int i=0;i<level;i++){
                Node* curr = q.front();
                q.pop();
                res.push_back(curr->data);
                if(curr->left!=NULL){q.push(curr->left);}
                if(curr->right!=NULL){q.push(curr->right);}
                

            }
            ans.push_back(res);
        }
         return ans;   
        }

       

        

};
int main(){
    vector<int> a = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = PreOrder(a);
    cout<<"PreOrderTree traversal :"<<endl;
    preOrderTraversal(root);
    cout<<endl;
    levelSum(root);

    Solution sol;
    vector<vector<int>> res = sol.levelOrder(root);
   for(auto &i:res){
    for(auto &j:i){
        cout<<j<<" ";
    }
    cout<<endl;
   }

}