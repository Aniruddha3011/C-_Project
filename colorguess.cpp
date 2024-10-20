#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

enum Color { RED,GREEN,BLUE,YELLOW,PURPLE };

Color generateRandomColor(){
    int randomnum=rand()%5;
    return static_cast<Color>(randomnum);

}

string colortostring(Color color){
    switch(color){
        case RED:
               return "Red";

        case GREEN:
               return "Green";

        case BLUE:
               return "Blue";

        case YELLOW:
               return "Yellow";

        case PURPLE:
               return "Purple";
        default:
               return "Unknown";
    }
}

int main(){
    srand(time(0));
    Color targetcolor=generateRandomColor();

    string guess;

    while(true){
        system("cls");
        cout<<"Welcome to the colored square Game!"<<endl;
        cout<<"***********************************"<<endl;
        cout<<"Guess the color of the square (Red,Green,Blue,Yellow or Purple)"<<endl;
        cout<<"Enter a your color you want to guess it:";
        cin>>guess;

        for (int i=0;i<guess.length();i++){
            guess[i]=tolower(guess[i]);
        }

        if (guess=="red" || guess=="green" || guess=="blue" || guess=="yellow" || guess=="purple"){
            Color userColor;
            if (guess=="red"){
                userColor=RED;
            }

            else if(guess=="green"){
                userColor=GREEN;

            }

            else if(guess=="blue"){
                userColor=BLUE;

            }

            else if(guess=="yellow"){
                userColor=YELLOW;

            }

            else if(guess=="purple"){
                userColor=PURPLE;
            }
            
            else{
                cout<<"wrong choice";
            }

            if (userColor==targetcolor){
                cout<<"you guessed color:"<<userColor<<endl;
                cout<<"computer guessed color:"<<targetcolor<<endl;
                cout<<"congratulation ! you guessed correct color."<<endl;
                break;
            }

            else{
                
                cout<<"you guessed color:"<<userColor<<endl;
                cout<<"computer guessed color:"<<targetcolor<<endl;
                cout<<"wrong guess. Try again!"<<endl;
                
            }

            Sleep(3
            000);
        }

        else{
            cout<<"invalid color please enter a valid color."<<endl;
        }

    
    }
}
