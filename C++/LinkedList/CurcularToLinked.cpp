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
};

void print(Node *head) {
    Node *temp = head;
    if (head == NULL) return; // Handle empty list case

    while (temp != NULL) { 
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

Node *Conversion(Node *head) {
    if (head == NULL) return NULL;

    Node *temp = head;
    while (temp->next != head) { 
        temp = temp->next;
    }

    temp->next = NULL;
    return head; 
}

int main() {
  
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head; 

    cout << "Original Circular Linked List:\n";
    Node *temp = head;
    do {
        cout << temp->data << "\t";
        temp = temp->next;
    } while (temp != head);
    cout << endl;

    head = Conversion(head);
    
    cout << "After Conversion to Singly Linked List:\n";
    print(head);

    return 0;
}
