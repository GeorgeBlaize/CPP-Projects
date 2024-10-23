#include<iostream>
using namespace std;

double calculateBMI(double weight,double height){

     return weight/(height*height);

}

void displayBMICategory(double bmi){


      if(bmi<18.5){

           cout<<"Category: Underweight"<<endl;
      }

      else if(bmi>=18.5 && bmi<24.9){

            cout<<"Category: Normal weight"<<endl;
      }
      else if(bmi >=25.0 && bmi<29.9){
            cout<<"Category: Overweight"<<endl;
      }
      else{

           cout<<"Category: Obesity"<<endl;

      }

}

int main(){

     double weight,height,bmi;
     char choice;

     do{

         cout<<"BMI Calculator"<<endl;

         cout<<"Enter your weight in kilograms: ";
         cin>>weight;

         cout<<"Enter your height in meters: ";
         cin>>height;

         bmi=calculateBMI(weight,height);

         cout<<"Your BMI is : "<< bmi<<endl;

         displayBMICategory(bmi);

         cout<<"Do you want to calculate BMI again? (y/n): ";
         cin>>choice;



     }while(choice == 'Y' || choice =='y');

     return 0;


}
