#include<iostream>
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
int Length(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void InsertAtBeg(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void InsertAtEnd(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;

}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;

    }
    cout<<endl;
}

void insertAtPos(Node* &head,int data,int pos){
    Node* temp=new Node(data);
    int i=1;

    Node* tempNode=head;
    int len=Length(head);
    
    if(pos==1){
        InsertAtBeg(head,data);
        return;
    }
    else if(pos==len){
        InsertAtEnd(head,data);
        return;
    }
    else if(pos>len){
        cout<<"Linked List Out of Bounds"<<endl;
        cout<<"Cant Insert at Position"<<endl;
        return;
    }
    
    while(i<pos-1){
        i++;
        tempNode=tempNode->next;
    }
    temp->next=tempNode->next;
    tempNode->next=temp;
}

void  Search(Node* &head,int target){
        Node* temp=head;
        int posIndex=1;
        while(temp!=NULL){
            if(temp->data==target){
                cout<<"Element found "<<endl;
                cout<<"Index:"<<posIndex<<endl;
                return;
            }
            posIndex++;
            temp=temp->next;
        }
}


void DeleteNode(Node* &head,int pos){
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    else{
        Node* curr=head;
        Node*prev=NULL;
        int i=1;
        while(i<=pos-1){
            i++;
            prev=curr;
            curr=curr->next;
            

        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void MiddleLinkedlist(Node* &head){
    int len=Length(head);
    cout<<(len)<<endl;
    int mid=len/2;
   
        Node* temp=head;
        int i=1;
        while(i<=mid){
            i++;
            temp=temp->next;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    }


int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    InsertAtEnd(tail,20);
    print(head);
    InsertAtBeg(head,30);
    print(head);
    InsertAtEnd(tail,100);
    print(head);
    insertAtPos(head,25,3);
    print(head);

    cout<<"\nLength of Linked List:"<<Length(head)<<endl;
    insertAtPos(head,789,2);
    insertAtPos(head,321,9);
    print(head);
    Search(head,10);
    //DeleteNode(head,4);
    print(head);
    MiddleLinkedlist(head);
    return 0;
    
}   