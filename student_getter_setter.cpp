#include<iostream>
using namespace std;
class student
{
    public:

    int maths,physics,chemistry,total,per;
    char d;
    void set(int a,int b,int c)
    {
        maths=a;
        physics=b;
        chemistry=c;
    }
     void calculation()
    {
        total=maths+physics+chemistry;
        per=total/3;
        if(maths<33 || physics<33 || chemistry<33)
        d='f';
        else if(per>75)
        d='A';
        else if(per>=60 && per<=75)
        d='B';
        else if(per>=45 && per<=60)
        d='C';
        else if(per>=33 && per<=45)
        d='D';
    }
    void get()
    {
        cout<<"total="<<total;
        cout<<"\n percentage="<<per;
        cout<<"\n percentage="<<d<<" grade";
    }
};
int main()
{
    student haresh;
    haresh.set(80,91,85);
    haresh.calculation();
    haresh.get();
}