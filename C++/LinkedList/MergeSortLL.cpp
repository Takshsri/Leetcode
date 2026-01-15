#include<iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

Node* findMid(Node* head){
    if(head == NULL || head->next ==NULL) return head;
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next !=NULL){
        slow= slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* merge(Node* left, Node* right){
    if(left== NULL) return right;
    if(right == NULL) return left;
    Node* ans= new Node(-1);
    Node* temp = ans;

    while(left !=NULL && right!=NULL){
        if(left->data <right->data){
            temp->next = left;
            left = left->next;
        }
        else{
            temp->next = right;
            
            right=right->next;
        }
        temp = temp->next;
    }

    while(left!=NULL){
            temp->next=left;
            
            left = left->next;
            temp=temp->next;
    }
    while(right!=NULL){
            temp->next = right;
            right=right->next;
            temp=temp->next;

    }
    ans = ans->next;
    return ans;
}

Node* sort(Node* head){
    if(head == NULL || head->next ==NULL) return head;
    Node* left = head;
    Node* mid = findMid(head);
    Node* right = mid->next;
    mid->next = NULL;
    left =sort(left);
    right = sort(right);
    Node* res= merge(left,right);
    return res;
}
void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
Node* head = new Node(2);
    head->next = new Node(1);
    head->next->next = new Node(6);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(8);
    
    cout << "Original List: " << endl;
    print(head);

    head = sort(head);

    cout << "Sorted List: " << endl;
    print(head);
}