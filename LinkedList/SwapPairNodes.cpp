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
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}
Node* swapPairs(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* first = head;
    Node* second = head->next;
    Node* prev = NULL;
    while(first != NULL && second != NULL){
        Node* third = second->next;
        second->next = first;
        first->next = third;
        if(prev!= NULL){
            prev->next = second;
        }
        else{
            head = second;
        }
        prev = first;
        first = third;
        if(third != NULL){
            second = third->next;
        }
        else{
            second = NULL;
        }
    }
    return head;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(7);
    print(head);
    Node* res = swapPairs(head);
    print(res);
}