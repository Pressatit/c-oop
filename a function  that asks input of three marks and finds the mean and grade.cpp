/*Write a program to input marks obtained by each student in three subjects (Maths, English and computing)and then compute the grade of each using functions.
*/
# include <iostream>

using namespace std;

double get_mean(double math,double English, double Computing)
{

    double mean=(math+English+Computing)/3;

    return (mean);
}



char get_grade(double mean)
{
    string esle="Mark not in scope";

if(mean>=70 && 100>=mean)
{
       return 'A';
}
else if (mean>=60 && 69>=mean)
{
   return 'B';
}
else if (mean>=50 && 59>=mean)
{
    return 'C';
}
else if (mean>= 40 && 49>= mean)
{
    return 'D';
}
else if (mean>=0 && 39>=mean)
{
    return 'E';
}
else
{
    cout<<"press";
}
}

int main()
{
    int students;
    cout<<"How many students do you want to add :";
    cin>>students;

    double Maths , English , Computing;

for(int i=1;i<(students+1);i++)
{
    cout<<"student "<<i<<endl;

    cout<<"Enter the marks for Maths: ";
    cin>>Maths;

    cout<<"Enter the marks for English: ";
    cin>>English;

    cout<<"Enter the marks for Computing: ";
    cin>>Computing;


     double mean =get_mean(Maths,English,Computing);

   cout<<"The mean is: "<<mean<<endl;

   get_grade(mean);

      cout<<"The grade of the student is: "<<get_grade(mean)<<endl;


}

}

