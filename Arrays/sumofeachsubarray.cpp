// print sum of each subarray for a given array 
#include<iostream>
using namespace std;

int main(){
    int n,sum;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    
    for(int i =0 ; i<n ; i++){
        cout<<"Enter "<<i<<" Element :";
        cin>>arr[i];
    }
    
    for(int i =0 ; i<n ; i++){
        sum=0;
        for(int j=i ; j<n ; j++){
            sum+=arr[j];

            cout<<sum<<endl;
        }
    }
    
}