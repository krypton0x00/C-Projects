#include<iostream>
using namespace std;
int main()
{
    float weight,height;
    cout<<"BODY MASS CALCULATOR"<<endl;
    cout<<"Enter Your Weight in KGs : "<<endl;
    cin>>weight;
    cout<<"Enter Your Height In Meters:"<<endl;
    cin>>height;
    
    float bmi = weight/(height*height);
    if (bmi < 18.5)
    {
        cout<<"Underweight! BMI: "<<bmi;
    }
    else{
        if(bmi>25)
        {
             cout<<"Overweight! BMI: "<<bmi;
        }
        else if(bmi<25) {
            cout<<"Normal Weight. BMI= "<<bmi<<endl;
        }

        else{
            cout<<"Unknown Error"<<endl;
        }
    }
    system("pause>0");
}