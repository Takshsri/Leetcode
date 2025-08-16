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

       

};



void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;

    }
    cout<<endl;
}
bool detectLoop(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(slow != NULL && fast != NULL && fast->next != NULL){
        slow = slow -> next;
        fast = fast -> next;

        if(slow == fast) {
            return true;
        }

    }
    return false;
}


int main() {

    
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(4);
  
    // Create a loop
    head->next->next->next = head->next;

    if (detectLoop(head))
        cout << "true";
    else
        cout << "false";

    return 0;
}