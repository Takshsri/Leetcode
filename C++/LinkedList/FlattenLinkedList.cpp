#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* child;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->child = NULL;
    }
};

// Function to print the flattened linked list
void print(Node* head) {
    if (head == NULL) return;
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Merge two sorted linked lists
Node* merge(Node* head1, Node* head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    Node* head = new Node(-1);  // Dummy node
    Node* temp = head;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            temp->next = head1;
            head1 = head1->next;
        } else {
            temp->next = head2;
            head2 = head2->next;
        }
        temp = temp->next;
    }

    if (head1 != NULL) temp->next = head1;
    if (head2 != NULL) temp->next = head2;

     head = head->next;
    return head;
}

Node* flatten(Node* head) {
    if (head == NULL) return NULL;

    Node* nextFlattened = flatten(head->next);
    Node* childFlattened = flatten(head->child);

    head->next = NULL;          
    head->child = NULL; 

    Node* mergedList = merge(head, childFlattened);
    return merge(mergedList, nextFlattened);
}
void printFlatten(Node* head){
    if(head == NULL) return;
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        if(temp ->child !=NULL){
            cout<<"Child=";
            print(temp->child);
        }
        temp = temp->next;
        
    }
    cout<<endl;
}
int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->child = new Node(90);
    head->next->next = new Node(30);
    head->child = new Node(40);
    head->child->next = new Node(50);
    printFlatten(head);
    cout << "Flattened List:" << endl;
    head = flatten(head);
    print(head);

    return 0;
}
