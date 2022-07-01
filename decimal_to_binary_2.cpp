#include<iostream>
using namespace std;
int main()
{
    int a[10],n,b,c;
    printf("enter value=");
    scanf("%d",&n);

    int i=0;
    while(i<7)
    {
        b = n%2;
        a[i] = b;
        n /=2;
        i++;
    }
    printf("\n binary=");
    int j=i-1;
    while(j>=0)
    {
        c =a[j];
        printf("%d",c);
        j--;
    }
}
