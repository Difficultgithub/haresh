#include<iostream>
using namespace std;
class Example
{
    int a,b,c;
    public:
    void set_ab(int x,int y)//int z)
    {
        a=x,b=y;//,c=z;
    }
    void get_ab()
    {
        cout<<"\n a:"<<a;
        cout<<"\n b:"<<b;
      //  cout<<"\n c:"<<c;
    }
    Example add(Example E1,Example E2,Example E4)
    {
        Example E_temp;
        E_temp.a=E1.a+E2.a+E4.a;
        E_temp.b=E1.b+E2.b+E4.b;
        E_temp.c=a,b;
        return E_temp;
    }
};
int main()
{
    Example E1,E2,E3,E4;
    E1.set_ab(10,200);
    E2.set_ab(11,21);
    E4.set_ab(23,50);
    E3=E3.add(E1,E2,E4);
    E3.get_ab();
}