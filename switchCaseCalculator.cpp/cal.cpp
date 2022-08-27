#include<iostream>
using namespace std;
int main()
{
    while (true)
        {
        float num1,num2;
        char opr;
        cout<<"Calculator Using Switch Case Statments"<<endl;
        cout<<"Usage: num1 operation num2 example:(2 + 3)"<<endl;
        cout<<"--> ";
        cin>>num1>>opr>>num2;

        switch (opr)
        {
        case '-' : cout<<num1 <<opr <<num2<< " = "<<num1-num2<<endl;
            break;
        case '+' : cout<<num1 <<opr <<num2<< " = "<<num1+num2<<endl;
            break;
        case '*' : cout<<num1 <<opr <<num2<< " = "<<num1*num2<<endl;
            break;
        case '/' : cout<<num1 <<opr <<num2<< " = "<<num1/num2<<endl;
            break;
        
        default: cout<<"Invalid Operation";
            break;
        }
    }
}
