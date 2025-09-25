#include<iostream>
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

Node* Intersection(Node *head1,Node *head2){
    Node *ptr1=head1;
    Node *ptr2=head2;
    if(ptr1==NULL || ptr2==NULL){
        return NULL;
    }

    while(ptr1!=ptr2){
        ptr1= ptr1 ?ptr1->next : head2;
        ptr2= ptr2 ? ptr2->next :head1;
    }
    return ptr1;
}
int main(){

    Node *head1 = new Node(10);
    head1->next = new Node(15);
    head1->next->next = new Node(30);
    Node *head2 = new Node(3);  
    head2->next = new Node(6);
  head2->next->next = new Node(9);

  // 15 is the intersection point
  head2->next->next->next = head1->next;
Node* intersect= Intersection(head1,head2);
if(intersect == nullptr){
    cout<<"-1";
}
else{
    cout<<intersect->data;
}
}