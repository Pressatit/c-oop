# include <iostream>
# include <sstream>

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
       long input_details();
       double get_credit();
       long new_account(long);
};

long accounts ::input_details()
{
cout<<"enter your account number :";
cin>>accountnum;
return(accountnum);
}
long accounts :: new_account(long newacc)
{
 newacc=16484537947353;
    cout<<"Your account number is "<<newacc<<endl;
    cout<<"What is your starting credit:";
    cin>>credit;

}

long accounts::get_number()
{
    cout<<"Your account number is :"<<accountnum<<endl;
    return(accountnum);
}

double accounts :: get_credit()
{
    cout<<"How much do you have in your account: ";
    cin>>credit;

}

void accounts :: deposit()
{
    double dep;
    cout<<"How much do you want to deposit" ;
    cin>>dep;

    credit=+dep;
     cout<<endl;
    cout<<"Your new credit is :"<<credit<<endl;
}

void accounts :: withdraw()
{
    double with;

    cout<<"How much do you want to withdraw:" ;
    cin>>with;

    if(with>credit)
    {
        cout<<"Invalid!!!! ";
    }
    else if(credit>with)
    {
        credit-=with;
    }

    cout<<endl;
    cout<<"Your new credit is :"<<credit<<endl;
}

double accounts :: show_details()
{
    cout<<"Your credit is: "<<credit<<endl;

}
int main()
{
     accounts m,n;
     long newacc=16484537947353;

char again;
int choice;
   cout<<"**************************************************************************"<<endl;
   cout<<"********************************WELCOME******************************"<<endl;
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
    m.new_account(newacc);

       break;

case 2:

    n.input_details();
    n.get_number();
    n.get_credit();
    n.show_details();
    n.withdraw();

    break;

case 3:
    n.input_details();
    n.get_number();
    n.get_credit();
    n.show_details();
    n.deposit() ;

    break;
case 4:
    n.input_details();
    n.get_number();
    n.get_credit();
    n.show_details();
    break;
   }
cout<<endl;cout<<endl;cout<<endl;
   i++;
   cout<<"Do you want to pick again(Y/N)";
   cin>>again;
   }

    while(again=='Y');

}
