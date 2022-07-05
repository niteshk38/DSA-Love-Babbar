#include<iostream>
using namespace std;
int power(){
    cout<<"Enter Value of A and B"<<endl;
    int a,b;
    cin>>a>>b;
    int ans = 1;
    for (int i = 1; i<=b ; i++)
    {
        ans = ans *a;
    }
    return ans;
}
int main() {
    
    int answer = power();
    cout<<"Answer is "<<answer<<endl;

    return 0; 
}
