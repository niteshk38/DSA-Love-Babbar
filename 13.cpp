/*
E 
D E 
C D E 
B C D E 
A B C D E 
*/

#include<iostream>
using namespace std;

int main () {
    int n;
    cout<< "Enter the Value of N" <<endl;
    cin >> n;
    int i = 1;  //row
    while (i<=n){
        int j = 1; //column
        char start = 'A' + n - i ;
        while(j<= i){
            cout<<start<<" ";
            start = start +1 ;
            j= j+1;
        }
        cout<<endl;
        i = i+1;  
        
    }
}
