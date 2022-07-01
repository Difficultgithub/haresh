#include<iostream>
using namespace std;
class ari
{
    float addition;

    public:

void setaddition(float n,float x)
    {
        addition=n+x;
    }
    float getaddition()
    {
        return addition;
    }
};
int main()
{
    ari operation;
    operation.setaddition(7.4,4.5);
    cout<<operation.getaddition();
}