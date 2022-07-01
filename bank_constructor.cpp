#include<iostream>
using namespace std;
class bank
{
    int bal,a,b,dep,with; // deposit and withdrawal using constructor
    public:
    bank(int a,int b)
    {
        dep=a;

        with=b;
        if(b<=a)
        bal=a-b;
        else
        bal=a;
    }
    void showbal()
    {
        cout<<"\n balance after deposit="<<dep;
        cout<<"\n balance after withdraw="<<bal;
    }
};
int main()
{
    bank ram(1000,50),raj(100,40);
    ram.showbal();
    raj.showbal();
}
