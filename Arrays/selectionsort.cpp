// sort a given array using selection sort, comp: O(n^2)
#include<iostream>
using namespace std;


void selection(int arr[], int n){
    //need to keep a temp var for storing
    int temp;
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout<<"After Sorting ";

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n ; i++){
        cout<<"Enter the "<<i<<" element ";
        cin>>arr[i];
    }

    selection(arr,n);
    return 0;
}