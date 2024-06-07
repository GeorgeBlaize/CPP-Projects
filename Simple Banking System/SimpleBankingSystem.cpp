#include<bits/stdc++.h>

using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount():balance(0) {}

    void deposit(double amount)
    {

        if(amount>0)
        {

            balance+=amount;
            cout<<"Deposit: $"<<amount<<endl;
        }
        else
        {
            cout<<"Invalid deposit amount."<<endl;
        }
    }

    void withdraw(double amount)
    {

        if(amount>0 && amount<=balance)
        {

            balance-=amount;
            cout<<"Withdrawn: $"<<amount<<endl;
        }
        else
        {

            cout<<"Invalid withdrawal amount."<<endl;
        }
    }

    void checkBalance()const
    {

        cout<<"Current Balance: $"<<balance<<endl;
    }


};


int main()
{

    BankAccount account;
    int choice;
    double amount;

    do
    {
        cout<<"\nBanking System Menu:\n";
        cout<<"1.Deposit\n";
        cout<<"2.Withdraw\n";
        cout<<"3.Check Balance\n";
        cout<<"4.Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            account.deposit(amount);
            break;
        case 2:
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            account.withdraw(amount);
            break;
        case 3:
            account.checkBalance();
            break;
        case 4:
            cout<<"Exiting...\n";
            break;

        default:
            cout<<"Invalid choice.Please try again.\n";
            break;


        }



    }
    while(choice!=4);

    return 0;
}
