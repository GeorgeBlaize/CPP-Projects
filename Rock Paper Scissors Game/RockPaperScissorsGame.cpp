#include<bits/stdc++.h>
using namespace std;

char getComputerChoice(){

    srand(time(0));
    int randomChoice=rand()%3;

    switch(randomChoice){

      case 0: return 'r';
      case 1: return 'p';
      case 2: return 's';
    }
    return 'r';

}

char getPlayerChoice(){

    char choice;
    cout<<"Enter your choice(r for rock,p for paper,s for scissors): ";
    cin>>choice;
    return choice;
}

void determineWinner(char player,char computer){

    if(player==computer){
        cout<<"It's a tie!"<<endl;
    }else if((player=='r' && computer=='s')||
             (player=='p' && computer=='r')||
             (player=='s' && computer=='p')){
             cout<<"You win!"<<endl;
             }else{
              cout<<"You lose!";
             }
}


int main(){

   char playAgain;
   do{
    char playerChoice=getPlayerChoice();
    char computerChoice=getComputerChoice();

    cout<<"You chose: "<<playerChoice<<endl;
    cout<<"Computer chose: "<<computerChoice<<endl;

    determineWinner(playerChoice,computerChoice);

    cout<<"Do you want to play again? (y/n): ";
    cin>>playAgain;
   }while(playAgain=='y' || playAgain=='Y');

   return 0;

}
