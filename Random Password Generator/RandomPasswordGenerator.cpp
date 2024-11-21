#include<bits/stdc++.h>
using namespace std;

string generatePassword(int length){

   const string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                             "abcdefghijklmnopqrstuvwxyz"
                             "0123456789"
                             "!@#$%^&*()_+";
    string password;
    srand(static_cast<unsigned int>(time(0)));

    for(int i=0; i<length; i++){
       password += characters[rand()%characters.size()];
    }
    return password;

}

int main(){

     int length;
     char choice;

     do{

        cout<<"Enter the desired password length: ";
        cin>>length;

        if(length<=0){

           cout<<"Invalid length! Please enter a positive integer.\n";
           return 1;
        }

        string password = generatePassword(length);
        cout<<"Generated Password: "<<password<<endl;

        cout<<"Do you want to generate another password?(y/n):";
        cin>>choice;

     }while(choice=='Y' || choice=='y');

     return 0;


}
