#include<iostream>
using namespace std;
class student
{	
	 int maths,physics,chemistry,english,gujrati,total,per;
    char d;
	public:
   	void set()//setter
    {
        cout<<"\nmaths&physics&chemistry&english&gujrati=";
        cin>>maths>>physics>>chemistry>>english>>gujrati;
    }
    void calculation()// setter
    {
        total=maths+physics+chemistry+english+gujrati;
        per=total/5;  
        if(maths<33 ||physics<33 ||chemistry<33 ||english<33 ||gujrati<33)
        d='F';
        else if(per>75)
        d='A';
        else if(per>60&&per<=75)
        d='B';
        else if(per>45&&per<=60)
        d='C';
        else if(per>=33&&per<=45)
        d='D';
    }
    void get()//getter
    {
        cout<<"\n";
        cout<<maths<<"\t"<<physics<<"\t"<<chemistry<<"\t\t"<<english<<"\t"<<gujrati<<"\t"<<total<<"\t"<<per<<"\t"<<d;
    }
};
int main()
{
    student a[5];
    int i;
    for(i=0;i<5;i++)  
    {
        a[i].set();
        a[i].calculation();
    }
    cout<<"\nMaths\tPhysics\tChemistry\tenglish\tgujrati\ttotal\tper\tgrade\n";
    for(i=0;i<5;i++)
    {
        a[i].get(); 
    }
      
}