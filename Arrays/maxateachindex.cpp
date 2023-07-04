// find the maximum element at each index and print it for a given array. 
#include <iostream>
using namespace std;

int main(){
    int n,max;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    
    for(int i =0 ; i<n ; i++){
        cout<<"Enter "<<i<<"th Element :";
        cin>>arr[i];
    }
    max = arr[0];
    
    for(int i =0 ; i<n ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        
        cout<<"Maximum element at "<<i<<" index is "<<max<<endl;
    }


}