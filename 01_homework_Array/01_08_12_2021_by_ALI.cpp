#include<iostream>
using namespace std;

int main()
{
    // code by ALI
    
    int a[10];
    int sum=0,avg;
    cout<<"Enter the 10 Numbers\n";
    for(int i=0;i<=9;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=9;i++)
    {
        sum+=a[i];
    }
    cout<<"The sum =  "<<sum<<endl;
    avg=sum/10;
    cout<<"The avg  =  "<<avg<<endl;
    return 0;
}