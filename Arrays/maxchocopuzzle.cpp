/*You have 15 Rs with you.
You go to a shop and shopkeeper tells you price as 1 Rs per chocolate.
He also tells you that you can get a chocolate in return of 3 wrappers.
How many maximum chocolates you can eat?
*/

#include <iostream>
using namespace std;

int main(){
    int money,chocolate=0;
    cout<<"Enter the amount with you ";
    cin>>money;

    chocolate+=money;

    int n = chocolate/3;

    chocolate +=n;

    while(n>2){
        n = n-3;
        chocolate+=1;
    }

    cout<<"total chocolate that you can have is "<<chocolate+1;

}