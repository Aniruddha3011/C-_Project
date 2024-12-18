#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;

int main(){
    srand(time(NULL));

    cout<<"WELCOME TO TYPING MASTER PROGRAM"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"\n";

    cout<<"Enter the given sentence:"<<endl<<"\n";
    
    string sentence[]={
    "We are friends",
    "Programming is fun and challenging.",
    "Practice makes perfect.",
    "Coding improves problem-solving skills",
    "I love new things",
    "Bhagavat gita says work hard in silence let success be your noise"};

    int total=sizeof(sentence)/sizeof(sentence[0]);
    int random=rand()%total;
    string sentences=sentence[random];
    cout<<sentences<<endl;
    time_t start=time(NULL);

    string input;
    getline(cin,input);


    time_t end=time(NULL);

    double timeused=difftime(end,start);

    int words=1;

    for( int i=0; i<input.length();i++){
        if (input[i]==' '){
            words++;
        }
    }

   
    if(input==sentences){
           double wpm=(words/timeused)*60;
           cout<<"time elapsed:"<<timeused<<" second"<<endl;

            cout<<"your speed:"<<wpm<<" wpm"<<endl;
    }

    else{
        cout<<"error in typing please write a correct senetence"<<endl;
    }
    




}
