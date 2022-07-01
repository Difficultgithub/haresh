#include<iostream>
using namespace std;
int main()
{
    int i,n,a[10];

    cout<<"\n enter value=";
    cin>>n;
    
    for(i=0;0<n;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
        cout<<"\t"<<a[i];
    }
}