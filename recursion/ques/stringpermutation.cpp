#include<iostream>
using namespace std; 

void stringPermutation(string &str, int i ){
    if(i>=str.length()){
        cout<<str<<" ";
        return; 
    }
    for(int j=i; j<str.length(); j++){
        swap(str[i],str[j]);
        stringPermutation(str,i+1);
        swap(str[i], str[j]);
    }

}
int main (){
    string str ="abc";
    int n = str.length();
    int i =0; 
    
    stringPermutation(str,i);

    return 0; 
}