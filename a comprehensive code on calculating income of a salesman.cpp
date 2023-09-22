# include <iostream>
# include <string>

#define fixedallowance 10000

using namespace std;

struct
{

    string name;
    double sales;
}Salesmen;
int main(){
 cout<<"*****************************************************\n";
 cout<<"*CALCULATING THE INCOME OF SALESMEN FROM SALES MADE *";
 cout<<"\n*****************************************************";

    int i;
    float commission;
    float tax;
    string name1;
    double sales;
    int Salesmen;
    float TotalIncome;

    cout<<"\n\nHow many sales men do you want to add: ";
    cin>>Salesmen;
    cout<<"\n";

    for(i=1;i<=Salesmen;i++){

     cout<<"SALES MAN " <<i<<endl;
    cout<<"Enter Salesman's name: ";
    cin>>name1;
    cout<<"Enter the sales made: ";
    cin>>sales;
    cout<<"\n";
    if (sales >10000 && 20000>=sales)
    {
        commission = (0.07*sales);
        cout<<" "<<name1 <<"'s commission is : "<<commission<<endl;
    }
    else if (sales>20000 && 50000>=sales)
    {
         commission = (0.09*sales);
         cout<<" "<<name1<< "'s commission is : "<<commission<<endl;
    }
    else if (sales>50000 )
    {
         commission = (0.12*sales);
         cout<<" "<<name1<< "'s commission is : "<<commission<<endl;
    }


    if (sales>10000)
    {
        tax = (0.1*(commission+fixedallowance));
        cout<<" "<<name1<<"'s tax is : "<<tax<<endl;


        cout<<" "<<name1<<"'s fixed amount is "<<fixedallowance<<endl;

        TotalIncome=(fixedallowance+commission)-tax;
        cout<<"The Total income of "<<name1<< " is "<<TotalIncome<<endl;
    }

    else
    {
        commission==0;
        tax = (0.1*(commission+fixedallowance));
        cout<<" "<<name1<<"'s tax is : "<<tax<<endl;

        cout<<" "<<name1<<"'s fixed amount is "<<fixedallowance<<endl;

        TotalIncome=(fixedallowance+commission)-tax;

        cout<<"The Total income of "<<name1<< " is "<<TotalIncome<<endl;

    }

    cout<<"\n";
    cout<<"\n";

    }


}
