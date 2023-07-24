#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
    
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtTail(Node* &head,int data){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newnode= new Node(data);
    temp->next=newnode;
    newnode->prev=temp;
    
}
void insertAtmiddle(Node* &head,int data,int pos){
    Node* temp=head;int cur=1;
    while(cur<pos-1){
        temp=temp->next;
        cur++;
    }
    Node* newnode= new Node(data);
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
}
int length(Node* &head){
    int c=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
}
void deletenode(Node* &head,int pos){
    if(pos==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
    }
else{
    Node* temp=head;
    Node* a=NULL;
    int cur=1;
    while(cur<pos){
        a=temp;
        temp=temp->next;
        cur++;
    }
    a->next=temp->next;
    temp->prev=NULL;
    temp->next->prev=a;
    temp->prev=NULL;
    delete temp;
    
}
}
int main() {
	// your code goes here
	
	Node* head=new Node(10);

	insertAtHead(head,30);
	insertAtTail(head,80);
	insertAtmiddle(head,1200,2);
		int l=length(head);
// cout<<l;
// 	deletenode(head,1);
print(head);
	deletenode(head,3);
	print(head);
	
	return 0;
}
