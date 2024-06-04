#include<iostream>
#include<stack>
using namespace std; 

void insertAtBottom(stack<int> &s, int target){
    if(s.size()==0){
        s.push(target);
        return; 
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s,target);
    s.push(temp);

}

void reverseStack(stack<int> &s){ 
    if(s.size()==0){
        return; 
    }
    int target = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,target);

}

void printStack (stack<int> st){
    while(st.size()!=0){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int> s; 

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70); 

    printStack(s);
    cout<<endl; 

    reverseStack(s);

    printStack(s);


}