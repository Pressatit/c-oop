# include <iostream>
# include <stdlib.h>

using namespace std;
# define fixedacc 50

class accounts
{
   long accountnum;
   double credit;

   public:
       double show_details();
       void deposit();
       void withdraw();
       long get_number();
       double input_details();
       double get_credit();

};

double accounts ::input_details()
{
cout<<"Your account number is 123456789"<<endl;
cout<<"What is your starting credit:";
cin>>credit;
cout<<"\n";
return(credit);
}


long int accounts::get_number()
{  long accountNum=123456789;
    cout<<"Your account number is :"<<accountNum<<endl;

}

double accounts :: get_credit( )
{
    cout<<"Your account balance is: "<<credit<<endl;


}

void accounts :: deposit()
{  double dep;

    cout<<"How much do you want to deposit" ;
    cin>>dep;

    credit+=dep;
     cout<<endl;
    cout<<"Your new credit is :"<<credit<<endl;
}

void accounts :: withdraw()
{   double with;
    cout<<"How much do you want to withdraw:" ;
    cin>>with;

    if(with>credit)
    {
        cout<<"You have an insufficient balance to make this withdrawal! ";
    }
    else if(credit>with)
    {
        credit-=with;
        cout<<endl;
    cout<<"Your new credit is :"<<credit<<endl;
    }


}

double accounts :: show_details()

{  long accountNum=123456789;
     cout<<"Your account number is: "<<accountNum<<endl;
    cout<<"Your credit is: "<<credit<<endl;

}
int main()
{
     accounts m,n;


char again;
int choice;
   cout<<"**************************************************************************"<<endl;
   cout<<"**                WELCOME TO DIGITAL BANK                                **"<<endl;
   cout<<"**************************************************************************"<<endl;

   cout<<"1.Opening a new account"<<endl;
   cout<<"2.Withdraw"<<endl;
   cout<<"3.Deposit"<<endl;
   cout<<"4.View details" <<endl;
   cout<<"5.Exit"<<endl;

cout<<endl;

   int i=0;
   do{
   cout<<"Pick a choice: ";
   cin>>choice;

   switch(choice)
   {
case 1:
    m.input_details();
       break;

case 2:

    n.get_number();
    n.get_credit();
    n.withdraw();

    break;

case 3:
    n.get_number();
    n.get_credit();
    n.deposit() ;

    break;
case 4:
    n.show_details();
    break;

case 5:
    exit(0);
    break;
   }
cout<<endl;cout<<endl;cout<<endl;
   i++;
   cout<<"Do you want to pick again(Y/N)";
   cin>>again;
   }

    while(again=='Y' || choice!=5 );

}
