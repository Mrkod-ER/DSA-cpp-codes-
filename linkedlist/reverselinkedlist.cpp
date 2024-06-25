#include<iostream>
using namespace std; 

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data; 
        this ->next = NULL; 
    }
};
void print(Node* &head){
    Node* temp = head; 
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void insertAtHead(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode; 
        tail = newNode;  
    }
    else{
    newNode->next = head;
    }
    head = newNode; 
}
void insertAtTail(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    if(tail==NULL){
        tail=newNode; 
        head=newNode; 
    }
    else{
        tail->next= newNode;
    }
    tail= newNode; 
}
Node* reverse(Node* &prev,Node* &curr){
    if(curr == NULL){
        return prev;  
    }
    Node* forward = curr->next;
    curr->next = prev;

    reverse(curr,forward);
}

int main(){
    Node* head = new Node(20);
    Node* tail = head;
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 70);
    insertAtHead(head, tail, 90);

    print(head);
    cout<<endl;

    Node* prev = NULL; 
    Node* curr = head;

    head = reverse(prev,curr);
    
    print(head);
    return 0; 
}