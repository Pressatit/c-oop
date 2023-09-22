#include<iostream>
using namespace std;
class shape
{
public:
virtual double get_area()=0;
};
class square: public shape
{
protected:
    double length;
public:
void get_length()
{ cout<<"\ninput the length : ";
cin>>length;}
double get_area()
{return(length*length);}
};

class triangle: public square
{ protected:
double width;
public:
void get_width()
{cout<<"\ninput the width: "; cin>>width;}

double get_area()
{
    return((length *width)/2.0);
}
};
class rectangle: public triangle
{
public:
double get_area()
{return(length*width);}
};
int main()
{
    for(int i=0;i<=3;i++){
square s, *ps; ps=&s;
triangle t, *pt; pt=&t;
rectangle r, *pr; pr=&r;

ps->get_length();
cout<<"\narea of the square :"<<ps->get_area();
ps=&t; pt->get_length(); pt->get_width();
cout<<"\narea of the triangle"<<pt->get_area();
ps=&r; pt=&r;
pr->get_length(); pr->get_width();
cout<<"\narea of rectangle: "<<pr->get_area();
    }
return (0);
}

