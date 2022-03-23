
/*
   1
  23
 456
78910
*/


#include<iostream>
using namespace std;

int main () {
    int n;
    cout<< "Enter the Value of N" <<endl;
    cin >> n;
    int i = 1;
    int count =1;
    while(i<=n){
        int space = 2;
        while(space<=n-i+1){
            cout<<" ";
            space = space + 1 ;
        } 
        int j = 1;
        while(j<=i){
            cout<<count<<"";
            count = count+1;
            j = j+1;  
        }
        
        
        i = i+1;
        cout<<endl;
    }
} 