// find the first index of first repeating element in the array
#include<iostream>
using namespace std;

//remember INT_MAX and INT_MIN;
int main(){
    int n,min=-1;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];

    int N = 100; // use INT_MAX but using 100 for saving space
    int arr1[N];
    for(int i = 0 ; i<N ; i++){
        arr1[i] = -1;
    }

    for(int i=0 ; i<n ; i++){
        cout<<"Enter "<<i<<" Element :";
        cin>>arr[i];

        if(arr1[arr[i]]!=-1){
            min = arr1[arr[i]];
        }
        else{
            arr1[arr[i]] = i;
        }
    }

    cout<<"The minimum index of first repeating element is "<<min;

}