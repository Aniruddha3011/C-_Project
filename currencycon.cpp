#include<iostream>
using namespace std;

class currcon{
    private:
            double usdtoeuroRate;
            double eurotousdRate;
            double indrupeetousdRate;
            double usdtoindrupeeRate;
            double yuantousdRate;
            double usdtoyuanRate;

    public:
           currcon(double usdtoeuro,double eurotousd,double indrupeetousd,double usdtoindrupee,double yuantousd,double usdtoyuan){
              usdtoeuroRate=usdtoeuro;
              eurotousdRate=eurotousd;
              indrupeetousdRate=indrupeetousd;
              usdtoindrupeeRate=usdtoindrupee;
              yuantousdRate=yuantousd;
              usdtoyuanRate=usdtoyuan;
            }

            void showexchangerate() const{
                cout<<"---------- Current Exchange Rate ----------"<<endl;
                cout<<"1 usd to euro:"<<usdtoeuroRate<<endl;
                cout<<"1 euro to usd:"<<eurotousdRate<<endl;
                cout<<"1 indian rupee to usd:"<<indrupeetousdRate<<endl;
                cout<<"1 usd to indian rupee:"<<usdtoindrupeeRate<<endl;
                cout<<"1 chinese yuan to usd:"<<yuantousdRate<<endl;
                cout<<"1 usd to chinese yuan:"<<usdtoyuanRate<<endl;
                cout<<"\n\n";

            }

            double usdtoeuro(double usdamo){
                return usdamo*usdtoeuroRate;
            }

            double eurotousd(double euroamo){
                return euroamo*eurotousdRate;
            }

            double indrupeetousd(double indamo){
                return indamo*indrupeetousdRate;
            }

            double usdtoindrupee(double usdamo){
                return usdamo*usdtoindrupeeRate;
            }

            double yuantousd(double yuanamo){
                return yuanamo*yuantousdRate;

            }

            double usdtoyuan(double usdamo){
                return usdamo*usdtoyuanRate;
            } 
};

int main(){
    const double initialusdtoeuroRate=0.91;
    const double initialeurotuusdRate=1.10;
    const double initialindRupeetousdRate=0.012;
    const double initialusdtoindRupeeRate=83.87;
    const double initialyuantousdRate=0.14;
    const double initialusdtoyuanRate=7.16;

    currcon converter(initialusdtoeuroRate,initialeurotuusdRate,initialindRupeetousdRate,initialusdtoindRupeeRate,initialyuantousdRate,initialusdtoyuanRate);

   
    int choice;
    double amount;
    char ch;

    do{
        system("cls");
        converter.showexchangerate();
        cout<<"-----< Currency Converter >-----"<<endl;
        cout<<"1.convert usd into euro"<<endl;
        cout<<"2.convert euro into usd"<<endl;
        cout<<"3.convert indian rupees into usd"<<endl;
        cout<<"4.convert usd into indian rupees"<<endl;
        cout<<"5.convert chinese yuan into usd"<<endl;
        cout<<"6.convert usd into chinese yuan"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"Enter a choice:";
        cin>>choice;

        switch(choice){
            case 1:
                   cout<<"Enter a amount:";
                   cin>>amount;
                   cout<<amount<<" "<<"usd is equivalent to"<<" "<<converter.usdtoeuro(amount)<<" "<<"euro"<<endl;
                   system("pause");
                   break;

            case 2:
                  cout<<"Enter a amount:";
                  cin>>amount;
                  cout<<amount<<" "<<"euro is equivalent to"<<" "<<converter.eurotousd(amount)<<endl<<"usd"<<endl;
                  system("pause");
                  break;

            case 3:
                  cout<<"Enter a amount:";
                  cin>>amount;
                  cout<<amount<<" "<<" indian rupee is equivalent to"<<" "<<converter.indrupeetousd(amount)<<" "<<"usd"<<endl;
                  system("pause");
                  break;

            case 4:
                 cout<<"Enter a amount:";
                 cin>>amount;
                 cout<<amount<<" "<<"usd is equivalent to"<<" "<<converter.usdtoindrupee(amount)<<" "<<endl;
                 system("pause");
                 break;

            case 5:
                 cout<<"Enter a amount:";
                 cin>>amount;
                 cout<<amount<<" "<<" chinese yuan equivalent to"<<" "<<converter.yuantousd(amount)<<endl;
                 system("pause");
                 break;

            case 6:
                 cout<<"Enter a amount:";
                 cin>>amount;
                 cout<<amount<<" "<<"usd is equivalent to"<<" "<<converter.usdtoyuan(amount)<<endl;
                 system("pause");
                 break;
            case 7:
                 exit(0);
                 break;
            default:
                  cout<<"please enter a valid choice";
                  break;
        }
        

    }while(choice!=0);
    return 0;

}