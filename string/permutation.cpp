#include<iostream>
using namespace std; 

void printSubstring(string str, string output, int i ){
    if(i>=str.length()){
        cout<<output<<endl; 
        return ; 
    }
    //exclude
    printSubstring(str,output,i+1);

    output.push_back(str[i]);
    printSubstring(str,output,i+1);
     
}

int main(){
    string str = "abc";
    int i =0; 
    string output ="";

    printSubstring(str, output,i);
    return 0; 

}