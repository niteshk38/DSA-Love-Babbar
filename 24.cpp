
/*
   1
  121
 12321
1234321
*/


#include<iostream>
using namespace std;

int main () {
    int n;
    cout<< "Enter the Value of N" <<endl;
    cin >> n;
    int i = 1;
    while(i<=n){
        int space = 2;
        while(space<=n-i+1){
            cout<<" ";
            space = space + 1 ;
        } 
        int j = 1;
        while(j<=i){
            cout<<j;
            j = j+1;  
        }
        int k = i-1;
        while(k){
            cout<<k; 
            k = k-1;  
        }
        
        
        i = i+1;
        cout<<endl;
    }
} 