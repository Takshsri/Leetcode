#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<"\t";
        head=head->next;
    }
    cout<<endl;
}

int totalNode(Node *head){
    int len=0;
    while(head != NULL){
        len++;
        head = head ->next; 
    }
    return len;
}
Node * Kreverse(Node *head,int k){
    if(head == NULL){
        return NULL;
    }

    int totalNodes = totalNode(head);
    if(totalNodes < k){
        return head;
    }
    Node *curr=head;
    Node *prev=NULL;
    Node *Next=NULL;
    int count=0;
    while(count < k && curr != NULL){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
        count++;


    }

    if(Next != NULL ){
        head ->next =Kreverse(Next,k);
    }
    return prev;
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next= new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    print(head);
    Node *temp=Kreverse(head,3);
    print(temp);
}

