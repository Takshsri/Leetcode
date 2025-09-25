/*
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

        ~Node(){
            int val= this->data;
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
        }

};


void InsertAtBeg(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;

    }
    cout<<endl;
}
void MiddleList(Node* head){
    Node *first=head;
    Node *second=head;
    while(second != NULL && second->next != NULL){
        first = first ->next;
        second = second -> next->next;
    }
        cout<< first->data<<endl;
}
int main(){
    Node* node1=new Node(1);
    Node* head=node1;
    InsertAtBeg(head,3);
    InsertAtBeg(head,4);
    InsertAtBeg(head,7);
    InsertAtBeg(head,1);
    InsertAtBeg(head,2);
    InsertAtBeg(head,6);

    MiddleList(head);


    print(head);
}

*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
    }
};

// Insert a node at the beginning of the linked list
void InsertAtBeg(Node *&head, int data) {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Print the linked list
void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

// Delete the middle node of the linked list
Node * MiddleList(Node *&head) {
    if (head == NULL || head->next == NULL) {
        cout << "List too short to delete middle node." << endl;
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL; // Pointer to track the node before the middle

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next=slow->next;
    slow->next=NULL;
    return head;
    
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);



    cout << "Original List: ";
    print(head);

    MiddleList(head);

    cout << "Updated List after deletion: ";
    print(head);

    return 0;
}
