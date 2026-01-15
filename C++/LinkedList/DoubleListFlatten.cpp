#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node* child;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
        this->child = NULL;
    }
};

// Print the list in normal order
void print(Node* head) {
    if (head == NULL) return;
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Print the list along with child pointers
void printFlatten(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        if (temp->child != NULL) {
            cout << "Child=";
            printFlatten(temp->child);
        }
        temp = temp->next;
    }
    cout << endl;
}

// Merge two sorted doubly linked lists
Node* merge(Node* left, Node* right) {
    if (left == NULL) return right;
    if (right == NULL) return left;

    Node* dummy = new Node(-1);
    Node* temp = dummy;
    
    while (left != NULL && right != NULL) {
        if (left->data < right->data) {
            temp->next = left;
            left->prev = temp;
            left = left->next;
        } else {
            temp->next = right;
            right->prev = temp;
            right = right->next;
        }
        temp = temp->next;
    }

    if (left != NULL) {
        temp->next = left;
        left->prev = temp;
    }

    if (right != NULL) {
        temp->next = right;
        right->prev = temp;
    }

    Node* head = dummy->next;
    if (head != NULL) head->prev = NULL; 
    delete dummy;
    return head;
}

// Flatten the multilevel doubly linked list
Node* flatten(Node* head) {
    if (head == NULL) return NULL;

    // Recursively flatten next and child lists
    Node* nextFlattened = flatten(head->next);
    Node* childFlattened = flatten(head->child);

    // Disconnect child pointers
    head->next = NULL;
    head->child = NULL;

    // Merge head with child list first, then merge with next list
    Node* mergedList = merge(head, childFlattened);
    return merge(mergedList, nextFlattened);
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    
    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    head->next->next->child = new Node(70);
    head->next->next->child->next = new Node(80);
    head->next->next->child->next->prev = head->next->next->child;

    head->next->next->child->next->child = new Node(11);

    cout << "Original List (with Child Pointers):\n";
    printFlatten(head);

    head = flatten(head);

    cout << "Flattened Doubly Linked List:\n";
    print(head);

    return 0;
}
