//Max and Min Element of Array

#include<iostream>
using namespace std;

int getMax(int num[],int n) 
{
int max = INT_MIN ;
for(int i=0;i<n;i++)
{
    if(num[i]>max)
    {
        max = num[i];
    }
}
//Returning max value
return max;
}


int getMin(int num[],int n)
{
int min = INT_MAX ;
for(int i=0;i<n;i++)
{
    if(num[i]<min)
    {
        min = num[i];
    }
}
//Returning min value
    return min;

}

int main (){

   int size;
   cout<<"Enter the Size of Array :";
   cin>>size;
   int num[100];
   //Taking Input in Array
   for (int i = 0;i<size;i++)
   {
       cout<<"Enter the value for index "<<i<<endl;
       cin>>num[i];

   }
   cout<<"Maximum Value is :"<<getMax(num,size)<<endl;
   cout<<"Minimum Value is :"<<getMin(num,size)<<endl;
}
