/*
11111
 2222
  333
   44
    5

*/


#include<iostream>
using namespace std;

int main () {
    int n;
    cout<< "Enter the Value of N" <<endl;
    cin >> n;
    int i = 1;
    while(i<=n){
        int space =2;
        while(space<=i){
            cout<<" ";
            space = space +1;
        } 
        int j = 1;
        while(j<=n-i+1){
            cout<<i;
            j = j+1;
        }
        
        i = i+1;
        cout<<endl;
    }
} 