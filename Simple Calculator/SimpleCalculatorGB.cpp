#include<iostream>

using namespace std;

void Calculator(){

   char operation;
   float num1,num2;
   char cont;

   do{

      cout<<"Enter operator(+,-,*,/):";
      cin>>operation;
      cout<<"Enter two operands: ";
      cin>>num1>>num2;

      switch(operation){

         case '+':

              cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
              break;

        case '-':

             cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
             break;

        case '*':

             cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;
             break;

        case '/':

             cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;
             break;

        default:

            cout<<"Invalid operator"<<endl;


      }

      cout<<"Do you want to perform another operation?(y/n):";
      cin>>cont;

   }while(cont =='y' || cont=='Y');


}

int main(){

  Calculator();
  return 0;

}
