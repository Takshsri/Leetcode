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
            this->data = val;
            left = right = NULL;
            
        }
};

static int idx = -1;
Node* PreOrder(vector<int>& a){
    idx++;
    if(a[idx]==-1) return NULL;
    Node* root = new Node(a[idx]);
    root->left = PreOrder(a);
    root->right = PreOrder(a);
    return root;
}

void Travsersal(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    Travsersal(root->left);
    Travsersal(root->right);
}

void LevelOrderSum(Node* root){
    if(root == NULL) return ;
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        int sum = 0;
        int length = q.size();
        for(int i=0;i<length;i++){
            Node* curr = q.front();
            q.pop();
            sum += curr->data;
            if(curr->left!=NULL) {q.push(curr->left);}
            if(curr->right!=NULL){q.push(curr->right);}
        }
        cout<<sum<<endl;
    }
}
vector<double> Average(Node* root){
    vector<double> ans;
    if(root==NULL) return ans;
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        double sum = 0;
        int len = q.size();
        for(int i=0;i<len;i++){
            Node* curr = q.front();
            q.pop();
            sum += curr->data;
            if(curr->left != NULL){q.push(curr->left);}
            if(curr->right != NULL){q.push(curr->right);}

        }
        double avg = sum/len;
        avg = avg* 1e5/1e5;
        ans.push_back(avg);
    }
    return ans;
}
int Height(Node* root){
    if(root == nullptr) return 0;
    int leftHt = Height(root->left);
    int rightHt = Height(root->right);
    return max(leftHt,rightHt)+1;
}
bool isSameTree(Node* root1,Node* root2){
    if(root1 == NULL && root2 == NULL) return true;
    if(root1 == NULL || root2 == NULL) return false;
    if(root1->data != root2->data) return false;
    return isSameTree(root1->left,root2->left) && isSameTree(root1->right,root2->right);
}
Node* invertTree(Node* root){
    if(root == NULL) return NULL;
    Node* left = invertTree(root->left);
    Node* right = invertTree(root->right);
    root->left = right ;
    root->right = left;

    return root;

}
Node* nextRight = NULL;
void flattenList(Node* root){
    if(root == NULL) return;
    flattenList(root->right);
    flattenList(root->left);
    root->left = NULL;
    root->right = nextRight;
    nextRight = root;

}
void optimalFlatten(Node* root){
    Node* curr = root;
    while(curr!=NULL){
        if(curr->left!=NULL){
            Node* prev = curr->left;
            while(prev->right != NULL){
                prev = prev->right;
            }
            prev->right = curr->right;
            curr->right = curr->left;
            curr->left  = NULL;
        }
        curr = curr->right;
    }
}
int main(){
    vector<int> a = {1,2,-1,-1,3,-1,-1};
    vector<int> b = {1,2,-1,-1,3,-1,-1};

    Node* root = PreOrder(a);
    idx = -1;
    Node* root2 = PreOrder(b);
    Travsersal(root);
    cout<<endl;
    Travsersal(root2);
    cout<<endl;
    cout<<"Level order Sum is :"<<endl;
    LevelOrderSum(root);
    vector<double> res = Average(root);
    for(double i : res){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Height of a Tree:"<<endl;
    cout<<Height(root)<<endl;
    cout<<isSameTree(root,root2);

    Node* root3 = invertTree(root);
    cout<<endl;
    Travsersal(root3);
    flattenList(root3);
    cout<<endl;
    Travsersal(root3);
} 