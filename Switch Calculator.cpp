#include<iostream>
using namespace std;
int main() {
    int a ,b;
    cout<<"Enter the Value of A"<<endl;
    cin>>a;
    cout<<"Enter the Value of B"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the Operation you want to Perform"<<endl;
    cin>>op;

    switch(op) {
        case '+':cout << (a+b)<<endl;
        break;
        case '-':cout << (a-b)<<endl;
        break;
        case '*':cout << (a*b)<<endl;
        break;
        case '/':cout << (a/b)<<endl;
        break;
        case '%':cout << (a%b)<<endl;
        break;
        default: cout<<"Enter enter a Valid Operation"<<endl;
    }
}
