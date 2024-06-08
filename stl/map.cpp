#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

int main(){
    map<string,int> mpp; 
    mpp.emplace("raj",24);
    mpp.emplace("abhi",12);
    mpp.emplace("ankush",15);
    mpp.emplace("jatin",97);
    mpp.emplace("om",56);

    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl; 
    }

    for(auto it = mpp.begin(); it!= mpp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl; 
    }

}