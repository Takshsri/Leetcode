#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

void topView(Node* root){
    if(root == NULL) return;

    queue<pair<Node* ,int>> q;
    map<int, int> m;

    q.push({root, 0});

    while(!q.empty()){
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if(m.find(currHD) == m.end()){
            m[currHD] = curr->data;
        }
        if(curr->left != NULL){
            q.push({curr->left, currHD - 1});
        }
        if(curr->right != NULL){
            q.push({curr->right, currHD + 1});
        }
    }

    // Print the top view
    for(auto it : m){
        cout << it.second << " ";
    }
    cout << endl;
}

int main(){

    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = PreOrder(preOrder);
    cout<<endl;
    preOrderTraversal(root);
    cout<<endl;
    topView(root);

} 