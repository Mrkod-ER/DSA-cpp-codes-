#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms ; 
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);

    for(auto it: ms){
        cout<<it<<" ";
    }
    cout<<endl; 
    cout<<ms.count(1)<<endl;
    cout<<ms.count(2)<<endl;
    // ms.erase(2);
    // for(auto it: ms){
    //     cout<<it<<" ";
    // }

    auto it= ms.find(2);
    ms.erase(it);
    for(auto it: ms){
        cout<<it<<" ";
    }

}