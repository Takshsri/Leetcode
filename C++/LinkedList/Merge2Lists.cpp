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
    while (head != NULL) {
        cout << head->data << "\t";
        head = head->next;
    }
    cout << endl;
}

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

    return head->next; 
}

int main() {
    Node* head1 = new Node(10);
    head1->next = new Node(30);
    head1->next->next = new Node(50);

    Node* head2 = new Node(20);
    head2->next = new Node(40);
    head2->next->next = new Node(60);

    print(head1);
    print(head2);

    Node* mergedHead = merge(head1, head2);
    print(mergedHead);

    return 0;
}
