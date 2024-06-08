// Given N elements, print the elements that occurs maximum no of times

#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n =5; 
    int arr[n]={1,3,3,3,2};

    map<int,int> mpp; 
    int temp; 
    int maxi=0;
    for(int i =0; i<n; i++){
        temp=arr[i];
        mpp[temp]=mpp[temp]+1; 
        if(mpp[temp]>mpp[maxi]){
            maxi=temp; 
        }
    }
    cout<<maxi<<endl; 
}