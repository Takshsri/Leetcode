#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //descturctor
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is Free with Data:"<<value<<endl;
    }
};
void InsertAtBeg(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;

    }
    cout<<endl;
}

Node* Reverse(Node* &head){
    Node* forward=NULL;
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;


}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    InsertAtBeg(head,45);
    InsertAtBeg(head,25);
    InsertAtBeg(head,35);
    InsertAtBeg(head,895);
    cout<<endl<<"Before Reversing  of a Linekd List is:"<<endl;

    print(head);
    Node* reverse=Reverse(head);
    cout<<endl<<"Reverse of a Linekd List is:"<<endl;
     print(reverse);

    

    
    
    
}