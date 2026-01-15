#include<iostream>
#include<vector>
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
void inorder(Node* root,vector<int>& a){
    if(root == NULL) return ;
    inorder(root->left,a);
    a.push_back(root->data);
    inorder(root->right,a);
}
Node* buildBSTfromSorted(vector<int>& a,int st,int end){
    if(st>end)return NULL;
    int mid = st+(end-st)/2;
    Node* root = new Node(a[mid]);
    root->left = buildBSTfromSorted(a,st,mid-1);
    root->right = buildBSTfromSorted(a,mid+1,end);
    return root;
}
Node* merge2BST(Node* root1,Node* root2){
    vector<int>arr1,arr2;
    inorder(root1,arr1);
    inorder(root2,arr2);
    vector<int> temp;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            temp.push_back(arr1[i++]);

        }
        else{
            temp.push_back(arr2[j++]);
        }
    }
    while(i<arr1.size()){
        temp.push_back(arr1[i++]);
    }
    while(j<arr2.size()){
        temp.push_back(arr2[j++]);
    }
    return buildBSTfromSorted(temp,0,temp.size()-1);
}

int main(){
    vector<int> arr1 = {8,2,1,10};
    vector<int> arr2 = {5,3,0};
    Node* root1 = bstConstruct(arr1);
    Node* root2 = bstConstruct(arr2);
    Node* root = merge2BST(root1,root2);
    vector<int> seq ;
    inorder(root,seq);
    for(int i : seq){
        cout<<i<<" ";
    }
    cout<<endl;
    
}