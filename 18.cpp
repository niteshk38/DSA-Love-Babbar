/*
*****
****
***
**
*

*/


#include<iostream>
using namespace std;

int main () {
    int n;
    cout<< "Enter the Value of N" <<endl;
    cin >> n;
    int i = 1;  //row
    while (i<=n){

      //Printing Star
        int j = 1; //column
        while (j <=n-i+1)
        {
            cout<<"*";
            j = j+1;
        } 
        cout<<endl;
        i = i+1;  
    }
}
