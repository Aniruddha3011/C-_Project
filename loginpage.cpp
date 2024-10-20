#include<iostream>
#include<vector>
using namespace std;

class user{
    private:
            string username,password;
    public:
            user(string username,string password){
               this->username=username;
               this->password=password;
            }

            string getname(){
                return username;
            }

            string getpassword(){
                return password;
            }
};

class usermanager{
    private:
            vector<user> users;
    public:
           void registeruser(){
            string username,password;

            cout<<"Enter a user name:";
            cin>>username;

            cout<<"Enter a password:";
            cin>>password;

            user newuser(username,password);
            users.push_back(newuser);
            cout<<"user register successfully......";
            cout<<"\n";
        }

        bool login(string username,string password){
            for (int i=0;i<users.size();i++){
                if (users[i].getname()==username){

                    if(users[i].getpassword()==password){
                        cout<<"login successfully......";
                        cout<<"\n";
    
                    }

                    else{
                        cout<<"please enter valid password";
                        return false;
                    }
                }

                else{
                    cout<<"please enter a valid username";
                    cout<<"\n";
                    return false;
                }
            }
        }

        void showusers(){
            for(int i=0;i<users.size();i++){
                cout<<"user:"<<users[i].getname()<<endl;
            }
        }

        void searchuser(string username){
          for (int i=0;i,users.size();i++){
            if (users[i].getname()==username){
                cout<<"user found";

            }
            else{
                cout<<"user not found";
            }
          }
        }

        void deleteuser(string username){
            for (int i=0; i<users.size();i++){
                if (users[i].getname()==username){
                    users.erase(users.begin()+i);
                    cout<<"user remove successfully"<<endl;
                }

                else{
                    cout<<"please enter a valid username"<<endl;
                }
            }
        }
};

int main(){
    usermanager obj1;
    int choice;
    char ch;

   
    do{
        system("cls");
        cout<<"-----LOGIN FORM-----"<<endl;
         cout<<"1.Register user"<<endl;
         cout<<"2.login"<<endl;
         cout<<"3.show all users"<<endl;
         cout<<"4.search user"<<endl;
         cout<<"5.Delete user"<<endl;
         cout<<"6.Exit"<<endl;
         cout<<"Enter a your choice:";
         cin>>choice;
         switch(choice)
         {
            case 1:{
                  obj1.registeruser();
                  break;
            }

            case 2:{
                  string username,password;

                  cout<<"Enter a user name:";
                  cin>>username;

                  cout<<"Enter a password:";
                  cin>>password;
                  obj1.login(username,password);
                  break;
            }

            case 3:{
                  obj1.showusers();
                  break;
            }

            case 4:{
                string username;
                cout<<"Enter a username you want to search it:";
                cin>>username;
                obj1.searchuser(username);
                break;
            }

            case 5:{
                string username;
                cout<<"Enter a user name ypu want to delete from our database:";
                cin>>username;
                obj1.deleteuser(username);
                break;
            }

            case 6:{
                cout<<"your successfully exit from login page";
            }

        }

        cout<<"Do You Want To Continue[Y/N]:";
        cin>>ch;
    }while(ch=='y' || ch=='Y');
    

  return 0;
} 