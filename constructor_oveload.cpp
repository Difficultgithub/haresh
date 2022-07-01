#include<iostream>
using namespace std;
class bank
{
    public:
    bank(int a,int b)
    {
        cout<<"\n a:"<<a;
        cout<<"\n b:"<<b;
    }
    bank(int a)
    {
        cout<<"\n int a:"<<a;
    }
    bank(char a)
    {
        cout<<"\n char a:"<<a;
    }
};
int main()
{
bank c1(70,60),c2('A');
}