#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

int main(){

   int h,m,s;
   cout<<"Set Current Time "<<endl;
   do{
    cout<<"Enter Hours :";
    cin>>h;
   }while(!(h<24));
   do{
    cout<<"Enter Minutes: ";
    cin>>m;
   }while(!(m<60));
   do{
    cout<<"Enter Seconds: ";
    cin>>s;
   }while(!(s<60));

   system("clear");

   while(true){
    system("clear");
    cout<<"\n\n\n\n \t\t\t\t \v\v\v\v| "<<h<<":"<<m<<":"<<s<<" |\n";
    sleep(1);
    s++;
    if(s>59){
        s=0;
        m++;
    }
    if(m>59){
        m=0;
        h++;
    }
    if(h>=24){
        h=0;
    }
   }
   return 0;

}
