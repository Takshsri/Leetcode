
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
int NthNode(Node *head,int pos){
    Node *slow=head;
    Node *fast=head;

    for(int i=1;i<=pos;i++){
        fast=fast->next;

        if(fast ==NULL){
            return -1;
        }
    }
    while( fast != NULL){
        slow = slow ->next;
        fast = fast ->next;
    }
    return slow ->data;

}
int main() {

    // 35 -> 15 -> 4 -> 20
    Node* head = new Node(35);
    head->next = new Node(15);
    head->next->next = new Node(4);
    head->next->next->next = new Node(20);
    int pos=10;
    cout<<"Node no." <<pos <<" end is " <<NthNode(head,pos);
}