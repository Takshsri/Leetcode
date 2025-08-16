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

bool Check(Node *head){
    Node *temp=head->next;
    
    while(temp != NULL  && temp != head){
        
        temp=temp->next;
        
       
    }   
    return (temp == head);
    
}
int main(){

    Node *head= new Node(10);
    head ->next= new Node(20);
    head ->next ->next = new Node(30);
    head->next->next->next=new Node(40);
    print(head);
    //head->next->next->next ->next= head;
    cout<<Check(head);
}