#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};

    
void print(Node* &head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void insert(Node* &head,int data){
    Node* temp=new Node(data);
   temp->next=head;
   head=temp;
        
    }
   void inserttail(Node* &head,int data){
        Node* temp=head;
        Node* newnode=new Node(data);
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
        
    }
    void insertatmiddle(Node* &head,int data,int pos){
        if(pos==1){
            insert(head,data);
            return;
        }
        Node* temp=head;
        Node* newnode=new Node(data);
        int c=1;
        while(c<pos-1){
            temp=temp->next;
            c++;
        }
        
        newnode->next=temp->next;
        temp->next=newnode;
        
    }
void deletenode(Node* &head,int pos){
   
    if(pos==1){
         Node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    else{
    int c=1;
    Node* prev=NULL;
    Node* curr=head;
    while( c<=pos){
        prev=curr;
        curr=curr->next;
          cout<<curr->data<<"here"<<endl;
        c++;
    }
    cout<<"here";
  
     if (curr == NULL) {
       
        return;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    }
}
void deletenode2(Node* &head, int pos) {
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    } else {
        int c = 1;
        Node* prev = NULL;
        Node* curr = head;
        while (curr != NULL && c <=pos) {
            prev = curr;
            curr = curr->next;
            c++;
        }

        if (curr == NULL) {
            // Invalid position, pos exceeds the size of the linked list
            return;
        }
        
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main() {
    Node* head= new Node(10);
   
    insert(head,30);
   
    insert(head,50);
    insert(head,70);
    inserttail(head,100);
    // print(head);
    insertatmiddle(head,1200,3);
    // print(head);
    deletenode2(head,3);
    print(head);

	return 0;
}
