#include <iostream>
#include <unordered_map>
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
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

Node *RemoveDuplicates(Node *head) {
    if (head == NULL || head->next == NULL) 
        return head; 

    unordered_map<int, bool> visited;
    Node *temp = head;
    Node *prev = head;

    while (temp != NULL) {
        if (visited.count(temp->data)) { 
            prev->next = temp->next;
            delete temp; 
            temp = prev->next;  
        } else {
            visited[temp->data] = true; 
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}

int main() {
    
    Node *head = new Node(10);
    head->next = new Node(30);
    head->next->next = new Node(20);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(10); 

    cout << "Original List:" << endl;
    print(head);

    head = RemoveDuplicates(head);

    cout << "List after removing duplicates:" << endl;
    print(head);

    return 0;
}
