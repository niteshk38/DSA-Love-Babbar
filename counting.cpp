#include<iostream>
using namespace std;

void printCounting(int n){
for(int i = 1; i<= n; i++){
    cout<< i <<endl;
}

}

int main (){
int n;
cout<<"Enter the number to Print Count starting from 1 ot the enterd number"<<endl;
cin>>n;
cout<<""<<endl;
cout<<"The Series is :"<<endl;
printCounting(n);
    return 0;
}
