#include<iostream>
using namespace std;


int sum_func(float x,float y)
{
    cout<<"Result: "<<x+y<<endl;
}

int sub_func(float x,float y)
{
    cout<<"Result: "<<x-y<<endl;
}

int xpl_func(float x,float y)
{
    cout<<"Result: "<<x*y<<endl;
}

int div_func(float x,float y)
{
    cout<<"Result: "<<x/y<<endl;
}



int main()
{
    float x,y;
    char opr;
while(true)
    {    
        cout<<"Enter IST no: "<<endl;
        cin>>x;
        cout<<"Enter 2ND no: "<<endl;
        cin>>y;
        cout<<"Enter Operation: + - * / ";
        cin>>opr;
        if (opr == '+')
        {
            sum_func(x,y);
        }
        else if(opr == '-')
        {
            sub_func(x,y);
        }
        else if (opr == '*')
        {
            xpl_func(x,y);
        }
        else if (opr == '/')
        {
            div_func(x,y);
        }
        else 
        {
            cout<<"Please Check The Operation You Entered!"<<endl;
        }
    }
}   