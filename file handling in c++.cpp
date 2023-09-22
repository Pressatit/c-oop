# include <iostream>
# include <fstream>
using namespace std;
int main()
{


fstream myfile ;
myfile.open("student.csv",ios::app);

string code[35];
string name[35];
double salary[35];
int i;int ent;

cout<<"ENTERING INTO THE FILE ."<<endl;
cout<<"How many do you want to add? ";
cin>>ent;
for (i=0;i<=ent;i++)
{

    cout<<"Enter the student marks  :";
    cin>>code[i];

    cout<<endl;
    cout<<endl;
}

cout<<"SAVING INTO THE FILE "<<endl;

for (i=0;i<=ent;i++)
{
cout<<endl;
    myfile<<" "" , "<<code[i]<<" , "<<endl;;

}

myfile.close();
{
    if(!myfile.is_open())
    {
        cout<<"file is closed succesfully";
    }
}
system("pause");
}
