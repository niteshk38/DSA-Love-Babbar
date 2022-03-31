
#include<iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter the Value of N"<<endl;
cin >>n;
cout<<"Printing Fibonacci Series till "<<n<<endl;
int a =0;
int b =1;
cout <<a<<" "<<b<<" ";
for(int i=0; i<=n ;i++)
{
    int sum = a+b;
    cout<<sum<<" ";
    a=b ;
    b =sum;
}
}
