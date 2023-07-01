// search for a given key in the array using binary search assuming the array is sorted.
#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    // we need start, end and mid
    int start = 0 ,end =size-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
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

    int find = binarysearch(arr,n,key);

    if(find == -1){
        cout<<"Not found ";
    }
    else{
        cout<<"Found at index "<<find;
    }
}