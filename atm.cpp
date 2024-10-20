#include<iostream>
#include<string>
using namespace std;

class Atm
{
    private:
             int balance;
             long int pin,d=0,a,b; 
           

    public:
           Atm(int bal)
           {
            balance=bal;

           }

           int getbal()
           {
            return balance;
           }

           int withdraw(int amo)
           {
               cout<<"Enter your pin:";
               cin>>pin;
               a=pin;
              
               while(a!=0)
              {
                b=a%10;
                d=d+1;
                a=a/10;
              }
      
               if(d==4)
              {
                 if (amo<=balance)
               {
                  balance=balance-amo;
                  return balance;
               }

                 else
                {
                  return false;
                }
              }

               else
              {
                cout<<"please enter valid pin"<<"\n";
              }

            } 

           int dipo(int amo)
            {
               cout<<"Enter your pin:";
               cin>>pin;
               a=pin;
              
               while(a!=0)
              {
                b=a%10;
                d=d+1;
                a=a/10;
              }

              
              
              if(d==4)
              {
            
                 balance=balance+amo;
                 return balance;
              }

               else
              {
                cout<<"please enter valid pin"<<"\n";
                return false;
              }
            }

            int transfer(int amo)

            {
              cout<<"Enter a pin:";
              cin>>pin;
              a=pin;
               if (pin==a)
               {
                if (amo<=balance)
                {
                  balance=balance-amo;
                  return true;
                }

                else{
                  return false;
                }
               }

               else
               {
                cout<<"please enter valid pin";

               }
               
            }


};

 int main()
{


    Atm p(10000);
    int choice,amo,success; 
    char op;

    do
    {
        cout<<"1.view balance"<<endl;
        cout<<"2.cash withdraw"<<endl;
        cout<<"3.cash diposited:"<<endl;
        cout<<"4.cash transfer:"<<endl;
        cout<<"5.thank you visit again"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
      switch (choice)
     {
        case 1:
               cout<<"your balance is:"<<p.getbal()<<"\n";
               break;

        case 2:
               cout<<"Enter the amount if you want to withdraw:";
               cin>>amo;
               success=p.withdraw(amo);
               if (success)
              {
                 cout<<"cash withdraw successfully"<<endl;
                 
         
              } 

               else
              {
                 cout<<"insufficient balance in your account"<<endl;
                 return false;
              }
                break;

        case 3:
               cout<<"Enter the amount if you want to diposite:";
               cin>>amo;
               success=p.dipo(amo);
               if (success)
              {
                cout<<"cash diposited successfully"<<endl;
                
              }

               else
              {
                 cout<<"cash diposited unsuccessfully"<<endl;
                 return false;
              }
                 break;


        case 4:
                cout<<"Enter a amount if you want to transfer:";
                cin>>amo;

                success=p.transfer(amo);
                if (success)
                {
                  cout<<"cash transfer successfully"<<endl;
                  
                }

                else
                {

                  cout<<"cash transfer unsuccessfully"<<endl;
                  return false;
                }
                break;

          
        case 5:
                cout<<" thank you visit again  ";
                break; 
    
        default:
                cout<<"invalid choice \n please enter valid choice"<<endl;
                break;
             
      }
    
    cout<<"Do You Want To Continue [Yes/No]:";
    cin>>op;
    }while (op == 'Y' || op == 'y');

}



    
  

    