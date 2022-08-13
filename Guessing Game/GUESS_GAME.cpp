#include<iostream>
using namespace std;

int guess_count = 0;
int guess_limit = 3;
int secret_number = 6;
int guess;
bool won = false;



int main()
{
    do{
        cout<<"*********YOU TRIED "<<guess_count<<" TIMES*********"<<endl;
        cout<<"Enter GUESS> "<<endl;
        cin>>guess;
        if (guess > secret_number)
        {
            cout<<"Too Large!"<<endl;
        }
        else if (guess < secret_number)
        {
            cout<<"Too Small! "<<endl;
        }
        else if (guess == secret_number)
        {
            cout<<"you won!"<<endl;
            cout<<"Secret Number Was: "<<secret_number<<endl;
            won = true;
            break;
        }
        guess_count++;
       }
    while (guess_count < guess_limit);
    {
        if (won == true)
        {
           cout<<"VICTORY!"<<endl;
        }
        
        else 
        {
        cout<<"You Lose!";
        cout<<"Secret Number Was: "<<secret_number<<endl;
        }
    }   
        system("pause");
        return 0;

}