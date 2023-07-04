/*Isyana is given the number of visitors at her local theme park on N consecutive days. 
The number of visitors on the i-th day is V. 
A day is record breaking if it satisfies both of the following conditions:
The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
Either it is the last day, or 
the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.*/

#include<iostream>
using namespace std;

int main(){
    int n,ans=0,hi;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    hi =arr[0];
    for(int i = 1 ; i<n-1 ; i++){
        if(arr[i] > hi ){
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                ans++;
            }
            hi = arr[i];
        }
    }

    cout<<"Record breaking days "<<ans;
}