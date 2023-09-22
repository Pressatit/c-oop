# include <iostream>
# include <string>


using namespace std;

int main()
{
int i;
int arraysize;
float mean;
float marks[arraysize];
float sum=0.0;

cout <<"How many marks are you entering ?"<<endl;
cin>>arraysize;
    cout<<"\n";


    for(int i=1;i<(arraysize+1);i++)
    {
        cout<<"Enter mark "<< i<<" : " ;
        cin>>marks[i];

    }
    for(int i=0;i<(arraysize+1);i++){

    sum=sum+marks[i];

    }
    cout<<"\n";
     cout<<"The sum is:" <<sum;

     mean=sum/arraysize;
         cout<<"\n";
         cout<<"\n";

          cout<<"The mean of the "<<arraysize<<" marks is " << mean;

}

