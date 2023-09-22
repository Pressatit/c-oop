# include <iostream>
using namespace std;

class employee
{
  protected:
      string name;
      char contact[15];
      char Department[20];
  public:


void output_details();

void input_details();

};

void employee:: input_details()
{
    cout<<" Enter the name of the employee     : ";cin>>name;
    cout<<" Enter the contact of the employee  : ";cin>>contact;
    cout<<"Enter the department of the employee: ";cin>>Department;

}
void employee ::output_details()
  {
    cout<<" The name of the employee is: "<<name<<endl;
    cout<<" The contact of the employee is: "<<contact<<endl;
     cout<<"The department of the employee is: "<<Department<<endl;
  }

class FullTime:public employee
{
    protected:
    long payrollNum;
    double salary;

public:
    double computesalary( )
    { double salary=0+30000;
      cout<<"Salary is :"<<salary<<endl;
    }
};
class PartTime: public employee
{
    protected:

    float payRate;
    int hrsWorked;
public:
    void input2()
    {
        cout<<"input payrate : ";
        cin>>payRate;
        cout<<"Enter hours worked :";
        cin>>hrsWorked;

    }
    void computePay ()
    {
        double pay =(payRate*hrsWorked);
         cout<<" The pay is :"<<pay;
  }

  void output2()
  {

  }
};

int main()
{

   PartTime p;
   FullTime f;
cout<<"Part time Fella.."<<endl;
p.input_details();
cout<<endl;
p.output_details();
cout<<endl;
p.input2();
cout<<endl;
 p.computePay();
 p.output2();
 cout<<endl;
 cout<<endl;

cout<<"Full time Fella..."<<endl;
f.input_details();
cout<<endl;
f.output_details();
cout<<endl;
f.computesalary();

}

