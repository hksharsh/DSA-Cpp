// finding the minimum and maximum of an array without using sorting algos. 
#include <iostream>
using namespace std;

int main(){
    int n,max,min;
    cout<<"Enter the length of array ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n ; i++){
        cout<<"Enter the "<<i<<" element ";
        cin>>arr[i];
    }
    max = arr[0];
    min = arr[0];
    for(int i=1; i<n ; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"The maximum of the array is "<<max<<" and the minimum element is "<<min;
}