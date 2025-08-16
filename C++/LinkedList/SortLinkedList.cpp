/*
#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};
void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

Node* Sort(Node *head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        Node* temp= head;
        int c1=0,c2=0,c3=0;
        while(temp != NULL){
            if(temp ->data == 0){
                c1++;
            }
            else if(temp->data == 1){
                c2++;
            }
            else if(temp->data == 2){
                c3++;
            }
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL){
            if(c1 >0){
                temp->data =0;
                c1--;
            }
            else if(c2>0){
                temp->data = 1;
                c2--;

            }
            else{
                temp->data =2;
                c3--;
            }
            temp = temp->next;

        }
        return head;
       


}
int main(){

    Node* head = new Node(2);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(0);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(0);
    print(head);
    head =Sort(head);
    print(head);
}

*/


//sort any linked list

#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

// Find middle of the linked list
Node* findMid(Node* head) {
    if (!head || !head->next) return head;

    Node* slow = head;
    Node* fast = head;

    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// Merge two sorted linked lists
Node* merge(Node* left, Node* right) {
    if (left == NULL) return right;
    if (right == NULL) return left;

    Node* res = NULL;
    Node** temp = &res;

    while (left != NULL && right != NULL) {
        if (left->data < right->data) {
            *temp = left;
            left = left->next;
        } else {
            *temp = right;
            right = right->next;
        }
        temp = &((*temp)->next);
    }

    if (left != NULL) *temp = left;
    if (right != NULL) *temp = right;

    return res;
}

// Merge sort function
Node* Sort(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* mid = findMid(head);
    Node* right = mid->next;
    mid->next = NULL;

    // Recursive calls
    Node* left = Sort(head);
    right = Sort(right);

    return merge(left, right);
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(1);
    head->next->next = new Node(6);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(8);
    
    cout << "Original List: " << endl;
    print(head);

    head = Sort(head);

    cout << "Sorted List: " << endl;
    print(head);

    return 0;
}
