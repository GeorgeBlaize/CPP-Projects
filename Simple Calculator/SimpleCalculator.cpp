
#include<bits/stdc++.h>

using namespace std;

void calculator()
{

    char operation;
    float num1,num2;

    cout<<"Enter operator(+,-,*,/):";
    cin>>operation;
    cout<<"Enter two operands: ";
    cin>>num1>>num2;

    switch(operation)
    {
    case'+':

        cout<<num1<<" + "<<num2<< " = "<<num1+num2<<endl;
        break;
    case'-':

        cout<<num1<<" - "<<num2<< " = "<<num1-num2<<endl;
        break;
    case'*':

        cout<<num1<<" * "<<num2<< " = "<<num1*num2<<endl;
        break;
    case'/':

        cout<<num1<<" / "<<num2<< " = "<<num1/num2<<endl;
        break;

    default:
        cout<<"Invalid operator"<<endl;
        break;



    }


}

int main()
{
    calculator();
    return 0;
}
