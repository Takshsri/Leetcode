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

void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

Node* Starting(Node *head){
    Node *slow=head;
    Node *fast=head;

    while(fast != NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast){
            
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head->next;



    cout << "Original List: ";
    print(head);

    head=Starting(head);
    cout << "Updated List after deletion: ";
    if(head==NULL){
            cout<<"NULL";
    }
    else{
        print(head);
    }

    return 0;
}
