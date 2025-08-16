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

// Function to print the linked list
void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

Node *RemoveDuplicates(Node *head) {
    if (head == NULL || head->next == NULL) 
        return head; 

    Node *temp = head;

    while (temp->next != NULL) {
        if (temp->data == temp->next->data) {
            Node *duplicate = temp->next;
            temp->next = temp->next->next;
            delete duplicate; 
        } else {
            temp = temp->next;
        }
    }
    return head;
}

int main() {
    // Creating the linked list
    Node *head = new Node(10);
    head->next = new Node(10);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next = new Node(30);
    cout << "Original List:" << endl;
    print(head);

    head = RemoveDuplicates(head);

    cout << "List after removing duplicates:" << endl;
    print(head);

    return 0;
}
