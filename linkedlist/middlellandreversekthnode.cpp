#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 
    
    Node(){
        this->data =0; 
        this->next = NULL;
    }
    Node(int data){
        this->data = data; 
        this->next = NULL; 
    } 
    
};
Node* findMidddle(Node* &head){
    if(head==NULL){
        cout<<"linked list is empty";
        return head; 
    }
    // if(head->next == NULL){
    //     return head; 
    // }
    Node* slow = new Node(); 
    Node* fast = new Node();
    slow = head; 
    fast = head; 
    while(slow!=NULL && fast !=NULL){
        fast=fast->next; 
        if(fast!= NULL){
            fast=fast->next; 
            slow=slow->next; 
        }
    } 

    return slow; 
}

void print(Node* head){
    Node* temp = new Node();
    temp = head; 
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next; 
    }
}
int getLength(Node* &head){
    Node* temp = head; 
    int count=1; 
    while(temp->next!=NULL){
        temp = temp->next; 
        count++; 
    }
    // cout<<"length of ll is "<<count<<endl; 
    return count; 
}

Node* reverseKthterms(Node* &head,int k){
    if(head==NULL){
        return head; 
    }
    int len = getLength(head);
    if(k>len){
        return head; 
    }
    Node* prev = NULL; 
    Node* curr = head; 
    Node* forward = curr->next; 
    int count =0;

    while(count<k){
        forward = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = forward;
        count++;
    }
    head->next = reverseKthterms(forward,k);
    return prev; 

}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    first->next = second; 
    second->next = third; 
    third->next = fourth; 
    fourth->next = fifth;
    fifth->next = sixth;  
    Node* head = new Node();
    head = first; 

    int k =3; 

    print(head);
    cout<<endl; 
    Node* ans = reverseKthterms(head, 6);
    print(ans);

    // cout<<"the middle part is "<<findMidddle(head)->data<<endl;
 
}