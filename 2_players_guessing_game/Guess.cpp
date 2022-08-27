#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
        int hostUserNum, guestUserNum;
        cout<<"Host: "<<endl;
        cin>>hostUserNum;
        system("cls");
        cout<<"Guess>> "<<endl;
        cin>>guestUserNum;
        //ternary operator
        (hostUserNum == guestUserNum)? cout<<"Correct!":cout<<"Failed!";
        system("pause>0");
    }
}