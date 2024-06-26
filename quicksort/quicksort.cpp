#include<iostream>
using namespace std; 

int partition(int* arr,int s, int e){
        int pivotIndex=s;
        int pivotElement=arr[s];
        int count=0;

        for(int i=s+1; i<=e; i++){
            if(arr[i]<=pivotElement){
                count++;
            }
        }
        int rightIndex=s+count;
        swap(arr[pivotIndex],arr[rightIndex]);
       pivotIndex = rightIndex; 

       int i = s; 
       int j = e; 

       while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivotElement){
                i++;
        }
         while(arr[j]>pivotElement){
                j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
       }
        return pivotIndex;
}

void quicksort(int* arr ,int s, int e){
    if(s>=e){
    return; 
    }
    int p = partition(arr,s,e);

    quicksort(arr,s,p-1);

    quicksort(arr,p+1,e);
}

int main(){
    int arr[]={8,5,2,30,3,20,50};
    int n = 7; 
    int s = 0; 
    int e =n-1;
    quicksort(arr,s,e);

    for(int i =0; i<n ;i++){
        cout<<arr[i]<<" "; 
    }

    return 0; 
}