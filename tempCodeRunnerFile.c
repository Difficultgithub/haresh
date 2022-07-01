#include<stdio.h>
int main()
{
    int a[6]={1,2,4,8,16,32,64,128},i,b=10,x=0;
    for(i=5;i>=0;i--)
    {
        printf("\ta[%d]=%d",i,a[i]);
    }
    printf("\n");
    for(i=5;i>=0;i--)
    {
        if(x+a[i]<=10)
        {
            x=x+a[i];
            printf("\t1");
        }
        else
        printf("\t0");
    }
}