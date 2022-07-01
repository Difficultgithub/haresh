#include<iostream>
using namespace std;
class student
{
    int n;
    public:
    student()
    {
        cout<<"\n constructor called...";
    }
    student(int a)
    {
        n=a;
        cout<<"\n constructor called.."<<n;
    }
};
int main()
{
    student c1(10),c2(20),c3(30);
}