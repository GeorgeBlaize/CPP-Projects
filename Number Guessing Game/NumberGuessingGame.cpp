#include<bits/stdc++.h>

using namespace std;

void playGame(){
      srand(time(0));
      int number=rand()%100+1;
      int guess;
      int attempts=0;

      cout<<"Guess the number(between 1 and 100): ";

      do{
        cin>>guess;
        attempts++;
        if(guess>number){
            cout<<"Too high! Try again: ";
        }
        else if(guess<number){
            cout<<"Too low! Try again: ";
        }
      }while(guess!=number);

      cout<<"Congratulations! You guessed the number in "<< attempts<<" attenmpts. "<<endl;



}


int main(){

     playGame();
     return 0;


}
