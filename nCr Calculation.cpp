#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i = 1; i<=n ; i++){
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r){
    int num = fact(n);
    int denom = fact(r) * fact(n-r);
    return num/denom;

}
int main (){
    cout<<"Enter the Value of n and r "<<endl;
    int n,r;
    cin>>n>>r;
    cout<<"Answer Is "<<nCr(n,r)<<endl;
}
