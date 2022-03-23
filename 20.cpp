/*

   1
  22
 333
4444

*/


#include<iostream>
using namespace std;

int main () {
    int n;
    cout<< "Enter the Value of N" <<endl;
    cin >> n;
    int i = 1;
    while(i<=n){
        int space =n-i;
        while(space){
            cout<<" ";
            space = space - 1;
        } 
        int j = 1;
        while(j<=i){
            cout<<i;
            j = j+1;
        }
        
        i = i+1;
        cout<<endl;
    }
} 