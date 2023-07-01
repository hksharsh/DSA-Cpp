// search for a given key in the array using linear search
#include<iostream>
using namespace std;

int linearsearch(int arr[], int size, int key){
    for(int i=0; i<size ; i++){
        if( arr[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){
    int n,key;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cout<<"Enter the "<<i<<" element ";
        cin>>arr[i];
    }

    cout<<"Enter the key to be searched ";
    cin>>key;

    int find = linearsearch(arr,n,key);

    if(find == -1){
        cout<<"Key not found \n";
    }
    else{
        cout<<"Key was found at index "<<find;
    }
}