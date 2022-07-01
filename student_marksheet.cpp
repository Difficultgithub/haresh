#include<iostream>
using namespace std;
class student
{
    int m,p,c,total,per,grade;
    public:

    void set()
    {
        cout<<"\n maths\tphysics\tchemistry";
        cin>>m>>p>>c;
    }
    void calcu()
    {
       total=m+p+c;
       per=total/3;
    }
    void get()
    {
        cout<<"total="<<total;
        cout<<"\n percentage="<<per;
    }
};
int main()
{
}