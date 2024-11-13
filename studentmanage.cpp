#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
            string name[20],age[20],roll_no[20],contact_no[20],course[20];

    public:
            int n,total=0;
            void enter()
            {
              cout<<"How Many Student Do You want To Enter:";
              cin>>n;

              if (total==0){
                total=total+n;

                for(int i=1;i<=n;i++){
                    cout<<"student"<<i<<":"<<endl;
                    cout<<"Student name is:";
                    cin>>name[i];
                    cout<<"course:";
                    cin>>course[i];
                    cout<<"roll no:";
                    cin>>roll_no[i];
                    cout<<"age:";
                    cin>>age[i];
                    cout<<"contact no:";
                    cin>>contact_no[i];
                    cout<<"\n";
                }
                
                }
                else{
                    for(int i=total;i<=total+n;i++){
                        cout<<"student"<<i+1<<":"<<endl;
                        cout<<"Student name is:";
                        cin>>name[i];
                        cout<<"course:";
                        cin>>course[i];
                        cout<<"roll no:";
                        cin>>roll_no[i];
                        cout<<"age:";
                        cin>>age[i];
                        cout<<"contact no:";
                        cin>>contact_no[i];

                    }
                    total=total+n;

                }


            }

            void show()
            {
                for(int i=1;i<=total;i++){
                    cout<<"student:"<<i<<endl;
                    cout<<"name:"<<name[i]<<endl;
                    cout<<"course:"<<course[i]<<endl;
                    cout<<"roll no:"<<roll_no[i]<<endl;
                    cout<<"age:"<<age[i]<<endl;
                    cout<<"contact no:"<<contact_no[i]<<endl;
                    cout<<"\n";
                }
            }

            void update()
            {
                string arr;
                cout<<"Enter a name you want to serach it:";
                cin>>arr;

                for (int i=1;i<total;i++){
                    if (arr==name[i]){
                        cout<<"prevoius data:";
                        cout<<"student:"<<i<<endl;
                        cout<<"name:"<<name[i]<<endl;
                        cout<<"course:"<<course[i]<<endl;
                        cout<<"roll no:"<<roll_no[i]<<endl;
                        cout<<"age:"<<age[i]<<endl;
                        cout<<"contact no:"<<contact_no[i]<<endl;
                        cout<<"\n";

                        cout<<"Enter a new data:"<<endl;
                        cout<<"Name:";
                        cin>>name[i];
                        cout<<"course:";
                        cin>>course[i];
                        cout<<"roll no:";
                        cin>>roll_no[i];
                        cout<<"age:";
                        cin>>age[i]; 
                        cout<<"contact no:";
                        cin>>contact_no[i];
                        cout<<"\n";
                        

                    }

                    else{
                        cout<<"name doesnt exist";
                        cout<<"\n";
                    }
                }
            }

            void search()
            {
                string sc;
                cout<<"Enter a name you want to search:";
                cin>>sc;
                for(int i=1;i<total;i++){
                    if(sc==name[i]){
                        cout<<"student:"<<i<<endl;
                        cout<<"name:"<<name[i]<<endl;
                        cout<<"course:"<<course[i]<<endl;
                        cout<<"roll no:"<<roll_no[i]<<endl;
                        cout<<"age:"<<age[i]<<endl;
                        cout<<"contact no:"<<contact_no[i]<<endl;
                        cout<<"\n";

                    }
                }
            }


            void deleat()
            {
                string del;
                cout<<"Enter a roll no you want delete data:";
                cin>>del;
                for(int i=1;i<=total;i++){
                    if(del==roll_no[i]){
                        total=0;

                        cout<<"data has been deleated successfully";
                        cout<<"\n";
                    }
                }
            }




};

int main()
{
    student s;
    char ch;
    int choice;
    do{
        cout<<"press 1 for Enter a data"<<"\n";
        cout<<"press 2 for show a data"<<"\n";
        cout<<"press 3 for update a data"<<"\n";
        cout<<"press 4 for serach a data"<<"\n";
        cout<<"press 5 for deleat a data"<<"\n";
        cout<<"Enter a choice:";
        cin>>choice;
        switch(choice){
            case 1:
                   s.enter();
                   break;
            case 2:
                   s.show();
                   break;
            case 3:
                   s.update();
                   break;
            case 4:
                   s.search();
                   break;
            case 5:
                   s.deleat();
                   break;
            default:
                   cout<<"invalid choice";
                   break;
        }
        cout<<"Do you want to continue[Y/N]:";
        cin>>ch;
    }while(ch=='Y' || ch=='y');
}
