// sorting an array using bubble sort. 
#include<iostream>
using namespace std;

void bubblesort(int arr[], int size){
    int counter = 1;
    while(counter<size){
        for(int i=0 ; i<size-counter ; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i]; 
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    
    for(int i=0 ; i<n ; i++){
        cout<<"Enter the "<<i<<" element";
        cin>>arr[i];
    }

    bubblesort(arr,n);
}
