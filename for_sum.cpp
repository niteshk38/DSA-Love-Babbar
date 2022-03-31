
#include<iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter the Value of N"<<endl;
cin >>n;
cout<<"Printing Sum of 1 to "<<n<<endl;
int sum =0;
for(int i=1; i<=n ;i++)
{
    sum = sum+i;
}
cout<<sum<<endl;
}
