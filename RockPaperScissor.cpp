#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

char choice='0';
int intchoice=0;
int ran=0;
char rematch='0';


void dashboard(){
    cout<<endl;
    cout.width(50);
    cout<<"-------------------------------------------"<<endl;
    cout.width(50);
    cout<<"    R O C K   p a p e r   S C I S S O R    "<<endl;
    cout.width(50);
    cout<<"-------------------------------------------"<<endl<<endl;

    cout<<"Hi There! Let's play Rock Paper Scissor."<<endl<<"All you want to do is :-"<<endl;
    cout<<"\t\t\t\"r\" for ROCK"<<endl;
    cout<<"\t\t\t\"p\" for PAPER"<<endl;
    cout<<"\t\t\t\"s\" for SCISSOR"<<endl;
    cout<<"Press your choice then hit ENTER!"<<endl<<endl;
    cout<<"Let's GO!"<<endl;
}

void userinputs(){
    cout<<"Enter your choice :- ";
    cin>>choice;
    // do{

    // if (choice!='r' ||choice!='R' ||choice!='p' ||choice!='P' ||choice!='s' ||choice!='S'){
    //         cout<<"Invalid Input"<<endl;

    //         cout<<"Enter your choice again :- ";
    //         cin>>choice;
    // }
    // }while(choice!='r' ||choice!='R' ||choice!='p' ||choice!='P' ||choice!='s' ||choice!='S');
}

void output(){
    /*  1 = Rock
        2 = Paper
        3 = Scissor
    */

   srand(time(0));
   ran= 1+(rand()%3);

   if(choice=='r' || choice=='R'){
        intchoice=1;
   }
   else if (choice=='p' || choice=='P'){
        intchoice=2;
   }else if(choice=='s' || choice=='S'){
        intchoice=3;
   }

   if(intchoice==ran){
    cout<<"Tied"<<endl;
   }
   else if((intchoice==1 && ran==3) || (intchoice==2 && ran==1) || (intchoice==3 && ran==2)){
    cout<<"You won"<<endl;
   }
   else{
    cout<<"You lose"<<endl;
   }

}

int main(){

    dashboard();
    

    do{
        userinputs();
        output();

        cout<<"You want to re-match? (y/n) :";
        cin>>rematch;
    }while(rematch=='y');

    cout<<"Thank you for playing\nHave a nice Day!"<<endl;

    return 0;
}
