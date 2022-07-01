#include<iostream>
using namespace std;
class  car{
    
    int a,b;
    private:
    public:

void settype(int x,int y)  
    {
         a=x;
         b=y;
         
    }
    int gettype()
    {
        return a+b;
    }
};
int main()
{
    car alto;
    alto.settype(50.20,40.36);
    cout<<alto.gettype();
}