// find the length of longest arithmetic subarray. 
#include<iostream>
using namespace std;

int main(){
    int n,len=2,prvd,ans=2;
    cout<<"Enter lenght of array ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;++i){
        cin>>arr[i];
    }
    
    prvd = arr[1]-arr[0];

    for(int i=2 ; i<n ; i++){
        if(prvd == arr[i]-arr[i-1]){
            len++;
        }
        else{
            len = 2;
            prvd = arr[i] - arr[i-1];
        }
        
        if(len>ans){
            ans = len;
        }
    }

    cout<<"Max length is "<<ans;
}