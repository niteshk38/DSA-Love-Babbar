
#include<iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter the Value of N"<<endl;
cin >>n;
bool Isprime =1;
for(int i=2; i<=n-1 ;i++)
{
    if(n%i == 0)
    {
        Isprime = 0;
        break;
    }
}
    if(Isprime == 0)
    {
        cout<<"Not a Prime Number"<<endl;
    }
    else
    {
        cout<<"Prime Number"<<endl;
    }
}
