#include<iostream>
using namespace std; 

void merge(int* arr, int s, int e){
    int mid = (s+e)/2; 

    int len1 = mid - s +1; 
    int len2 = e - mid; 

    int* left = new int[len1];
    int* right = new int[len2];

    int k; 
    k =s;

    int leftindex =0; 
    int rightindex = 0; 
    int midarrayindex =s; 

    for(int i =0 ; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid+1; 
    for(int i =0; i<len2; i++){
        right[i] = arr[k];
        k++; 
    }

    while(leftindex< len1 && rightindex <len2){
        if(left[leftindex]<right[rightindex]){
            arr[midarrayindex++]=left[leftindex++];
        }
        else{
            arr[midarrayindex++]= right[rightindex++];
        }
    }
    while(leftindex<len1){
        arr[midarrayindex++]= left[leftindex++];
    }
    while(rightindex<len2){
        arr[midarrayindex++]=right[rightindex++];
    }
}

void mergesort(int* arr, int s, int e){
    if(s>=e)
    return;

    int mid = (s+e)/2; 

    mergesort(arr,s,mid);

    mergesort(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){
    int arr[]={2,7,3,6,5,8,9,1,3,5};
    int n =10; 
    int s =0; 
    int e = n-1; 

    mergesort(arr,s,e);

    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }

    return 0; 

}