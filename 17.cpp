/*
    *
   **
  ***
 ****
*****
*/


#include<iostream>
using namespace std;

int main () {
    int n;
    cout<< "Enter the Value of N" <<endl;
    cin >> n;
    int i = 1;  //row
    while (i<=n){

        //Printing Space
        int space = n-i;
        while(space){
            cout<< " ";
            space = space -1;
        }

      //Printing Start
        int j = 1; //column
        while (j <= i)
        {
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;  
    }
}