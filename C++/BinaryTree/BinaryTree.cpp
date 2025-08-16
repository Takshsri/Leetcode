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
    if(a[idx] == -1) return NULL ;
    Node* root = new Node(a[idx]);
    root->left = PreOrder(a);
    root->right = PreOrder(a);
    return root;


}
void InorderTraversal(Node* root){
    if(root == NULL) return;
    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right);
}
void PreOrderTraversal(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}
void PostOrderTraversal(Node* root){
    if(root == NULL) return ;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}
//Level Order Traversal

/*void levelOrder(Node* root){
    queue<Node *>q;
    q.push(root);
   
    while(q.size()>0){
        Node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }

    }
    cout<<endl;
}
    */
void levelOrder(Node* root){
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node* curr = q.front();
        q.pop();
        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }
    
    cout<<curr->data<<" ";
    if(curr->left!=NULL) q.push(curr->left);
    if(curr->right!=NULL) q.push(curr->right);
    }
} 
int main(){
    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = PreOrder(preOrder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<"PreOrder Traversal:";
    PreOrderTraversal(root);
    cout<<endl;
    cout<<"Inorder Traversal:";
    InorderTraversal(root);
    cout<<endl;
    cout<<"Post Traversal:";
    PostOrderTraversal(root); 
    cout<<endl;
    cout<<"Level Order Traversal:"<<endl;
    levelOrder(root);


}