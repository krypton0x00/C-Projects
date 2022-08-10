#include<iostream>
using namespace std;
int main(){
    float num1 ,num2;
    char opr;



    while (true)
    {
            cout<<"Enter Num1: "<<endl;
        cin>>num1;
        cout<<"Enter Num2: "<<endl;
        cin>>num2;
        cout<<"ENTER OPERATION (+ - / *)"<<endl;
        cin>>opr;

        if (opr == '+')
        {
            cout<<"SUM IS: "<<num1+num2<<endl;
        }
        else if (opr == '-')
        {
            cout<<"SUB IS: "<<num1-num2<<endl;
        }
        else if (opr == '*')
        {
            cout<<"XPL RESULT IS: "<<num1*num2<<endl;
        }
        else if (opr == '/')
        {
            cout<<"DIV RESULT IS: "<<num1-num2<<endl;
        }
        else
        {
            cout<<"Please check the operator you have entered"<<endl;
        }
    }

    return 0;
}