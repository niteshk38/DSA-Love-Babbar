#include<iostream>
using namespace std;


int main(){
    
    //1
    int number[15];
    cout<<"Value at 0 index :"<<number[0]<<endl;
    cout<<"Value at 1 index :"<<number[1]<<endl;

    //2
    int second[3] = {5,7,11};
    cout<<"Value at 2 index of Array Second :"<<second[2]<<endl;

    //3
    int third[15] = {8,2};
    int n = 5;
    cout<<"Printing the Array Third"<<endl;
    for(int i = 0; i<n; i++){
        cout<< third[i] <<" ";

    }  
    
    //4 
    int fourth[10] = {0};

    n= 10;
    cout<<"Printing Array 4th"<<endl;
    for(int i= 0; i<n;i++)
    {
        cout<<fourth[i]<< " ";
    }


    //5
    int fifth[10] = {1};

    n= 10;
    cout<<"Printing Array 4th"<<endl;
    for(int i= 0; i<n;i++)
    {
        cout<<fifth[i]<< " ";
    }
    return 0;
}
