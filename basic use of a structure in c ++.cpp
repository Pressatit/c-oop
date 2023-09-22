
#include<iostream>
#include <math.h>
using namespace std;

struct person
// data members declarations
{   char name[30];
    char contacts[30];
    float salary;
//member functions declarations

void input()
{
    cin>>name>>contacts>>salary;
}
void output()
{
    cout<<name<<contacts<<salary;
}
void compute_salary()
{
    salary=salary*10/100;
}
};
int main()
{
 struct person a,b,c;

 a.input();
  b.input();
   c.input();

cout<< a.compute_salary();
  cout<<b.compute_salary();
   cout<<c.compute_salary();








}
