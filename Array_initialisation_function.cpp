#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Printing the Array using function"<<endl;
    for(int i= 0; i<size;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    cout <<"Printing Done"<<endl;
}

int main(){
    
    //1
    int number[15];
    cout<<"Value at 0 index :"<<number[0]<<endl;

    //2
    int second[3] = {5,7,11};
    cout<<"Value at 2 index of Array Second :"<<second[2]<<endl;

    //3
    int third[15] = {2,7}; 
    int n = 15;
 printArray(third,15);
    
    //4 
    int fourth[10] = {0};
    n= 10;
    printArray(fourth,10);


    //5
    int fifth[10]= {1};
    n= 10;
    printArray(fifth,10);
    return 0;
}
