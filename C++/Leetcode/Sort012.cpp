#include<iostream>
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
Node* Sort(Node* head){
    if(head == NULL || head->next == NULL) return head;
    int c0=0, c1=0,c2=0;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data ==0){
            c0++;
        }
        else if(temp->data ==1){
            c1++;
        }
        else{
            c2++;
        }
        temp=temp->next;
    }
    temp=head;
    
        while(c0--){
            temp->data=0;
            temp=temp->next;
        }
        while(c1--){
            temp->data=1;
            temp=temp->next;
        }
        while(c2--){
            temp->data=2;
            temp=temp->next;
        }
    
    return head;
}
    int main() {
        Node *head = new Node(1);
        head->next = new Node(0);
        head->next->next = new Node(1);
        head->next->next->next = new Node(1);
        head->next->next->next->next = new Node(2);
        head->next->next->next->next->next = new Node(0);
    
    
    
        cout << "Original List: ";
        print(head);
        head=Sort(head);
        print(head);
    }    