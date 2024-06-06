#include<iostream>
using namespace std; 
class Node{
    public: 
    int data; 
    Node* next; 

    Node(int data){
        this->data= data; 
        this->next= NULL;
    }
    Node(){
        this->data = 0;
        this->next = NULL; 
    }
    ~Node(){

    }
};
void print(Node* &head){
    Node* temp = head; 
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next; 
    }
}

void reverse(Node* &head){
    cout<<"hello "<<endl; 
    Node* prev = NULL; 
    Node* curr = head;
    Node* forward = curr->next; 

    while(curr!=NULL){
        forward= curr->next;
        curr->next = prev; 
        prev=curr; 
        curr=forward; 
        cout<<"inside the loop"<<endl;
    } 
    head = prev;  
}
void addTwoNumber(Node* &head1, Node* &head2){

}


int main(){
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);

    first->next = second; 
    second->next = third; 
    Node* head1 = first; 

    Node* one = new Node(4);
    Node* two = new Node(5);

    one->next = two; 
    Node* head2 = one;

    reverse(head1);
    print(head1);


//     addTwoNumber(head1, head2); 
 }